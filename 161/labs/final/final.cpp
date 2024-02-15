#include <iostream>
#include <cctype>

using namespace std;

int main(){
    // variables
    int sum = 0;
    int wrong =0;
    int correct =0;
    char postExam[2][20] = {{}};
    char exam[2][20] = {
        {'a','d','b','b','c','b','a','b','c','d','a','c','d','b','d','c','c','a','d','b'},{}};
    // get student score
    for (int i = 0; i < 20; i++)
    {
        char score = 'a';
        char options[4] = {'a','b','c','d'};
        cout << i+1 << " Enter your score: "; //cout
        cin >> score; // cin
        for (int x = 0; x < 3; x++)
        {
            if (options[x] == score){
                exam[1][i] = score;
            }else{
                while (score != 'a' && score != 'b' && score != 'c' and score != 'd')
                {cout << "INVALID. Re-Enter: ";cin >> score;} // end while
            } // end if
        } // end for
        exam[1][i] = score;
    } // end for
    for (int i = 0; i < 20; i++)
    {
        if (exam[1][i] == exam[0][i])
        {sum++; correct++; postExam[0][i] = exam[1][i];}
        else{wrong++; postExam[1][i] = exam[1][i];}
    } // end for
    if (sum>15)
    {
        cout << "\n\nStudent passed test with " << correct << " correct answer(s) and " << wrong << " wrong answer(s)\n"
        << "Correct answers: "; //end cout
        for (int i = 0; i < 20; i++){cout << postExam[0][i];} 
        cout << "\nWrong answers: "; // cout
        for (int i = 0; i < 20; i++){cout << postExam[1][i];} 
    }else{
        cout << "\n\nStudent failed test with " << correct << " correct answer(s) and " << wrong << " wrong answer(s)\n"
        << "Correct answers: "; // end cout
        for (int i = 0; i < 20; i++){cout << postExam[0][i];}   
        cout << "\nWrong answers: "; // cout
        for (int i = 0; i < 20; i++){cout << postExam[1][i];}
        } // end if
} // end main






/*
instructions
Drivers License Exam
The local DMV has asked you to write a program that grades the written portion of the driver's license exam. 
The exam has 20 multiple choice questions. Here are the correct answers:

1. A	6. B	11. A	16. C
2. D	7. A	12. C	17. C
3. B	8. B	13. D	18. A
4. B	9. C	14. B	19. D
5. C	10. D	15. D	20. B
 

Your program should store the correct answers shown above in an array. 
It should ask the user to enter the student's answers for each of the 20 questions, and the answers should be stored in another array. 
After the student's answers have been entered, the program should display a message indicating whether the student passed or failed the exam. 
(A student must correctly answer 15 of the 20 questions to pass the exam.) It should then display the total number of correctly answered questions, 
the total number of incorrectly answered questions, and a list showing the question numbers of the incorrectly answered questions. 

Input Validation: Only accept the letters A, B, C, or D as answers
*/