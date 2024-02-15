#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    // Create a loop that will display the hours of the day
    int day = 24;
    int cont = 1;


        for (int i = 0; i<=day; i++){

        if (i < 12)
        {
            cout << "\n" << i+1 << ":00" << " am\n";
        }else if (i>= 13 && i < 24){
            cout <<"\n" <<  i-12 <<":00" << " pm\n";
        }else if (i == day) {
            cout << "\n" << i-12 <<":00" << " am\n";
        }
// minutes
    for(int minute=1; minute<60; minute++){
        for(int second =0; second<60; second++){
                if (i < 12){
                    if (minute <10){
                    
                    }
                    if(second <10){

                    }
                else if (i>= 13 && i < 24){

                }else if (i == day) {}

                        if(second <10){

                        cout << "\n" << i+1 << ":" << "0" << minute <<".0"<< second << " am\n";
                        }
                    else if( minute <10){
                    cout << "\n" << i+1 << ":"  << minute <<".0"<< second << " am\n";
                    }





                        // else{ 
                        //     cout << "\n" << i+1 << ":" << minute <<"."<< second  << " am\n";
                        //     if (i < 12){
                        //     }else if (i>= 13 && i < 24){
                        //     cout <<"\n" <<  i-12 <<":" << minute  <<"."<< second <<" pm\n";
                        //     }else if (i == day) {
                        //     cout << "\n" << i-12 <<":" << minute <<"."<< second << " am\n";}
                        //     } 
                    } 
                }
        }
     }

} // end 1st for loop

// end main 
