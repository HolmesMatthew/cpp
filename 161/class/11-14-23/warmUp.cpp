#include <iostream>
#include <map>
#include <string>
using namespace std;

// ------ create structure
struct division {
    string name;
    double sales;

};
void test(division, division);

// ---------------------------------------

map<string,double> getSales();
void findHighest(map<string,double>divMap);

int main(){
map<string,double>divMap = getSales();
map<string,double>::iterator it = divMap.begin();
while (it != divMap.end()){

    cout << it->first << " : " << it->second << endl;
    ++it;
}
findHighest(divMap);

cout << "\nend main";

} // end main




map<string,double> getSales(){
    map<string,double>divMap;

    divMap["Northeast"] = 0.00;
    divMap["Northwest"] = 0.00;
    divMap["southeast"] = 0.00;
    divMap["Southwest"] = 0.00;
    map<string,double>::iterator it = divMap.begin();
    while (it != divMap.end()){
    cout << "Enter the sales for " << it->first << ": ";
    cin >> it->second;
    // cout << it->first << ":" << it->second << endl;
    ++it;

    }

    return divMap;
}


void findHighest(map<string,double>divMap){
    map<string,double>temp;
    temp["one"]= 0.00;
    cout << "\n find highest \n";
    map<string,double>::iterator te = temp.begin();
    map<string,double>::iterator it = divMap.begin();
    while (it != divMap.end()){
        if (it->second > te->second)
        {

            // cout << "\ntemp = " << te->first <<":"<< te-second << '\n';
        }
        it++;
}
        
}


void test(double, double){
    //code

}

/*
company four divisions
    - Northeast
    - Southeast
    - Northwest
    - Southwest

    main

    double getSales() is passed the name of a division. Its asks the user for a division quarterly sales figure, 
    validates the input then returns it, it should be called one for each division

    2. void findHighest() is passed the four sales totals. it determines which is the largest and prints the name of the highest-grossing division, along with its ales figures

    input validation: do not accept dollar amounts less than 0.00
*/