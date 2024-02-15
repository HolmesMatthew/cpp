#include <iostream>
#include <iomanip> // used for formatting --> cout << fixed << showpoint << setprecision(2);
using namespace std;
// ----------
void getSales(double *arr, int size);
double totalSales(double *arr, int size);
// ----------
int main(){

    const int QTRS = 4;
    double sales[QTRS];
// ---------- notes ----------
    // pointer to constant
    const double payRates[4] = {18.55, 17.45, 12.85, 14.97};
    
    const double* constPointer = payRates; // data is constant and can not be changed
    // const pointer to non const
    int value = 22;
    int *const ptr = &value; // address can not be changed because of *const
// -------- end notes --------
    
    // get sales data for the quarters
    getSales(sales, QTRS);

    // set formatting flag
    cout << fixed << showpoint << setprecision(2);

    cout << "The total sales for the year is: $" << totalSales(sales,QTRS) << endl;

}
// ----------
void getSales(double *arr, int size){
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the sales for Quarter " << i + 1 << ": ";

        cin >> arr[i];
    }
}
double totalSales(double *arr, int size){

    double sum = 0.00;

    for (int i = 0; i < size; i++)
    {
        // add sum to arr pointer
        sum += *arr;
        // move to the next value within array
        arr++;
    }
    return sum;
    
}