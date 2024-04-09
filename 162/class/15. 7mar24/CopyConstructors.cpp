#include <iostream>
#include <string>

using namespace std;
DEFAULT_SCORE=0;
class StudentTestScore
{
    private:
    string StudentName;
    double* testScores
    int numTestScores;

    void createTestScoresArray(int size){
        numTestScores = size;
        testScores = new double[size];
        for (int i = 0; i < size; i++)
        {
            testScores[i]= DEFAULT_SCORE;
        }
        
    }
    public:
    StudentTestScore(string name, int numScores){
        StudentName = name;
        createTestScoresArray(numScores);
    
    }
    ~StudentTestScore()
    {
        delete[] testScores;
    }
    StudentTestScore(const StudentTestScore &obj) //new copy constructor
    {
        StudentName = obj.StudentName;
        numTestScores = obj.testScores;
        testScores = new double[numTestScores];
        for (int i = 0; i < size; i++)
        {
            testScores[i] = obj.testScores[i];
        }
        
    }

};

int main(){

}