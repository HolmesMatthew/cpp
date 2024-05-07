#include <iostream>
#include "media.h"
#include "media.cpp"
#include "music.h"
#include "movie.h"
// #include <cstdlib>
// #include <fstream> // for file input/output
// #include <string> 
// #include <cctype> 
// #include <iomanip> // for formating
using namespace std;


int main() 
{ // ----- Start main -----

    // Music BRhapsody() // <-- empty
    Music BRhapsody("Bohemian Rhapsody", 4784, "Rock", 11.99, "Queen", 22); // <-- filled

    string albumArtist = BRhapsody.getArtist(); 
    // cout << albumArtist << endl;

    Media object1("testObj", 1175, "testGenre", 9.99);
    Media object2(object1); // <-- calling copy constructor
    Media object3("",0,"",0);

    cout << object1.getName() << endl;
    cout << object2.getName() << endl;
    cout << "------------" << endl;

    object3 = object2; // uses assignment operator instead of coping
    cout << object3.getName() << endl;

} // ----- End main -----


/* ---------- notes ----------

    ---------------------
    |       media       | <-- class                                                      
    ---------------------
    |    name: string   | <-- dataMember 
    |    length: float  |
    |    genre: string  |
    |    cost: float    |
    ---------------------

    +getName():string     <-- functionCall():returnType     
    +getLength():float;
    +getGenre():string;
    +getCost():float;
    +setCost(float)

-------- end notes -------- */ 