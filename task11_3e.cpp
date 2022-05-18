#include <stdio.h>
#include <math.h>
#pragma warning(disable : 4996)


int create_file(const char* fnameF) { //create file of reals
	FILE* fp = fopen(fnameF, "wb");
	if (fp == NULL) {
		printf("Error opening %s", fnameF);
		return -1;
	}
	int tmp;
	do {
		printf("x=");
		scanf("%lf", &tmp);
		if (tmp==0) break;
		fwrite(&tmp, sizeof(tmp), 1, fp);
	} while (1);
	fclose(fp);
	return 0;
}

int write_fib_to_file(const char* fnameF, const char* fnameG) {
	FILE* Fp = fopen(fnameF, "rb");
	if (Fp == NULL) {
		printf("Error opening %s", fnameF);
		return -1;
	}
	FILE* Gp = fopen(fnameG, "wb");
	if (Gp == NULL) {
		printf("Error opening %s", fnameG);
		return -2;
	}
	int tmp;
	do {
		int res = fread(&tmp, sizeof(tmp), 1, Fp);
		if (res != 1) {
			break;
		}
		if (fib_num(tmp)) {
			fwrite(&tmp, sizeof(tmp), 1, Gp);
		}
	} while (!feof(Fp));
	fclose(Fp);
	fclose(Gp);
}

int fib_num(int a) {
	int f0, f1, f2;
	f0 = 0;
	f1 = 0;
	f2 = 1;
	while (f2 < a) {
		f0 = f1;
		f1 = f2;
		f2 = f1 + f0;
	}
	if (a != f2 and a != f1 and a != f2) return 0;
	else return 1;
}

int main2(int argc, char** argv) {
	printf("hello world\n");
	char fnameF[] = "task2f.dat";
	char fnameG[] = "task2g.dat";
	double a;
	printf("a=");
	scanf("%lf", &a);

	create_file(fnameF); // create file of reals
	write_fib_to_file(fnameF, fnameG); //fromF to G with limit a
	return 0;
}