#include <iostream>
#include <fstream>
// #include <iomanip> // for formating
// #include <string>
// #include <cctype>
using namespace std;

const int NAME_SIZE =51, ADD_SIZE = 51, PHONE_SIZE=14;

struct info{
    char name[NAME_SIZE];
    char address1[ADD_SIZE];
    char address2[ADD_SIZE];
    char phone[PHONE_SIZE];
    int age;
    
    };
long byteNum(int recNum);
void showRec(info record);
int main() 
// ----- Start main -----
{
    info person; // innate structure 
    char again; // holder for loop
    fstream people("people.bin", ios::out|ios::app|ios::binary);
    char addPerson;

        do // START while loop
        {
            if (people) // NOT CURRENTLY WORKING
            {
                cout << "Would you like to add another person?: (y/n)" << endl;
                cin >> addPerson;   
                if (addPerson == 'y' | addPerson == 'Y')
                {
                    // get data about the person/people
                    cout << "Enter the following data: \n";
                    cout << "Name: ";
                    cin.getline(person.name, NAME_SIZE); // use getline incase user enters first and last name
                    cout << "Age: ";
                    cin >> person.age;
                    cin.ignore(); // reset input field ~ to ignore whitespace in the input stream so we can use getline
                    cout << "Address Line 1: ";
                    cin.getline(person.address1, ADD_SIZE);
                    cout << "Address Line 2: ";
                    cin.getline(person.address2, ADD_SIZE);
                    cout << "Phone number: ";
                    cin.getline(person.phone,PHONE_SIZE);
                    
                    //reinterpret cast from pointer to character
                    people.write(reinterpret_cast<char *>(&person), sizeof(person));
                }
            }else{
                break;
            }
            
            // // get data about the person/people
            // cout << "Enter the following data: \n";
            // cout << "Name: ";
            // cin.getline(person.name, NAME_SIZE); // use getline incase user enters first and last name
            // cout << "Age: ";
            // cin >> person.age;
            // cin.ignore(); // reset input field ~ to ignore whitespace in the input stream so we can use getline
            // cout << "Address Line 1: ";
            // cin.getline(person.address1, ADD_SIZE);
            // cout << "Address Line 2: ";
            // cin.getline(person.address2, ADD_SIZE);
            // cout << "Phone number: ";
            // cin.getline(person.phone,PHONE_SIZE);
            
            // //reinterpret cast from pointer to character
            // people.write(reinterpret_cast<char *>(&person), sizeof(person));

            cout << "Would you like to add another person?: (y/n)" << endl;
            cin >> again;        
        // END while loop
        } while (again == 'Y'|| again == 'y');
        people.close();

        people.open("people.bin", ios::in|ios::binary);

        if (!people)
        {
            cout << "asdf";
            return 0;
        }

        cout << "\n\nHere is record one: ";
        people.seekg(byteNum(0), ios::beg);
        people.read(reinterpret_cast<char *>(&person),sizeof(person));
        showRec(person);

        cout << "\n\nHere is record two:";
        people.seekg(byteNum(1), ios::beg);
        people.read(reinterpret_cast<char *>(&person),sizeof(person));
        showRec(person);

        people.close();



        






    // people.open("people.bin", ios::in|ios::binary);

    // if (!people)
    // {
    //     cout << "\n\neRr0r nO FiLE" << endl;
    //     return 0;
    // }
    
    // cout << "\nHere is people file: \n\n";

    // // read first person
    // people.read(reinterpret_cast<char *>(&person), sizeof(person));

    // // while not EOF - ¿ End Of File ?
    // while (!people.eof())
    // {
    //     cout << "Name: " << person.name << endl;
    //     cout << "Age: " << person.age << endl;
    //     cout << "Address Line 1: " << person.address1 << endl;
    //     cout << "Address Line 2: " << person.address2 << endl;
    //     cout << "Phone Number: " << person.phone << endl;
        
    //     cout << "\nPress the Enter key to see the next record";
    //     cin.get(again);

    //     // Get next record
    //     people.read(reinterpret_cast<char *>(&person),sizeof(person));
    // }
    // cout << "\n~ No more data ~";
    // people.close();

// look up cin.get() and EOF

} // ----- End main -----
    
long byteNum(int recNum)
{
    return sizeof(info) * recNum;
}

void showRec(info record)
{
    cout << "Name: " << record.name << endl;
    cout << "Age: " << record.age << endl;
    cout << "Address Line 1: " << record.address1 << endl;
    cout << "Address Line 2: " << record.address2 << endl;
    cout << "Phone Number: " << record.phone << endl;
}
void addPerson(){

}

/* ---------- notes ----------
~CoUlD nOT oPeN fIlE~
~CoUlD nOT oPeN " << fileName << "tRY AgAiN~
cout << "~CoUlD nOT oPeN " << fileName << "tRY AgAiN~" << endl;
-------- end notes -------- */ 