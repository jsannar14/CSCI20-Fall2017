//Created By: John Sannar
//Created On: 9/12/2017
//A stock portfolio coding thing

 #include <iostream>
 #include <cmath>
 #include <cstdlib>
 using namespace std;

int randomNumber(){ // This is the main fuction that calculates the random number
    int lowRange = 1;
    int highRange =100;
    srand(time(0));
    int randNum = rand()%((highRange - lowRange) + 1); // equation for calculating random number from given range
    
    cout << "Your random number is "<<  randNum << "  " << endl;
    
    return 0;
    
}

 
int main(){
 
 int userInput;
 
    cout << "Would you like to generate a random number?" << endl;
        cin >> userInput;
        
    randomNumber(); // calling fuction random number
    
    return 0;
    
    
}
 
/* 
Running /home/ubuntu/workspace/lab22/lab22.cpp
Would you like to generate a random number?
yes
Your random number is 83  
*/


 
 
 
