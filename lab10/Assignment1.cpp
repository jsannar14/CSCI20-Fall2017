//Created By: John Sannar
//Created On: 9/9/2016 
//A calculator for yogurt and its costs.

 #include <iostream>
 using namespace std;
 
 struct yogurt { // This is my built struct so that I can establish these variables and the object that falls under what "yogurt" is
  int numOunces;
  int numToppings;
  int tip;
  int couponAmount;
 };
 
 int main()
 {
   yogurt yogurtA;
   
   yogurtA.numOunces = 0.0;
   yogurtA.numToppings = 0;
   yogurtA.tip = 0.0;
   yogurtA.couponAmount = 0.0;
  
    int numOunces = 0.0;
    int numToppings = 0;
    int couponAmount = 0.0;
    int numOuncesNoCup = numOunces - .25;   // subtractor for deducting the cup from the ounces of yogurt
    double tip = 0.0;      // user will be able to enter a custom tip
   
    
    cout << "Please enter the amount in ounces of yogurt you have: " << endl;
    
      cin >> numOunces;
    
    cout << "You have entered " << numOunces << " ounces" << endl;
    
    cout << "Please enter the amount of toppings you have selected (Please note that each topping is $0.50: " << endl;
    
      cin >> numToppings;
    
    cout << "You have " << numToppings << " toppings to your yogurt" << endl;
    
    cout << "if you have a coupon please enter the value now (Example for 50% off just enter 50) " << endl;
    
      cin >> couponAmount;
    
    cout << "now please enter the amount that you would like to include as a tip (example 1.50) : " << endl;
    
      cin >> tip;
    
    cout << "Ounces of yogurt: " << numOunces << endl;
    
    cout << "Cost of toppings: $" << (numToppings * .50)  << endl;
    
          int preTaxCost = ((numOunces * .17) + (numToppings * .5));    //this is what calculates the base price of the yogurt based on user input.
     
          int totalCost = ((preTaxCost*.0725) + preTaxCost) + (tip);   // will be towards the bottom of the code becuase these values are all being changed.
     
          double salesTax = (totalCost  * .0725 );
     
    cout << "Sales Tax: $" << salesTax << endl;
    
    cout << "Your discount saved you : $" << ((couponAmount * .01) * totalCost)   << endl;
    
    cout << "Your tip: $" << tip << endl;
  
    cout << "Total for today is: $: " << totalCost - ((couponAmount * .01) * totalCost) + tip + salesTax << endl;
  
 
 }
 
 
 /*
 
 A)
Please enter the amount in ounces of yogurt you have: 
4
You have entered 4 ounces
Please enter the amount of toppings you have selected (Please note that each topping is $0.50: 
1
You have 1 toppings to your yogurt
if you have a coupon please enter the value now (Example for 50% off just enter 50) 
15
now please enter the amount that you would like to include as a tip (example 1.50) : 
.25
Ounces of yogurt: 4
Cost of toppings: $0.5
Sales Tax: $0.0725
Your discount saved you : $0.15
Your tip: $0.25
Total for today is: $: 1.1725

 B)
Please enter the amount in ounces of yogurt you have: 
16
You have entered 16 ounces
Please enter the amount of toppings you have selected (Please note that each topping is $0.50: 
7
You have 7 toppings to your yogurt
if you have a coupon please enter the value now (Example for 50% off just enter 50) 
0
now please enter the amount that you would like to include as a tip (example 1.50) : 
0
Ounces of yogurt: 16
Cost of toppings: $3.5
Sales Tax: $0.435
Your discount saved you : $0
Your tip: $0
Total for today is: $: 6.435

 C)
Please enter the amount in ounces of yogurt you have: 
32
You have entered 32 ounces
Please enter the amount of toppings you have selected (Please note that each topping is $0.50: 
4
You have 4 toppings to your yogurt
if you have a coupon please enter the value now (Example for 50% off just enter 50) 
25
now please enter the amount that you would like to include as a tip (example 1.50) : 
.50
Ounces of yogurt: 32
Cost of toppings: $2
Sales Tax: $0.58
Your discount saved you : $2
Your tip: $0.5
Total for today is: $: 7.08
 
 
 D)
Please enter the amount in ounces of yogurt you have: 
14 
You have entered 14 ounces
Please enter the amount of toppings you have selected (Please note that each topping is $0.50: 
10
You have 10 toppings to your yogurt
if you have a coupon please enter the value now (Example for 50% off just enter 50) 
50
now please enter the amount that you would like to include as a tip (example 1.50) : 
1.00
Ounces of yogurt: 14
Cost of toppings: $5
Sales Tax: $0.58
Your discount saved you : $4
Your tip: $1
Total for today is: $: 5.58

 
 */