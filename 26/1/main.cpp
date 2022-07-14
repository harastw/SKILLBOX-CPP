#include "track.hpp"
#include "audio_player.hpp"

using namespace std;

int main()
{
    string input;
    Audio_Player player;
    player.download_default_tracks();
    while (true)
    {
        cout << "enter command: ";
        cin >> input;
        if (input == "play")
            player.play_track();
        else if (input == "pause")
            player.pause();
        else if (input == "stop")
            player.stop();
        else if (input == "next")
            player.next();
        else if (input == "exit")
            exit(EXIT_SUCCESS);
        else
        {
            cout << "incorrect input\n";
            continue;
        }
    }
}
