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