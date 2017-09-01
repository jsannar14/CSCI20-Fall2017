//Created By: John Sannar
//Created On: 8/24/2016 
//A simple calculator for the human population in the United states 
 
 #include <iostream> 
 using namespace std;
 
 int main() 
 {
    int populationCurrent =  325365189;
    int populationGain = 2628334;
    int yearInput; 
    
     cout << "Enter the number of years you would like predict the human population of the United States (Ex. 99) "<< endl;
   
     cin >> yearInput; //enter year here
     
     int yearProj = 2017 + yearInput;
     
     cout << "In the year " << yearProj << ", the population will be " << populationCurrent + (populationGain * yearInput) << " in the United States" << endl;
    
    
 }
 
