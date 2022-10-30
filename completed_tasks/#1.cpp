#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int a, b;
	cout << "Input a >> ";
	cin >> a;
	cout << "Input b >> ";
	cin >> b;
	cout << a << " + " << b << " = " << a + b << "\n";
	cout << a << " - " << b << " = " << a - b << "\n";
	cout << a << " / " << b << " = " << a / b << "\n";
	cout << a << " * " << b << " = " << a * b << "\n";
	cout << a << " % " << b << " = " << a % b << "\n";
	cout << a << " ^ " << b << " = " << pow(a,b) << "\n";
}
