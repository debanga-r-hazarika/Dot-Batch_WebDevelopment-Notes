#include <iostream>
using namespace std;

double celsiusToFahrenheit(double celsius)
{
    return (celsius * 9/5) + 32;
}

double fahrenheitToCelsius(double fahrenheit)
{
    return (fahrenheit - 32) * 5/9;
}

int main()
{
    double temperature;
    char choice;

    cout << "Enter temperature: ";
    cin >> temperature;

    cout << "Enter 'C' to convert to Celsius or 'F' to convert to Fahrenheit: ";
    cin >> choice;

    switch (choice)
    {
        case 'C':
        case 'c':
            cout << temperature << " Fahrenheit is " << fahrenheitToCelsius(temperature) << " Celsius." << endl;
            break;
        case 'F':
        case 'f':
            cout << temperature << " Celsius is " << celsiusToFahrenheit(temperature) << " Fahrenheit." << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
            break;
    }

    return 0;
}