//Created By: John Sannar
//Created On: /7/2017
//A madlib program designed to take user inputs and imbed them into a story
 

#include <iostream> 
#include <string>
using namespace std;

    int main() 
    {
  
    string adjective = "Horror"; // starting here are the declered string variables that are set to a specific word but can be changed by user input.
    string pluralNounOne = "Pizza";
    string pluralNounTwo = "Dogs";
    string pluralNounThree = "Poopy Diapers";
    string nounOne = "Keyboard";
    string typeOfLiquid = "Urine";
    string exclaimation = "Woah!";
    
    
        cout << "Please enter an adjective" << endl; // line that asks for user input
        
            cin >> adjective; // user input line.
    
        cout << "Please enter a plural noun" << endl;
        
            cin >> pluralNounOne;
    
        cout << "Please enter another plural noun" << endl;
        
            cin >> pluralNounTwo;
    
        cout << "Please enter one more plural noun" << endl;
        
            cin >> pluralNounThree;
    
        cout << "oh no wait, enter another plural noun" << endl;
        
            cin >> nounOne;
        
        cout << "Please enter a type of liquid" << endl;
        
            cin >> typeOfLiquid;
        
        cout << "Please enter an exclaimation (Example: Woah!)" << endl;
        
            cin >> exclaimation;
    
    
    cout <<  "Children are fascinated by " << adjective << ". Stuff like that in stories is likely to scare the " << pluralNounOne << " out of them or make their " << pluralNounTwo << " stand on end. " << endl;
    cout << "It is especially funny when they get so scared that their " << nounOne << " fills with " << typeOfLiquid << ". Most of the time the kids will scream " << exclaimation << " when they are scared." << endl;
    cout << "No matter the age of the person, they fear " << pluralNounThree << ". Becuase everybody fears " << pluralNounThree << endl;

    
    }
    
    /*
    Running /home/ubuntu/workspace/lab15/lab15.cpp
Please enter an adjective
long
Please enter a plural noun
bikes
Please enter another plural noun
dogs
Please enter one more plural noun
cats
oh no wait, enter another plural noun
fishes
Please enter a type of liquid
water
Please enter an exclaimation (Example: Woah!)
No! 
Children are fascinated by long. Stuff like that in stories is likely to scare the bikes out of them or make their dogs stand on end. 
It is especially funny when they get so scared that their fishes fills with water. Most of the time the kids will scream No! when they are scared.
No matter the age of the person, they fear cats. Becuase nobody is brave enough to face cats

    */