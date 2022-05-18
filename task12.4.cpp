#include <iostream>
#include <fstream>

using namespace std;

int main() {
	unsigned n;
	cout << "n=";
	cin >> n;
	int* m = new int[n];//dynamic array of size n

	for (unsigned i = 0; i < n; i++) {
		cin >> m[i];
	}
	double* x = new double[n];
	const char fname[] = "ddata.txt";
	fstream f;
	f.open(fname, fstream::out);
	if (f.bad()) {
		cerr << "error opening file" << fname << "\n";
		delete[] x;
		delete[] m;
		return 0;
	}

	unsigned k = 0;
	double a;
	while (f>>a&&k<n) {
		x[k++] = a;
	}

	if (k != n) {
		cerr << "read only" << k << "numbers but needed" << n << "!\n";
		return 0;
	}
	else {
		const char gname[] = "ddate2.txt";
		fstream g;
		g.open(fname, fstream::in);
		if (!f) {
			cerr << "error opening file" << gname << "\n";
			delete[] x;
			delete[] m;
			return 0;
		}
		for (unsigned i = 0; i < n; i++) {
			g << pow(x[i], m[i]) << " ";
		}
		g.close();
	}

	f.close();
	
}