#include <iostream>
#include <math.h>
#include<cstdlib>
using namespace std;
int main()
{
	int x, euros, ans;
	double y, sum, sub{}, mult, div, raised, b, am, jy, pr;
	cout << "please enter the first number:";
	cin >> x;
	cout << "please enter the second  number:";
	cin >> y;
	// start of operations
	if (x >= y) {
		sub = x - y;
	}
	sum = x + y;
	mult = x * y;
	if (y != 0) {
		div = x / y;
	}
	raised = pow(x, y);
	//end of operations
	cout << "'\n' Addition" << sum;
	cout << "'\n' Subtraction " << sub;
	cout << "'\n' Multiplication " << mult;
	cout << "'\n' Division  " << div;
	cout << "'\n' Raised To Power" << raised;
	cout << "'\n 'Would you like to try our currency converter? Yes(press 0)/No(press 1)?";
	cin >> ans;
	if (ans = 0) {
		cout << "Enter the amount of euros you want to convert";
		cin >> euros
			//calculations
			;b = euros * 0, 87;
			am = euros * 0, 99;
			jy = euros * 145,62;
			pr = euros * 81, 37;
			cout << euros << "Euros are equal to" << b;'n';
			cout << euros << "Euros are equal to" << am;'n';
			cout << euros << "Euros are equal to" << jy;'n';
			cout << euros << "Euros are equal to" << pr;'n';
	}



}
