//Odd Echo - Kattis Problem
//Completed by: Mia Weber
//26/Jan/2022
//https://open.kattis.com/problems/oddecho

#include <iostream>
#include <math.h>

using namespace std;

int main (int argc, char *argv[]) {
    //create a variable to store the user inputed array size    
    int arraySize = 0;
    //get user input to determine the array size (first line of user input) and store in variable
    cin >> arraySize;
    //create an array of strings called numArray of size arraySize (variable created earlier)
    string numArray[arraySize];
   //for loop to add values passed to the program into array created on line 12
    for (int i=0; i<arraySize; i++) {
        //add the values into the array at the current index
        cin >> numArray[i];
    }
    //for loop to iterate through the array and determine if the stored value needs to be printed
    for (int j=0; j<arraySize; j++) {
        if(j % 2 == 0) { //determine if the index is odd or even --> if odd, then print the value stored at that index
            cout << numArray[j] << endl;
        }
    }
    return 0;
}
