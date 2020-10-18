#include <iostream>

#include "funkcje.h"



int main(){
	double a = 6.7;
	double b = -51.3;
	double c = 10000.3351;
	double d = -95120.233;
	double e = 76.88888;
	double Minimum;
	const int N = 5;
	double Tablica[N] = { a+1,b+1,c+1,d+1,e+1 };

	Minimum = PrzyjmijPiecZmiennychZwrocMin(a, b, c, d, e);
	std::cout << Minimum << std::endl;
	Minimum = PrzymijTabliceIRozmiarZwrocMin(Tablica, N);
	std::cout << Minimum << std::endl;
	PrzyjmijTabliceIRozmiarOdwrocTablice(Tablica, N);
	



}

