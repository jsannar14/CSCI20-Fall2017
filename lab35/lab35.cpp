#include <iostream>
using namespace std;

/*TemperatureConverter Class*/
class TemperatureConverter{
    
    public: 
    TemperatureConverter();
    TemperatureConverter(double deg_kelvin);
    
    void SetTempFromKelvin(double deg_kelvin);
    void SetTempFromFahrenheit(double deg_fahrenheit);
    void SetTempFromCelsius(double deg_celcius);
    
    double GetTempFromKelvin() const;
    double GetTempAsFahrenheit() const;
    double GetTempAsCelsius() const;
    
    void PrintTemperatures();
    
    private:
    
    int kelvin_;
    
    
};    


// accessor function sets the value of kelvin to 0.
 TemperatureConverter::TemperatureConverter(){
    
    kelvin_ = 0;
    
    return;
    
}

// Overload constructor that accepts a kelvin value
TemperatureConverter::TemperatureConverter(double deg_kelvin) {
    
    if (deg_kelvin >= 0 ){
        
    kelvin_ = deg_kelvin;
        
    }
    
    return;
}

void TemperatureConverter::SetTempFromKelvin(double deg_kelvin) {
    
    if (deg_kelvin >= 0) {
        
        kelvin_ = deg_kelvin;

    }
        return;    
}

void TemperatureConverter::SetTempFromCelsius(double deg_celcius) {
    
    if (deg_celcius >= -273.15) {
        
        kelvin_ = deg_celcius + 273.15;
        
    }
    return;
}
    
void TemperatureConverter::SetTempFromFahrenheit(double deg_fahrenheit){
    
    if (deg_fahrenheit >= -459.67){
        
        kelvin_ = 5 * ((deg_fahrenheit) - 32.0/9.0) - 273.15;
    }
    
    return;
    
}

double TemperatureConverter::GetTempFromKelvin() const{
    
    return kelvin_;
}

double TemperatureConverter::GetTempAsCelsius() const{
    
    return kelvin_ - 273.15;
}

double TemperatureConverter::GetTempAsFahrenheit() const{
    
    return (9 * GetTempAsCelsius()) / 5 + 32;
}

void TemperatureConverter :: PrintTemperatures(){
    
    cout << " Your temp in Kelvin is: " << GetTempFromKelvin() << endl;
    cout << " Your temp in Farenheit is:  " << GetTempAsFahrenheit() << endl;
    cout << " Your temp in Celsius is: " << GetTempAsCelsius() << endl;
    
}

/* Created By: April Browne
 * Created On: 9/22/2016
 * This program will run the Temperature Converter Class
 */
 
#include<iostream>
using namespace std;

int main ()
{
    TemperatureConverter temp1; //testing default constructor
    TemperatureConverter temp2(274); //testing overloaded constructor
    
    temp1.PrintTemperatures();
    temp2.PrintTemperatures();
    
    temp1.SetTempFromKelvin(400.15); //testing mutator function
    cout<<temp1.GetTempFromKelvin()<<endl;//testing accessor function
    temp1.PrintTemperatures();
    
    temp2.SetTempFromCelsius(32); //testing other functions
    cout<<temp2.GetTempAsCelsius()<<endl;
    temp2.PrintTemperatures();
    
    temp2.SetTempFromFahrenheit(32);
    cout<<temp2.GetTempAsFahrenheit()<<endl;
    temp2.PrintTemperatures();
    
    return 0;
}

