#include <stdio.h>
#include <math.h>
#pragma warning(disable : 4996)

#define EPS 0.00000001

int write_reals_to_file(const char* fnameF) { //create file of int
	FILE* fp = fopen(fnameF, "wb");
	if (fp == NULL) {
		printf("Error opening %s", fnameF);
		return -1;
	}
	double tmp;
	do{
		printf("x=");
		scanf_s("%lf", &tmp);
		if (fabs(tmp) < EPS) break;
		fwrite(&tmp, sizeof(tmp), 1, fp);
	} while(1);
	fclose(fp);
	return 0;
}

int write_limit_reals_to_file(const char* fnameF, const char* fnameG, double a) {
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
	double tmp;
	do {
		int res = fread(&tmp, sizeof(tmp), 1, Fp);
		if (res != 1) {
			break;
		}
		if (fabs(tmp) < a) {
			fwrite(&tmp, sizeof(tmp), 1, Gp);
		}
	} while (!feof(Fp));
	fclose(Fp);
	fclose(Gp);
}


int main1(int argc, char** argv) {
	printf("hello world\n");
	char fnameF[] = "task2f.dat";
	char fnameG[] = "task2g.dat";
	double a;
	printf("a=");
	scanf_s("%lf", &a);

	write_reals_to_file(fnameF); // create file of reals
	write_limit_reals_to_file(fnameF, fnameG,a); //fromF to G with limit a
	return 0;
}