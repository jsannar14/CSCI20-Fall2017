//Created by: John Sannar

#include <iostream>
using namespace std;

int main()
{
    
    int lowRange = 1;
    int highRange = 50;
    srand(time(0));
    int randNum = rand()%((highRange - lowRange) + 1);
    int userInput = 0;
    int countDown = 0;
    
    cout << "Please enter your Guess:" << endl;
    cin >> userInput;
    
    
    
    if (userInput <= highRange){
    
    
    while(userInput != randNum){
         
         
         
        if (userInput < randNum){
             
            for(countDown = 5; countDown >= 0; --countDown){
                
                cout << countDown << " " << endl << endl;
            }
             
            cout << "Your last guess was " << userInput << " which was TOO LOW!";
            cout << " Please Guess Again!" << endl << endl;
            
             
            cin >> userInput;
             cout << endl;
         }
        
        else if (userInput > randNum){
            
             for(countDown = 5; countDown >= 0; --countDown){
                
                cout << countDown << " " << endl << endl;
            }
            
            cout <<"Your last guess was " << userInput << " which was TOO HIGH!";
            cout << " Please Guess Again!" << endl << endl;
            
            cin >> userInput;
            cout << endl;

        }
        
       
        } 
        if (userInput == randNum){
            
            cout << userInput << " was just right! GOOD JOB!" << endl;
            
        }
        
     }
     
  
     
}
     
    
    

    


