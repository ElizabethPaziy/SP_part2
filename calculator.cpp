#include "calculator.h"
#include <iostream>

using namespace std;

int Calculator::add (double a, double b)
{
	return a + b;
}

int Calculator::sub (double a, double b)
{
	return add(a, -b);
}

double Calculator::mul (double a, double b) {
        return add(a, a*(b-1));
}

double Calculator::div (double a, double b) {
	if (b == 0) {
	  cout << "Divide by 0!" << endl;
	  return 0;
	} 
	return a / b;
}

