#include <vector>
#include <string>
#include <ctime>
#include <iostream>

class Audio_Player
{
private:
    vector<Track> tracks;
    bool pause_on = false, play = false;
    int id;
    
    int search_track(string s);

public:
    void download_default_tracks();

    void play_track();

    void pause();

    void stop();

    void next();
};