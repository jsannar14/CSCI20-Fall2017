//Created By: John Sannar
//Created On: 9/26/2017
//A random number generator thing

 #include <iostream>
 #include <cmath>
 #include <cstdlib>
 using namespace std;

int main(){
 srand(time(0));
 int numOne;
 int numTwo;
    cout << "Please enter the numbers: " << endl;
    cin >> numOne >> numTwo;
    
 
  int result;
  
  if (numOne < numTwo)
    
    result = rand()%((numOne - numTwo) + 1); // equation for calculating random number from given range
    
  else 
 
    result = rand()%((numTwo + numOne) + 1); // equation for calculating random number from given range if variables are entered in none numerical order. 
    

  if (numOne < numTwo) // this is what orders the numbers so that they appear in numerical order for the output statement
  
    cout << "A random number between: "<< numOne << " and " << numTwo << " is "  << result;    
    
  else 
  
     cout << "A random number between: "<< numTwo << " and " << numOne << " is "  << result;
     
     
    return result;
    
    
}
 
/* 
Running /home/ubuntu/workspace/lab23/lab23.cpp
Please enter the numbers: 
1 10
A random number between: 1 and 10 is 5

    Running /home/ubuntu/workspace/lab23/lab23.cpp
    Please enter the numbers: 
    10 1
    A random number between: 1 and 10 is 2

Running /home/ubuntu/workspace/lab23/lab23.cpp
Please enter the numbers: 
5 82
A random number between: 5 and 82 is 7

    Running /home/ubuntu/workspace/lab23/lab23.cpp
    Please enter the numbers: 
    82 5
    A random number between: 5 and 82 is 30

Running /home/ubuntu/workspace/lab23/lab23.cpp
Please enter the numbers: 
22 73
A random number between: 22 and 73 is 51

    Running /home/ubuntu/workspace/lab23/lab23.cpp
    Please enter the numbers: 
    73 22
    A random number between: 22 and 73 is 24

*/
 
 
 
