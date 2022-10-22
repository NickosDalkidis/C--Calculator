#include <iostream>#include <iostream>
using namespace std;
int main()
{
	int x;
	double y, sum, sub{}, mult, div;
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

	//end of operations
	cout << "'\n' Addition" << sum;
	cout << "'\n' Subtraction " << sub;
	cout << "'\n' Multiplication "<< mult;
	cout << "'\n' Division  "<< div;

}
using namespace std;
int main()
{
	int x;
	double y , sum ,sub ,mult ,div ;
	cout << "please enter the first number:";
	cin >> x;
	cout << "please enter the second  number:";
	cin >> y;
	if (x>=y) {
		sub = x - y;
	}
	sum=x+y;
	mult = x * y;
	if (y!=0) {
		div = x / y;}
	cout << "Addition";
	cout << sum;
	cout << "Subtraction";
	cout << sub;
	cout << "Multiplication";
	cout << mult;
	cout << "Division";
	cout << div;
}		
