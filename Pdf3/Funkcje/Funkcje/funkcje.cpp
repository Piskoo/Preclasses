#include <algorithm>

#include "funkcje.h"

double PrzyjmijPiecZmiennychZwrocMin(double a, double b, double c, double d, double e){
	double PiecLiczb[5] = { a, b, c, d, e };
	int Piec = 5;
	double Min = a;
		for (int i = 1; i < Piec; i++) {
			if (Min > PiecLiczb[i])
				Min = PiecLiczb[i];
		}
	return Min;
}

double PrzymijTabliceIRozmiarZwrocMin(double tab[], int N) {
	double Min = tab[0];

	for (int i = 1; i < N; i++) {
		if (Min > tab[i]) {
			Min = tab[i];
		}
	}
	return Min;
}