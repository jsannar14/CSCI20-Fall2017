//Created By: John Sannar
//Created On: 9/12/2017
//A stock portfolio coding thing

 #include <iostream>
 #include <cmath>
 using namespace std;

 
 int main()
 {
 
 int velocity = 0;
 double tempF = 0.0;
 int sqrtVelocity = sqrt(velocity);
 int sqVelocity = pow(velocity,0.16);

 
  cout << "Please enter the temperature in Farenheit: " << endl;
   cin >> tempF;
  
  cout << "please enter the windspeed (Velocity): " << endl;
   cin >> velocity;
   
   
 double oldStyleWindChill = 0.081 * (3.71 * sqrtVelocity + 5.81 - .25 * velocity) * (tempF - 91.4) + 91.4;
 double newStyleWindChill = 35.74 + 0.6215 * tempF - 35.75 * (sqVelocity) + 0.4275 * tempF * sqVelocity;
  
  cout << oldStyleWindChill << endl;
  cout << newStyleWindChill << endl;
  
 cout << "When windspeed is " << velocity << endl;
 cout << "Windchill temperature change will be: " << oldStyleWindChill <<  " according to the old formula " << endl;
 cout << "Windchill temperature change will be: " << newStyleWindChill <<  " according to the new formula " << endl;
 cout << "The Difference in windchill will be: "  << oldStyleWindChill - newStyleWindChill << endl;
 
 cout << " Windspeed " << "   Windchill (Old Formula) " << "     Windchill (New Formula) " << "     Winchill (Difference) " << endl;
 cout << "-----------  " << "-------------------------    " << "-------------------------    " << "-----------------------    " << endl;
 cout << "     " << velocity << "                "  << oldStyleWindChill << "                      "  << newStyleWindChill<<  "                   " << oldStyleWindChill - newStyleWindChill << endl;
 
   
 }
 


 
 
 
