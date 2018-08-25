#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double firstNumber;
	double secondNumber;
	double baseNumber;
	int exponent;
	double result;
	int choice;

	cout << "Enter the number of the mathematical operation you would like to perform. " << endl;
	cout << " 1. Addition " << endl;
	cout << " 2. Subtraction " << endl;
	cout << " 3. Multiplication " << endl;
	cout << " 4. Division " << endl;
	cout << " 5. Square " << endl;
	cout << " 6. Square Root " << endl;
	cout << " 7. Cube " << endl;
	cout << " 8. Cube Root" << endl;
	cout << " 9. Exponent Calculations" << endl;
	cin >> choice;

	switch (choice)
	{
		// Addition

		case 1: cout << "Enter the first number." << endl;
						cin >> firstNumber;
						cout << "Enter the second number." << endl;
						cin >> secondNumber;
						cout << "You entered " << firstNumber << " and " << secondNumber << endl;
						result = firstNumber + secondNumber;
						cout << "The sum of the two numbers entered is: " << result << endl;
						break;

		// Subtraction

		case 2: cout << "Enter the first number." << endl;
						cin >> firstNumber;
						cout << "Enter the second number." << endl;
						cin >> secondNumber;
						cout << "You entered " << firstNumber << " and " << secondNumber << endl;
						result = firstNumber - secondNumber;
						cout << "The differene of the two numbers entered is: " << result << endl;
						break;

		// Multiplication

		case 3: cout << "Enter the first number." << endl;
						cin >> firstNumber;
						cout << "Enter the second number." << endl;
						cin >> secondNumber;
						cout << "You entered " << firstNumber << " and " << secondNumber << endl;
						result = firstNumber * secondNumber;
						cout << "The product of the numbers entered is: " << result << endl;
						break;

		// Division

		case 4: cout << "Enter the first number." << endl;
						cin >> firstNumber;
						cout << "Enter the second number." << endl;
						cin >> secondNumber;

						// Input validation against divide by zero operations.
								if (secondNumber == 0)
								{
									cout << "Cannot divide by a zero value" << endl;
								}
						cout << "You entered " << firstNumber << " and " << secondNumber << endl;
						result = firstNumber / secondNumber;
						cout << "The quotient of the numbers entered is: " << result << endl;
						break;

		case 5: cout << "Enter the number you would like the square of." << endl;
						cin >> firstNumber;
						baseNumber = firstNumber;
						baseNumber = baseNumber * baseNumber;
						cout << "You entered " << firstNumber << endl;
						cout << "The square of "  << firstNumber << " is " << baseNumber << endl;
						break;

		case 6: cout << "Enter the number you would like the square root of." << endl;
						cin >> firstNumber;
						baseNumber = firstNumber;
						firstNumber = sqrt(firstNumber);
						cout << "The square of root of " << baseNumber << " is " << firstNumber << endl;
						break;

		case 7: cout << "Enter the number you would like the cube of." << endl;
						cin >> firstNumber;
						baseNumber = firstNumber;
						firstNumber = firstNumber * firstNumber * firstNumber;
						cout << "The cube of " << firstNumber << " is " << baseNumber << endl;
						break;

		case 8: cout << "Enter the number you would like the cube root of." << endl;
						cin >> firstNumber;
						baseNumber = firstNumber;
						firstNumber = cbrt(firstNumber) ;
						cout << "The cube root of " << firstNumber << " is " << baseNumber << endl;
						break;

		case 9: cout << "Enter a number." << endl;
						cin >> firstNumber;
						cout << "Enter an exponent number you would like to raise to the power of." << endl;
						cin >> exponent;
						result = pow(firstNumber, exponent);
						cout << "The number " << firstNumber << " raised to the power of " << exponent << " is " << result << endl;
						break;

	  default: cout << "Please select one of the choices listed." << endl;
						break;
	}

	return 0;
}

