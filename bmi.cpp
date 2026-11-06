#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

	double weight, height;

	cout << "Enter your weight in pounds: " << endl;
	cin >> weight;

	if (weight > 0)
	{
		cout << "Valid entry." << endl;
	}
	else if (weight <= 0)
    {   
		cout << "Invalid entry. Number must be greater than zero." << endl;
	    cout << "Program terminated." << endl;
	    return 0;
    }

	cout << "Enter your height in inches: " << endl;
	cin >> height;
	
	if (height > 0)
	{
		cout << "Valid entry." << endl;
	}
	else if (height <= 0)
	{
		cout << "Invalid entry. Number must be greater than zero." << endl;
	    cout << "Program terminated." << endl;
	    return 0;
	}
	
	double bmi = weight * 703.0 / (height * height);
	
    if (bmi < 18.5)
    {
        cout << fixed << setprecision(2);
        cout << "Your BMI is " << bmi << endl;
        cout << "Underweight." << endl;
    }
    else if (bmi >= 18.5 && bmi < 25.0)
    {
        cout << fixed << setprecision(2);
        cout << "Your BMI is " << bmi << endl;
        cout << "Optimal weight." << endl;
    }
    else if (bmi > 25.0)
    {
        cout << fixed << setprecision(2);
        cout << "Your BMI is " << bmi << endl;
        cout << "Overweight." << endl;
    }

	return 0;
}