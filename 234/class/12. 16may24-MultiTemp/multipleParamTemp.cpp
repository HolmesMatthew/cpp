#include <iostream>
#include "test.h"
// #include "test.cpp"
// #include <cstdlib>
// #include <fstream> // for file input/output
// #include <string> 
// #include <cctype> 
// #include <iomanip> // for formating
using namespace std;


int main() 
{ // ----- Start main -----
    Test<float, int> test1(1.23, 123);

    Test<int, char> test2(100, 'w');

    Test<char, char> test3('Y', 'N');

    test1.Show();
    test2.Show();
    test3.Show();

} // ----- End main -----


/* ---------- notes ----------

-------- end notes -------- */ 