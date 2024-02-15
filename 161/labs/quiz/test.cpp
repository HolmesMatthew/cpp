#include <iostream>
#include <vector>
#include <array>

using namespace std;

int GetSqrFt();
vector<array<int,3> > GetPlants(int &totalSqFt);

int main(){
    int totalSqFt = GetSqrFt();
    vector<array<int, 3> > plants = GetPlants(totalSqFt);

    // Displaying the results
    cout << "Total square footage used: " << totalSqFt << endl;
    cout << "Number of plant types: " << plants.size() << endl;
}

int GetSqrFt(){
    int plot = 0;
    cout << "Enter the square footage of your plot: ";
    cin >> plot;
    return plot;
}

vector<array<int, 3> > GetPlants(int &totalSqFt) {
    vector<array<int, 3> > plants;
    int plantNum;
    cout << "Enter the number of plants you have to enter: ";
    cin >> plantNum;

    int remainingSqFt = totalSqFt;

    for (int i = 0; i < plantNum; i++) {
        array<int, 3> plant;
        cout << "Enter plants row width: ";
        cin >> plant[0];
        cout << "Enter plants row length: ";
        cin >> plant[1];
        cout << "Enter plants total number of rows: ";
        cin >> plant[2];

        int plantSqFt = plant[0] * plant[1] * plant[2];
        if (plantSqFt > remainingSqFt) {
            cout << "Not enough space for this plant. Remaining space: " << remainingSqFt << endl;
            continue; // Skip this plant
        }

        remainingSqFt -= plantSqFt;
        plants.push_back(plant);

        cout << "Remaining square footage: " << remainingSqFt << endl;
    }

    totalSqFt -= remainingSqFt; // Update total square footage used
    return plants;
}
 




/*
nOtES

plant -> L of rows, W of rows, R #of rows
plantSqFt = l*w*r
totalSqFt = plantSqFt - plot
Write a program to fulfill the following requirements:

You need a program to help you plan a garden.  The user will enter

The square footage of their garden plot

Their needs for each of several types of plants (you won’t know ahead of time how many types). 

For each plant they will specify the length of the rows, their width, and the number of rows.

After each plant is entered, the program is to calculate the square footage used for that plant and 
display the remaining square footage left in the garden.  

The program should then ask them if they want to plant something else.
If the user tries to enter too much for a plant compared to what is left, the program should tell them of their error and tell 
them the square footage that will actually be used for that plant.

The user is not required to fill their garden space.

When the user is done entering plants, the program should display the total square footage used, 
the number of plant types and the amount of space remaining.

The type of loop you use is your choice.  You must use a function to calculate the area used for each plant type.
*/
