#include <iostream>
#include "calculator.h"

using namespace std;

int main() {
	double a, b;
        
        hello();
        
	cout << "Enter A: ";
	cin >> a;

	cout << "Enter B: ";
	cin >> b;
	
	Calculator calc;

	cout << "Result add: " << calc.add(a, b) << endl;
        cout << "Result sub: " << calc.sub(a, b) << endl;
        cout << "Result mul: " << calc.mul(a, b) << endl;
        cout << "Result div: " << calc.div(a, b) << endl;

	return 0;
}
