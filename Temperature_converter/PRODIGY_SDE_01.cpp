#include <iostream>
using namespace std;

int main() {
    double temperature;
    char originalUnit;

    cout << "Enter a temperature value: ";
    cin >> temperature;
    cout << "Enter the original unit of measurement (C, F, or K): ";
    cin >> originalUnit;

    double convertedTemperatureC, convertedTemperatureF, convertedTemperatureK;

    switch (originalUnit) {
        case 'C':
        case 'c':
            convertedTemperatureF = (temperature * 9.0/5.0) + 32;
            convertedTemperatureK = temperature + 273.15;
            cout << "Temperature in Fahrenheit: " << convertedTemperatureF << " F" << endl;
            cout << "Temperature in Kelvin: " << convertedTemperatureK << " K" << endl;
            break;

        case 'F':
        case 'f':
            convertedTemperatureC = (temperature - 32) * 5.0/9.0;
            convertedTemperatureK = (temperature - 32) * 5.0/9.0 + 273.15;
            cout << "Temperature in Celsius: " << convertedTemperatureC << " C" << endl;
            cout << "Temperature in Kelvin: " << convertedTemperatureK << " K" << endl;
            break;

        case 'K':
        case 'k':
            convertedTemperatureC = temperature - 273.15;
            convertedTemperatureF = (temperature - 273.15) * 9.0/5.0 + 32;
            cout << "Temperature in Celsius: " << convertedTemperatureC << " C" << endl;
            cout << "Temperature in Fahrenheit: " << convertedTemperatureF << " F" << endl;
            break;

        default:
            cout << "Invalid unit of measurement. Please enter 'C', 'F', or 'K'." << endl;
            break;
    }

    return 0;
}
