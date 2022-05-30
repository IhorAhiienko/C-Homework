#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double k;
	cout.precision(5);
	cout.fill('0');
	cout.setf(ios_base::dec);
	cout << "Enter a number between -10000 and 10000" << endl;
	cin >> k;
	double res = pow(k, 10);
	cout.width(20);
	cout << res << endl;
	return 0;
}
