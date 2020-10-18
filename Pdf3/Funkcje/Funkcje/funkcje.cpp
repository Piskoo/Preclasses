#include <algorithm>
#include <iostream>

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

double PrzymijTabliceIRozmiarZwrocMin(double tab[], const int N) {
	double Min = tab[0];

	for (int i = 1; i < N; i++) {
		if (Min > tab[i]) {
			Min = tab[i];
		}
	}
	return Min;
}

void PrzyjmijTabliceIRozmiarOdwrocTablice(double tab[], const int N) {
	for (int i = 0; i < N / 2; i++) {
		std::swap(tab[i], tab[N - i - 1]);
	}
	for (int i = 0; i < N; i++) {
		std::cout << tab[i] << " ";
	}
}

void PrzyjmijVectorOdwrocVector(std::vector<double> vector) {
	for (int i = 0; i < vector.size() / 2; i++) {
		std::swap(vector[i], vector[vector.size() - i - 1]);
	}
		for (int i = 0; i < vector.size(); i++) {
			std::cout << vector[i] << " ";
		}
}