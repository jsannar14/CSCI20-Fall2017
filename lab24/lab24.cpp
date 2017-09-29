//Created By: John Sannar
//Created On: 9/26/2017
//A random number generator thing

 #include <iostream>
 #include <cmath>
 #include <cstdlib>
 using namespace std;


int randomNumber(int& firstNumber , int& secondNumber){ // This is the main fuction that calculates the random number
    int lowRange = 1;
    int highRange = 100;
    
    cout << "Please enter the first number: " << endl; 
    cin >> lowRange;
    
    cout << "Please enter the Second Number: " << endl;
    cin >> highRange;
    
    
              
    
    srand(time(0));
    
    int randNum = rand()%((highRange - lowRange) + 1); // equation for calculating random number from given range
    
    cout << "Your random number is "<<  randNum << "  " << endl;
    
    return randNum;
    
}

double poundsToKilo(int weightPounds){
    
    

    
    const double kgPerPound = .45;
    int randomKgValue = 0;
    double kgValue = 0.0;
    
    randomKgValue = (weightPounds * kgPerPound); // pounds to kg conversion line
    
    return randomKgValue;
}


int main(){
    int randNum;
    int firstNumber;
    int secondNumber;
    int Kilogram;
    int pounds;
    double kiloToPounds;
    double kgConversion;
    double kgPerPound = .45;
    double poundPerkg = 2.2;
    
        randNum = randomNumber(firstNumber, secondNumber);
    
    pounds = randNum;
    
        cout << "Pounds: " << pounds << endl;
    
    kgConversion = randNum * kgPerPound;

        cout << "Kilograms: " << kgConversion << endl;
    
    kiloToPounds = kgConversion * poundPerkg;
    
        cout << "Final Pounds: " << kiloToPounds << endl;
    
}
 

 
