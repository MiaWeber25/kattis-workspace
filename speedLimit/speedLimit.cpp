//Kattis Speed Limit Problem
//By: Mia Weber
//CSCI 112 27/Jan/2022
#include <iostream>
#include <math.h>
#include <vector> 

using namespace std;

int main() {
    //integer variable to store the length of the data
    int dataSetLength = 0;
    //integer variable used to compute the individual totals for each data set
    int tempTotal = 0;
    //vector used to store the totals of each data set (to be printed later)
    vector<int> total = {}; 
    //read in data to dataSetLength variable
    cin >> dataSetLength;
    //user enters -1 to quit the program
    while(dataSetLength != -1) {
        int lastTime = 0; //integer variable to store the last time value that was entered
        tempTotal = 0; //reset the tempTotal variable
        
        for (int i=0; i<dataSetLength; i++) {
           
            int speed = 0; //integer variable to store the individual speed value
            int currentTime = 0; //integer variable to store the individual time value

            //read in user input into the speed and time variables 
            cin >> speed; 
            cin >> currentTime;
            
            //calculate the total distance traveled for that data set and store in tempTotal
            tempTotal += speed * (currentTime - lastTime);
            
            //set the lastValue variable to the current time
            lastTime = currentTime;
        }
        //add the total of the data set to the vector that stores all the totals
        total.push_back(tempTotal);
        //see if the user enters -1 to quit
        cin >> dataSetLength;

    }
    //cout the values stored in the vector ie the total distances traveled for all data sets
    for (int i=0; i<total.size(); i++) {
        cout << total[i] << " miles" << endl;
    }
    return 0;
}

