#include <iostream>
#include <tuple>
#include <string>
using namespace std;

using StudentScore = tuple<string, int>; // Define a tuple type for student name and score

void display(StudentScore arr[], int size, double average);
void getTestScores(StudentScore arr[], int size);
void bubbleSort(StudentScore arr[], int size);
double averageScore(StudentScore arr[], int size);

// Swap function for StudentScore tuples
void swap(StudentScore& a, StudentScore& b){
    StudentScore temp = a;
    a = b;
    b = temp;
}

int main() {
    StudentScore *testScores = nullptr;
    double average = 0.0;
    int numScores = 0;

    cout << "How many test scores would you like to enter? ";
    cin >> numScores;

    testScores = new StudentScore[numScores]; // Allocate memory for tuples
    getTestScores(testScores, numScores);

    bubbleSort(testScores, numScores);
    average = averageScore(testScores, numScores);
    display(testScores, numScores, average);

    delete[] testScores; // Free the allocated memory
    testScores = nullptr;

    return 0;
}

void display(StudentScore arr[], int size, double average) {
    cout << "*********** TEST SCORES ***********\n";
    for (int i = 0; i < size; i++) {
        cout << get<0>(arr[i]) << ": " << get<1>(arr[i]) << endl; // Display name and score
    }
    
    cout << "*********** AVERAGE SCORE ***********\n" << average << endl;
}

void getTestScores(StudentScore arr[], int size) {
    for (int i = 0; i < size; i++) {
        string tempName;
        int tempScore;
        cout << "Enter the name of the student: ";
        cin >> tempName;
        cout << "Enter test score for " << tempName << ": ";
        cin >> tempScore;
        arr[i] = make_tuple(tempName, tempScore); // Assign tuple to array element
    }
}

double averageScore(StudentScore arr[], int size) {
    double total = 0.0;
    for (int i = 1; i < size; i++) { // Start from 1 to skip the lowest score
        total += get<1>(arr[i]); // Sum scores
    }
    return size > 1 ? total / (size - 1) : 0; // Calculate average, excluding the lowest score
}

void bubbleSort(StudentScore arr[], int size) {
    for (int maxElement = size - 1; maxElement > 0; maxElement--) {
        for (int index = 0; index < maxElement; index++) {
            if (get<1>(arr[index]) > get<1>(arr[index + 1])) { // Compare scores
                swap(arr[index], arr[index + 1]);
            }
        }
    }
}
