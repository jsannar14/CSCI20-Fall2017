//Created By: John Sannar
//Created On: 8/31/2016 
//A simple calculator for the human population in the United states 
 
 #include <iostream> 
 using namespace std;
 
 int main() 
 {
    int populationCurrent =  325365189; 
    int year = 31536000;
    int netGain = 12; // Net gain of one person in seconds( Net gain of one person every "12" seconds)
    int populationGain = year / netGain;
    int yearInput; 
    
     cout << "Enter the number of years you would like predict the human population of the United States (Ex. 99) "<< endl;
   
     cin >> yearInput; //enter year here
     
     int yearProj = 2017 + yearInput;
     
     cout << "In the year " << yearProj << ", the population will be " << populationCurrent + (populationGain * yearInput) << " in the United States" << endl;
    
    
 }
 
/* 
Enter the number of years you would like predict the human population of the United States (Ex. 99) 
99
In the year 2116, the population will be 585570255 in the United States
*/