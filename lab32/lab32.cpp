#include <iostream>
#include <string>
using namespace std;

int main(){
    
    
    double adjustedGrossIncome = 0;
    double tax = 0;
    string firstName = "First" ;
    string lastName = "Last";
    int grossWages = 0;
    int taxWitheld = 0;
    double refund = 0;
    int filingStatus;
    int personalExempt = 4050;
    int singleExempt = 6350;
    int marriedExempt = 12700;
    
    
    //Name Input
        cout << "Please enter your name: " << endl;
            cin >> firstName;
            cin >> lastName;
            
    //Filing Status Input
        cout << "Are you single? Please enter a 0 for single, or 1 for married" << endl;
            cin >> filingStatus;
             
    //Wages input
        cout<< "Please enter wages: " << endl;
            cin >> grossWages;
            
    //Witheld input
        cout << "Please enter the amount witheld: " << endl;
            cin >> taxWitheld;
            
    adjustedGrossIncome = (grossWages - singleExempt) - personalExempt;
        
    switch (filingStatus){
        
        case (0):
        //if the gross income is below 0 than there is no tax need to collect
        if (adjustedGrossIncome < 0){
                        
                tax = 0;
                refund = taxWitheld - tax;
                    cout << "Name: " << firstName << " " << lastName << endl;
                    cout << "Total Gross Adjusted Income: " << adjustedGrossIncome << endl;
                    cout << "Total Tax owed: " << tax << endl;
                    cout << firstName << " " << lastName << " is entitled to a REFUND of $" << refund << endl;
        }
        
        //AGI for first individual bracket
            else if (grossWages >= 0 && grossWages <= 9325) {
                
                tax = grossWages * .10;
               refund = taxWitheld - tax;
                    cout << "Name: " << firstName << " " << lastName << endl;
                    cout << "Total Gross Adjusted Income: " << adjustedGrossIncome << endl;
                    cout << "Total Tax owed: " << tax << endl;
                    cout << firstName << " " << lastName << " is entitled to a REFUND of $" << refund << endl;
                        
                    }
                    
        //AGI for Second Bracket
            else if (grossWages >= 9326 && grossWages <= 37950){
            
                tax = (grossWages - 9325) * .15 + 932.50;
                refund = taxWitheld - tax;
                    adjustedGrossIncome = (grossWages - tax);
                    cout << "Name: " << firstName << " " << lastName << endl;
                    cout << "Total Gross Adjusted Income: " << adjustedGrossIncome << endl;
                    cout << "Total Tax owed: " << tax << endl;
                    cout << firstName << " " << lastName << " is entitled to a REFUND of $" << refund << endl;
                    
            }
            
        //AGI for Third Bracket
            else if (grossWages >= 37951 && grossWages <= 91900){
                
                tax = (grossWages - 37950) * .25 + 5226.25;
                refund = taxWitheld - tax;
                    adjustedGrossIncome = (grossWages - tax);
                    cout << "Name: " << firstName << " " << lastName << endl;
                    cout << "Total Gross Adjusted Income: " << adjustedGrossIncome << endl;
                    cout << "Total Tax owed: " << tax << endl;
                    cout << firstName << " " << lastName << " is entitled to a REFUND of $" << refund << endl;
                            
            }
            
        //AGi for Fourth Bracket    
            else if (grossWages >= 91901 && grossWages <= 191650){
                
                tax = (grossWages - 91900) * .28 + 18713.75;
               refund = taxWitheld - tax;
                    adjustedGrossIncome = (grossWages - tax);
                    cout << "Name: " << firstName << " " << lastName << endl;
                    cout << "Total Gross Adjusted Income: " << adjustedGrossIncome << endl;
                    cout << "Total Tax owed: " << tax << endl;
                    cout << firstName << " " << lastName << " is entitled to a REFUND of $" << refund << endl;
                            
            }
            
        //AGi for Fifth Bracket    
            else if (grossWages >= 191651 && grossWages <= 416700){
                
                tax = (grossWages - 191650) * .33 + 46643.75;
                refund = taxWitheld - tax;
                    adjustedGrossIncome = (grossWages - tax);
                    cout << "Name: " << firstName << " " << lastName << endl;
                    cout << "Total Gross Adjusted Income: " << adjustedGrossIncome << endl;
                    cout << "Total Tax owed: " << tax << endl;
                    cout << firstName << " " << lastName << " is entitled to a REFUND of $" << refund << endl;
                            
            }
            
        //AGi for Fifth Bracket    
            else if (grossWages >= 416701){
                
                tax = (grossWages - 416700) * .396 + 120910.25;
                refund = taxWitheld - tax;
                    adjustedGrossIncome = (grossWages - tax);
                    cout << "Name: " << firstName << " " << lastName << endl;
                    cout << "Total Gross Adjusted Income: " << adjustedGrossIncome << endl;
                    cout << "Total Tax owed: " << tax << endl;
                    cout << firstName << " " << lastName << " is entitled to a REFUND of $" << refund << endl;
                            
            }
            
            break;
            
            adjustedGrossIncome = (grossWages - marriedExempt) - personalExempt;
            
        case(1):
             //if the gross income is below 0 than there is no tax need to collect
        if (adjustedGrossIncome < 0){
                        
                tax = 0;
                refund = taxWitheld - tax;
                    cout << "Name: " << firstName << " " << lastName << endl;
                    cout << "Total Gross Adjusted Income: " << adjustedGrossIncome << endl;
                    cout << "Total Tax owed: " << tax << endl;
                    cout << firstName << " " << lastName << " is entitled to a REFUND of $" << refund << endl;
        }
        
        //AGI for first Married bracket
            else if (grossWages >= 0 && grossWages <= 18650) {
                
                tax = grossWages * .10;
               refund = taxWitheld - tax;
                    cout << "Name: " << firstName << " " << lastName << endl;
                    cout << "Total Gross Adjusted Income: " << adjustedGrossIncome << endl;
                    cout << "Total Tax owed: " << tax << endl;
                    cout << firstName << " " << lastName << " is entitled to a REFUND of $" << refund << endl;
                        
                    }
                    
        //AGI for Second Bracket
            else if (grossWages >= 18650 && grossWages <= 75900){
            
                tax = (grossWages - 18650) * .15 + 1865;
                refund = taxWitheld - tax;
                    adjustedGrossIncome = (grossWages - tax);
                    cout << "Name: " << firstName << " " << lastName << endl;
                    cout << "Total Gross Adjusted Income: " << adjustedGrossIncome << endl;
                    cout << "Total Tax owed: " << tax << endl;
                    cout << firstName << " " << lastName << " is entitled to a REFUND of $" << refund << endl;
                    
            }
            
        //AGI for Third Bracket
            else if (grossWages >= 75901 && grossWages <= 153100){
                
                tax = (grossWages - 75900) * .25 + 10452.50;
                refund = taxWitheld - tax;
                    adjustedGrossIncome = (grossWages - tax);
                    cout << "Name: " << firstName << " " << lastName << endl;
                    cout << "Total Gross Adjusted Income: " << adjustedGrossIncome << endl;
                    cout << "Total Tax owed: " << tax << endl;
                    cout << firstName << " " << lastName << " is entitled to a REFUND of $" << refund << endl;
                            
            }
            
        //AGi for Fourth Bracket    
            else if (grossWages >= 153101 && grossWages <= 233350){
                
                tax = (grossWages - 153100) * .28 + 29752.50;
               refund = taxWitheld - tax;
                    adjustedGrossIncome = (grossWages - tax);
                    cout << "Name: " << firstName << " " << lastName << endl;
                    cout << "Total Gross Adjusted Income: " << adjustedGrossIncome << endl;
                    cout << "Total Tax owed: " << tax << endl;
                    cout << firstName << " " << lastName << " is entitled to a REFUND of $" << refund << endl;
                            
            }
            
        //AGi for Fifth Bracket    
            else if (grossWages >= 233350 && grossWages <= 416700){
                
                tax = (grossWages - 233350) * .33 + 52222.50;
                refund = taxWitheld - tax;
                    adjustedGrossIncome = (grossWages - tax);
                    cout << "Name: " << firstName << " " << lastName << endl;
                    cout << "Total Gross Adjusted Income: " << adjustedGrossIncome << endl;
                    cout << "Total Tax owed: " << tax << endl;
                    cout << firstName << " " << lastName << " is entitled to a REFUND of $" << refund << endl;
                            
            }
            
        //AGi for Fifth Bracket    
            else if (grossWages >= 416701){
                
                tax = (grossWages - 416700) * .396 + 112728;
                refund = taxWitheld - tax;
                    adjustedGrossIncome = (grossWages - tax);
                    cout << "Name: " << firstName << " " << lastName << endl;
                    cout << "Total Gross Adjusted Income: " << adjustedGrossIncome << endl;
                    cout << "Total Tax owed: " << tax << endl;
                    cout << firstName << " " << lastName << " is entitled to a REFUND of $" << refund << endl;
                            
            }
            
            break;
    }
        

            
            
}
           
            
  



