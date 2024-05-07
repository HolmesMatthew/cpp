#pragma once
#ifndef MEDIA_H
#define MEDIA_H

#include <string>
using std::string;

class Media {
    private:
        string name;
        float length;
        string genre;
        float cost;
        // ˇ for testing ˇ
        int trackNum;
        string* trackNames;

        void createTrackNames(int trackNum){
            trackNames = new string[trackNum];
            for (int i = 0; i < trackNum; i++)
            {
                trackNames[i] = "";
            }
            
        }

    public:
        // Default CTOR <-- Default constructor
        Media(){
            name = "";
            length = 0.0;
            genre = "";
            cost = 0.0;

        }
        Media(string n, float l, string g, float c){
            name = n;
            length = l;
            genre = g;
            cost = c;
            createTrackNames(4);
        }
    // ˇ using pointers ˇ

    // Copy constructor
    Media(const Media& obj) 
    {
        name = obj.name;
        length = obj.length;
        genre = obj.genre;
        cost = obj.cost;
        trackNum = obj.trackNum;
        trackNames = new string[trackNum];
        for (int i = 0; i < trackNum; i++)
        {
            trackNames[i] = obj.trackNames[i];
        }
        

    }
    // overloaded assignment (=) operator
    const Media operator=(const Media &right){
        if (this != &right)
        {
            delete[] trackNames;
            name = right.name;
            length = right.length;
            genre = right.genre;
            cost = right.cost;
            trackNum = right.trackNum;

            trackNames = new string[trackNum];
            for (int i = 0; i < trackNum; i++)
        {
            trackNames[i] = right.trackNames[i];
        }

        }
        return *this;
    }
    // Destructor
    ~Media() 
    {
        delete [] trackNames;
    }

    string getName();
    float getLength();
    string getGenre();
    float getCost();
    void setCost(float c);




};

#endif // !MEDIA_H