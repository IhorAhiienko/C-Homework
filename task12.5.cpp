#include <iostream>
#include <fstream>
#include <cmath>

using ULL = unsigned long long;

int main() {

	ULL mas[2000];
	int k = 0;

	const char fname[] = "data3.txt";
	std::fstream f(fname);

	while (f >> mas[k++]) {
		;
	}
	f.close();

	std::cout.precision(4);
	for (int i = k - 2; i >= 0; i--) {
		std::cout << sqrt(mas[i]) << std::endl;
	}
}
