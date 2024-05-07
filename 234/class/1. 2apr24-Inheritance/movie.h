#pragma once
#ifndef MOVIE_H
#define MOVIE_H
#include "media.h"
#include <string>
using std::string;

class Movie : public Media { // <-- movie inheriting from media class
    private:
        string director;
        string rating;

    public:
        // Default CTOR with inherited info
        Movie() : Media()
        {
            director = "";
            rating = "";
        }
        // Overloaded CTOR
        Movie(string name, float len, string gen, float cost, string d, string r) : Media(name,len, gen, cost)
         {
            director = d;
            rating = r;
         }

        // ACCESSOR
        string getDirector(){
            return director;
        }
        string getRatting(){
            return rating;
        }
        // MUTATOR
        void setRating(string r){
            rating = r;
        }

};

#endif // !MOVIE_H