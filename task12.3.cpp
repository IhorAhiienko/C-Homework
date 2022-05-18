#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <cmath>
//to_do
using namespace std;

int main3() {
	int n;
	float i;
	cin >> n;
	cout << fixed;
	cout << setprecision(2);
	i = 1.0;

	while (i <= n) {
		cout << i << "`s square root is " << pow(i, 0.5) << endl;
		i++;
	}
	return 0;
}