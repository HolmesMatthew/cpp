#include <iostream>
// #include <fstream> // for file input/output
// #include <string> 
// #include <cctype> 
// #include <iomanip> // for formating
using namespace std;

class Rectangle
{
    private: // <-- can be changed with . class methods / hidden from main
        double width; 
        double height;
    public: // <-- can be seen by user and shared by main
        void setWidth(double);
        void setHeight(double);
        double getWidth() const; // <-- READ ONLY
        double getHeight() const; // <-- const so user cant change, value is what it is
        double getArea() const;


};

// setters -- setWidth & setHeight method to assign width data member

// call class_name::followed_by_function
void Rectangle::setWidth(double w)
{
    width = w;
}
void Rectangle::setHeight(double h)
{
    height = h;
}

// getters -- getWidth, getHight, & getArea
double Rectangle::getWidth() const
{
    return width;
}
double Rectangle::getHeight() const
{
    return height;
}

// mutator -- getArea
double Rectangle::getArea() const
{
    return height * width;
}


int main() 

{ // ----- Start main -----
    Rectangle box;
    Rectangle rect;
    double rectWidth;
    double rectHeight;
    // double uInput;


    cout << "This program will calculate the area of a rectangle" << endl;
    
    for (int i = 0; i <= 1; i++)
    {
        cout << "What is the width of the " <<i+1<<  " rectangle: ";
        cin >> rectWidth;
        cout << "What is the height of the " <<i+1<<  " rectangle: ";
        cin >> rectHeight;

        if (i ==0 )
        {
            box.setWidth(rectWidth);
            box.setHeight(rectHeight);
        }else if(i == 1){

            rect.setWidth(rectWidth);
            rect.setHeight(rectHeight);
        }
        
    
        
        /* code */
    }
    cout <<"------------ rectangle 1 ------------- "<< endl;
    cout << "Width: " << box.getWidth() <<endl;
    cout << "Height: " << box.getHeight() <<endl; 
    cout << "area: " << box.getArea() <<endl;
    cout << endl;
    cout <<"------------ rectangle 2 ------------- "<< endl;
    cout << "Width: " << rect.getWidth() <<endl;
    cout << "Height: " << rect.getHeight() <<endl; 
    cout << "area: " << rect.getArea() <<endl;
    cout << endl;

    

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