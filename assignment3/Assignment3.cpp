#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

void cast();

void cpuCast();

int main() {
   // Seed the RNG once, at the start of the program
   srand( time( NULL ) );

   // Roll our die
   cast();
   
   //cpu rolls the die
   cpuCast();

   // All done
   return 0;
}


void cast() {

int rollNum = 0;
int totalNum = 0;
int userHold = 0;
int userScoreHold = 0;
int userScoreReset = 0;

cout << "Please type 1 to roll the dice! " << endl;

cin >> rollNum;
    
    while (totalNum < 100){
    
   for (int i = 0; i < rollNum; i++) {
      // Get a pseudo-random number in [1,6]
      int num = (rand() % 6) + 1;
      cout << "You rolled a: " << num << endl;
      
      if (num == 1){
          
          totalNum = userScoreReset + userScoreHold;
          
          cout << "Oops you rolled a 1 and reset your progress" << endl;
          
          break;
          
          return cast();
          
         
          
      }
      
      totalNum = num + totalNum;
      cout << "Your total is now: " << totalNum << endl;
      
      
       cout << "Enter 0 to hold or enter 1 to roll the dice again!" << endl;
        cin >> userHold;
        
       if (userHold == 0){
      
      userScoreHold = totalNum;
      
      cout << "Your current score is: " << userScoreHold + userScoreReset << endl;
      
     cast();
      
  }
  
 
      
      
      if (totalNum >= 100){
          
          
          cout << "congratulations you won the game!" << endl;
          
      }
   }
   
  
  
    }
  
}


void cpuCast() {
    
int rollNum = 0;
int totalNum = 0;
int userHold = 0;
int userScoreHold = 0;
int userScoreReset = 0;

cout << "Its the Cpu's turn! " << endl;

    
    while (totalNum < 100){
    
   for (int i = 0; i < rollNum; i++) {
      // Get a pseudo-random number in [1,6]
      int num = (rand() % 6) + 1;
      cout << "You rolled a: " << num << endl;
      
      if (num == 1){
          
          totalNum = userScoreReset;
          
          cout << "Oops you rolled a 1 and reset your progress" << endl;
          
          break;
          
          cast();
          
      }
      
      totalNum = num + totalNum;
      cout << "Your total is now: " << totalNum << endl;
      
      
       cout << "Enter 0 to hold or enter 1 to roll the dice again!" << endl;
        cin >> userHold;
        
       if (userHold == 0){
      
      userScoreHold = totalNum;
      
      cout << "Your current score is: " << userScoreHold << endl;
      
     cast();
      
  }
  
 
      
      
      if (totalNum == 100){
          
          
          cout << "congratulations you won the game!" << endl;
          
      }
   }
   
  
  
    }
  
}
