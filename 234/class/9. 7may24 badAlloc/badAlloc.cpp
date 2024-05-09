#include <iostream>
#include <new> // holds the bad alloc algorithm
// #include "init.h"
// #include "init.cpp"
// #include <cstdlib>
// #include <fstream> // for file input/output
// #include <string> 
// #include <cctype> 
// #include <iomanip> // for formating
using namespace std;


int main() 
{ // ----- Start main -----
    double* ptr = nullptr;
    try
    {
        ptr = new double[100000000000000];
    }
    catch(bad_alloc)
    {
        cout << "eRrOr Insufficent Memory";
    }
    


} // ----- End main -----


/* ---------- notes ----------

-------- end notes -------- */ 