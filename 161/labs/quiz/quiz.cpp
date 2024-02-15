#include <iostream>
#include <vector>
// #include <array>
using namespace std;

int GetSqrFt();
vector<array<int,3> > GetPlants(int&);
void CalcSqFt(int&, vector<array<int, 3> >);
void menu();


int main(){
    menu();
}

void menu(){
    int exit = 1;
    do
    {   
        int plot = GetSqrFt();
        int check = plot;
        vector<array<int,3> >plantsV;
        plantsV= GetPlants(plot);
        CalcSqFt(plot, plantsV);
        
        cout << "\n\nWould you like to Enter anymore plants?" 
        << "\n1. For yes \n2.Re-enter plot \n3. Exit\n";
        cin >> exit;
        if (exit == 1){   
        do{
            plantsV= GetPlants(plot);
            CalcSqFt(plot, plantsV);
            cout << "\n\nWould you like to Enter anymore plants?\n" 
            << "1. For yes \n2.Re-enter plot \n3. Exit\n";
            cin >> exit;
            
        } while (exit == 1);
        }
        
        
    } while (exit!= 3);
    
}

int GetSqrFt(){
    int plot = 0;

    cout << "Enter the square footage of your plot" << endl;
    cin >> plot;
    return plot;
}

// build a vector to fill with an array of plants l,w,#r
// return vector
vector<array<int,3> > GetPlants(int &plot){
    vector<array<int,3> > plantsV;
    int plantNum = 1;

    cout << "Enter the number of plants you have to enter: ";
    cin >> plantNum;

    for (int i = 0; i < plantNum; i++)
    {
        array<int,3>plant;

        cout << "Plant: " << i+1 << "\nEnter plants row width: ";
        cin >> plant[0];
        cout << "Enter plants row length: ";
        cin >> plant[1];
        cout << "Enter plants total number of rows: ";
        cin >> plant[2];
        cout << endl;
        plantsV.push_back(plant);
    }

    cout << "Total number of plants: " << plantsV.size() << endl;
    return plantsV;
}

void CalcSqFt(int &plot, vector<array<int, 3> >plantsV){
    for (int i = 0; i < plantsV.size(); i++)
    {   
        int tempS = 0; 
        array<int,3>tempA; 

        for (int x = 0; x < 3; x++)
        {
            tempA[x] = plantsV[i][x];   
        }
        tempS = tempA[0] * tempA[1] * tempA[2];
        if (tempS < plot)
        {            
            plot -= tempS;
            cout << "\nPlant " << i+1 << ": uses " << tempS << "sqft.\n" 
            << "You have " << plot << "sqft remaining.";
        }
        else{
            cout << "\nPlant " << i+1 << " takes up to much space at " << tempS << "sqft and will not be entered";
            // break;
        }
        

        
    }
    
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
