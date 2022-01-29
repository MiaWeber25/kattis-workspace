#include <iostream>
#include <math.h>
#include <vector>
#include <iomanip>

using namespace std;

int main() { 
    //variables
    int dataSetSize = 0;
    int students = 0;
    int tempGrade = 0;
    int total = 0;
    float average = 0.0;
    int aboveAverage = 0;
    double percentage = 0.0;
    vector<int> grades = {};
    vector<double> finalAnswers = {};
    
    cin >> dataSetSize;
    for (int i =0; i<dataSetSize; i++) {
        //tempGrade = 0; //reset tempGrade value
        total = 0; //ADDED
        aboveAverage = 0; //ADDED
        grades = {};
        cin >> students; //read in the number of students
        for (int j=0; j<students; j++) {
            //students is working, tempGrade is working
            tempGrade = 0;
            cin >> tempGrade;
            grades.push_back(tempGrade); //add student grades into grades vector
        }
        //calculate the average grade for the class
        for (int k=0; k<grades.size(); k++) {
            total += grades[k];
        }
        average = total/students;
        for (int j=0; j<grades.size(); j++) {
            if(grades[j] > average) {
                aboveAverage+= 1;
            } 

        }
        //calculate how many students were above average
        percentage = ((double)aboveAverage/(double)students)*100;
        finalAnswers.push_back(percentage);
        
    }
    for (int i=0; i<finalAnswers.size(); i++) {
        cout << fixed << setprecision(3) << finalAnswers[i] << "%" << endl;
    }

    return 0; 
}