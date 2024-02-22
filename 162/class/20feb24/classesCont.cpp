#include <iostream>
#include "/Users/matthew_holmes/Programing/C++/Cpp/162/class/20feb24/Rectangle2.h"
using namespace std;



int main() 

{ // ----- Start main -----
    Rectangle2 *kitchen = nullptr;
    Rectangle2 *bedroom = nullptr;
    Rectangle2 *bathroom = nullptr;

    double uInput;
    double totalArea;

    kitchen = new Rectangle2;
    bathroom = new Rectangle2;
    bedroom = new Rectangle2;

    cout << "This program will calculate the area of a rectangle" << endl;
    


        cout << "What is the width of the kitchen ";
        cin >> uInput;
        kitchen->setWidth(uInput);
        cout << "What is the length of the kitchen ";
        cin >> uInput;
        kitchen->setHeight(uInput);

        cout << "What is the width of the bathroom ";
        cin >> uInput;
        bathroom->setWidth(uInput);
        cout << "What is the length of the bathroom  ";
        cin >> uInput;
        bathroom->setHeight(uInput);

        cout << "What is the width of the bedroom ";
        cin >> uInput;
        bedroom->setWidth(uInput);
        cout << "What is the length of the bedroom ";
        cin >> uInput;
        bedroom->setHeight(uInput);
        
        
        
    
        
        /* code */
    
    cout <<"------------ Total Area ------------- "<< endl;
    totalArea = kitchen->getArea() + bedroom->getArea() + bedroom->getArea();
    cout << totalArea << " Sqft";

    delete kitchen;
    delete bathroom;
    delete bedroom;

    kitchen = nullptr;
    bathroom = nullptr;
    bedroom = nullptr;
    

} // ----- End main -----


/* ---------- notes ----------
Object oriented 

> Encapsulation
   -------------------------------
   | - methods -> member functions| <-- one class
   | - data members               |
   --------------------------------

> Inheritance

     mom <-- human class                
    -------------
    | Height    |       
    | Eye color | <-- member functions
    | Hir color |
    --------------------
    | Personality      |
    | Athletic ability | <-- data members
    --------------------
> Poly-morphism
    - two objects with same class but entirely different instantiations
    - every instantiated object from one class can be different 

-------- end notes -------- */ 