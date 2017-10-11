 #include <iostream>
 #include <cmath>
 #include <cstdlib>
 #include <string>
 using namespace std;





int main(){
    
    
    int numberPhones;
    int numberTablets;
    int dataAmount;
    
    // ATT UNlimited Plus Plan Variables.
    int attUnlimitedPlusPlanOneLine = 90;
    int attUnlimitedPlusPlanTwoLines = 145;
    int attUnlimitedPlusPlanMonth = 20;
    int attUnlimitedPlusPlanTablet = 10;
    
    // ATT UNlimited Choice Plan Variables.
    int attUnlimitedChoicePlanOneLine = 60;
    int attUnlimitedChoicePlanTwoLines = 115;
    int attUnlimitedChoicePlanMonth = 20;
    int attUnlimitedChoicePlanTablet = 10;
    
    // ATT Family Plan.
    int attFamilyPlan;
    int attFamilyPlanPhoneCost = 20;
    int attFamilyPlanTabletCost = 10;
    int attFamilyPlanGBOne = 30;
    int attFamilyPlanGBThree = 40;
    int attFamilyPlanGBSix = 60;
    int attFamilyPlanGBTen = 80;
    int attFamilyPlanGBSixteen = 90;
    int attFamilyPlanGBTwentyFive = 110;
    
    // Verizon Unlimited Plan Variables
    int VerizonUnlimited;
    int verizonFirstLine = 80;
    int verizonSecondLine = 110;
    int verizonAddLine = 20;
    int verizonTablet = 10;
    
    // Sprint Unlimited Plan Variables
    int sprintUnlimited;
    int sprintUnlimitedOneLine = 60;
    int sprintUnlimitedTwoLine = 40 + sprintUnlimitedOneLine;
    int sprintUnlimitedAddLine = 30;
    
    int sprintGbPlan = 40;
    
    
    int dataCost;
    int dataCostAttFamilyPlan;
    int phoneCost;
    int tabletCost;
    
    
    cout << "Please enter the number of phones: " << endl;
    
        cin >> numberPhones;
        
    cout << "Please enter the number of tablets: " << endl;
    
        cin >> numberTablets;
        
    cout << "Please enter the value of data in Gigabytes: " << endl;
    
        cin >> dataAmount;
    
    
    //ATT Unlimited Plus Plan phone Calculation
    
        if (numberPhones == 1){
            
            phoneCost = attUnlimitedPlusPlanOneLine;
            
                cout << "Your Total Phone Costs with ATT Unlimited Plus Plan would be $" << phoneCost << endl; 
            
        }
            else if (numberPhones == 2){
                
                phoneCost = attUnlimitedPlusPlanTwoLines;
                    
                    cout << "Your Total Phone Costs with Att Unlimited Plus Plan would be $" << phoneCost << endl;
                    
                
            }
                else if (numberPhones > 2){
                    
                   phoneCost = attUnlimitedChoicePlanTwoLines + (numberPhones * attUnlimitedPlusPlanMonth);
                
                        cout << "Your Total Phone costs with Att Unlimited Plus Plan would be $" << phoneCost << endl; 
                }
    
     //ATT Unlimited Choice Plan phone Calculation
    
        if (numberPhones == 1){
            
            phoneCost = attUnlimitedChoicePlanOneLine;
            
                cout << "Your Total Phone Costs with ATT Choice Plus Plan would be $" << phoneCost << endl; 
            
        }
            else if (numberPhones == 2){
                
                phoneCost = attUnlimitedChoicePlanTwoLines;
                    
                    cout << "Your Total Phone Costs with Att Unlimited Choice Plan would be $" << phoneCost << endl;
                    
                
            }
                else if (numberPhones > 2){
                    
                   phoneCost = attUnlimitedPlusPlanTwoLines + (numberPhones * attUnlimitedChoicePlanMonth);
                
                        cout << "Your Total Phone costs with Att Unlimited Choice Plan would be $" << phoneCost << endl; 
                }
                
                
                
    //Verizon Unlimited phone Calculation
    
        if (numberPhones == 1){
            
            phoneCost = verizonFirstLine;
            
                cout << "Your Total Phone Costs with Verizon Unlimited Plan would be $" << phoneCost << endl; 
            
        }
            else if (numberPhones == 2){
                
                phoneCost = verizonSecondLine;
                    
                    cout << "Your Total Phone Costs with Verizon Unlimited Plan would be $" << phoneCost << endl;
                    
                
            }
            
                else if (numberPhones > 2){
                    
                   phoneCost = verizonSecondLine + (numberPhones * verizonAddLine);
                
                        cout << "Your Phone Costs with Verizon Unlimited Plan would be $" << phoneCost << endl; 
                }
                
 
    
    //Spring Unliited phone Calculation
    
        if (numberPhones == 1){
            
            phoneCost = sprintUnlimitedOneLine;
            
             cout << "Your Phone Costs with Sprint Unlimited Plan would be $" << phoneCost << endl;
        }
        
            else if (numberPhones = 2){
                
                phoneCost = sprintUnlimitedTwoLine;
                
                cout << "Your Phone Costs with Sprint Unlimited Plan would be $" << phoneCost << endl;
            }
                
                else if (numberPhones > 2){
                    
                    phoneCost = sprintUnlimitedTwoLine + (numberPhones * 30);
                    
                cout << "Your Phone Costs with Sprint Unlimited Plan would be $" << phoneCost << endl;
                    
                }
                    else {
                        
                        cout << "To view phone costs you need to have at least one phone! " << endl;
                        
                    }
    
       //Verizon Unlimited Tablet Calculation
        
        if (numberTablets >= 1){
            
            tabletCost = verizonTablet * numberTablets;
            
            cout << "Your Total tablet costs with Verizon Unlimited Plan would be $" << tabletCost << endl;
            
        }
        
            else if (numberTablets ==0)  {
                
                cout << "You are not buying a tablet" << endl;
            }
    
    
    //ATT Family Plan Data Calculator
    if (dataAmount == 1){
        
    dataCost = attFamilyPlanGBOne;    
        
    }
        else if (dataAmount == 3){
            
            dataCost = attFamilyPlanGBThree;
            
        }
            else if (dataAmount == 2){
            
                dataCost = sprintGbPlan;
                
               cout << "Data Cost with Sprint is $" << sprintGbPlan;
            
            }
                else if (dataAmount == 6){
                
                    dataCost = attFamilyPlanGBSix;
                
                }
                    else if (dataAmount == 10){
                
                        dataCost = attFamilyPlanGBTen;
                
                    }
                        else if (dataAmount == 16){
                    
                            dataCost = attFamilyPlanGBSixteen;
                
                        }   
                            else if (dataAmount == 25){
                    
                                dataCost = attFamilyPlanGBTwentyFive;
                
                            }
                        
                            
                             cout << "Data Cost with ATT Family plan is $" << dataCost;
}   

