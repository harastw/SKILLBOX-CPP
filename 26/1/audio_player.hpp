#include "audio_player.h"
    
int Audio_Player::search_track(string s)
{
    int size = tracks.size();
    for (int i = 0; i < size; i++)
        if (s == tracks[i].get_name())
        {
            cout << "track found\n";
            return i;
        }
    return -1;
}

void Audio_Player::download_default_tracks()
{
    for (int i = 0; i < 5; i++)
    {
        Track new_track;
        string index = to_string(i+1);
        string new_name = "track" + index;
        cout << "downloaded track: " << new_name << "\n";
        string new_date = "1970y 1m " + index + "d";
        new_track.init(new_name, new_date, 10);
        tracks.push_back(new_track);
    }
}

void Audio_Player::play_track()
{
    if (!play)
    {
        string input;
        cout << "enter track name: ";
        cin >> input;
        id = search_track(input);
        if (id == -1)
            cout << "Track not found\n";
        else
        {
            cout << "start track: " << tracks[id].get_name() << "\n" << "date: "
            << tracks[id].get_date() << "\n" << "duration: " << tracks[id].get_duration() << "\n";
            play = true;
        }
    }
}

void Audio_Player::pause()
{
    if (!pause_on)
    {
        pause_on = true;
        cout << "pause on\n";
    }
    else
    {
        pause_on = false;
        cout << "pause off\n";
    }
}

void Audio_Player::stop()
{
    if (play)
    {
        cout << "stop\n";
        play = false;
    }
    else cout << "nothing to stop\n";
}

void Audio_Player::next()
{
    id = rand() % (tracks.size() - 1);
    cout << "start track: " << tracks[id].get_name() << "\n" << "date: "
    << tracks[id].get_date() << "\n" << "duration: " << tracks[id].get_duration() << "\n";
    play = true;
}