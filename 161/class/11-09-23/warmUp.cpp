#include <iostream>
using namespace std;

// --- initialize functions ---
double getLength();
double getWidth();

// & <-- points to actual cell, your able to change the value |vs| no & you are only copying data and can not change value
// & <-- passing by reference
double getArea(double &, double);
void displayData(double, double, double);

// --- main ---
int main(){
    double l = getLength();
    double w = getWidth();
    double area = getArea(l,w);
    displayData(area,l,w);
}

// --- create functions ---
double getLength(){
    double length = 0.00;
    cout << "Enter the rectangles length: ";
    cin >> length;
    return length;
}

double getWidth(){
    double width = 0.00;
    cout << "Enter the rectangles width: ";
    cin >> width;
    return width;
} 

double getArea(double & x ,double y){
    double area = x*y;
    return area;
}

void displayData(double a, double l, double w){
    cout << "Length = " << l << "\nWidth = " << w << "\nArea = " << a << endl;
}




