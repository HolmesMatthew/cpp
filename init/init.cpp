#include <iostream>
using namespace std;
 
class Shape
{
public:
       Shape()
       { cout << "Shape ctor" << endl; }
       virtual ~Shape()
       { cout << "Shape dtor" << endl; }
       virtual void draw()
       { cout << "Shape" << endl; }
};
class Circle : public Shape
{
public:
       Circle()
       { cout << "Circle ctor" << endl; }
       ~Circle()
       { cout << "Circle dtor" << endl; }
       void draw()
       { cout << "Circle" << endl; }
};
class Rect : public Shape
{
public:
       Rect()
       { cout << "Rect ctor" << endl; }
       ~Rect()
       { cout << "Rect dtor" << endl; }
       void draw()
       { cout << "Rect" << endl; }
};
int main()
{
       Shape* shapes[3];
       shapes[0] = new Circle;
       shapes[1] = new Rect;
       shapes[2] = new Shape;
       Shape a = *shapes[0];
       for(int i = 0; i < 3; i++)
       {
              shapes[i]->draw();
              delete shapes[i];
       }
       cout << "This test is over!" << endl;
       return 0;
}