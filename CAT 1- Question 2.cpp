// Admission 147683
// CAT 1- Question 2
//9th November

#include <iostream>

 using namespace std;

//A c++ program that takes in temperature in Fahrenheit and converts it to Celsius

int main()
{
    //Declaration and initialization of the variables
    int temperature;
    int Fahrenheit{};
    int Celsius; 

    //Ask the user to input the temperature in Fahrenheit
    cout << "We will capture your temperature in Fahrenheit and output it in Celsius" << endl; 
    cout << "Please enter the temperature reading in Fahrenheit\n";  
    cin >> temperature; 

    temperature = 5.0 / 9.0 * (Fahrenheit - 32.0); 

    //output the temperature
    cout << "Your temperature in Celsius is: " << temperature << endl; 

    return 0; 

}

