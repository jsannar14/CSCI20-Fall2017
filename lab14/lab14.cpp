//Created By: John Sannar
//Created On: 9/5/2016 
//A CoinStar machine emulator

 #include <iostream> 
 using namespace std;
 
 int main() 
 {
     
    int money = 0; //set an open value for money so it can later be inputed
    int numQuarter = 25;
    int numDime = 10;
    int numNickel = 5;
    int numPenny = 1;
    
    
    cout << "please enter total coin value: " << endl;
    
    cin >> money; // This is where the the user inputs the total coin value!
    
    cout << "You have entered " << money << " cents"<< endl;
    
    numQuarter = (money - (money % 25)) / 25; //calculator for the total number of quarters most efficiently
        money = money - (numQuarter * 25);
    
    numDime = (money - (money % 10)) / 10;
        money = money - (numDime * 10);
    
    numNickel = (money - (money % 5)) / 5;
        money = money - (numNickel * 5);
    
    numPenny = (money - (money % 1)) / 1;
        money = money - (numPenny *1);
        
        
     cout << "that was " << numQuarter << " quarters, " << numDime << " Dimes, " << numNickel << " nickels, " << " and " << numPenny << " pennies" << endl;
    
    
    
    money = static_cast<double>(numQuarter * 25) + (numDime * 10) + (numNickel * 05) + (numPenny * 01); // this is the part of the code that changes to float variables.
    
        cout <<"The total is $ " << money  * .01 << " After the fee you get $" << (money - (money * .109 )) * .01  << endl;
    
    return(0);
    
 }
 
 /*
CODE OUTPUT
 
please enter total coin value: 
119
You have entered 119 cents
that was 4 quarters, 1 Dimes, 1 nickels,  and 4 pennies
The total is $ 1.19 After the fee you get $1.06029

 
 */