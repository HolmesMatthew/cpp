#pragma once
#ifndef TEST_H
#define TEST_H

#include <iostream>
using namespace std;

template <class T, class J>

class Test {
    private:
        T a;
        J b;
        
    public:
        // CTOR
        Test(T x, J y){
            a = x;
            b = y;
        }

        void Show(){
            cout << a << " and " << b << endl;
        }

};

#endif