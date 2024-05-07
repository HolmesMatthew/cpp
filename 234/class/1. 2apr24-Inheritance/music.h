#pragma once
#ifndef MUSIC_H
#define MUSIC_H
#include "media.h"
#include <string>
using std::string;

class Music : public Media // <-- movie inheriting from media class
{ 
    private:
        string artist;
        int tracks;

    public:
        // Default CTOR with inherited info
        Music() : Media()
        {
            artist = "";
            tracks = 0;
        }
        // Overloaded CTOR
        Music(string name, float len, string gen, float cost, string a, int t) : Media(name,len, gen, cost)
         {
            artist = a;
            tracks = t;
         }


        string getArtist(){
            return artist;
        }
        int getTracks(){
            return tracks;
        }


};

#endif // !MUSIC_H