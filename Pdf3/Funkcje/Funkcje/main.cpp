#include "funkcje.h"
#include <iostream>


int main(){
	double a = 6.7;
	double b = -51.3;
	double c = 10000.3351;
	double d = -95120.233;
	double e = 76.88888;
	double Minimum;

	Minimum = PrzyjmijPiecZmiennychZwrocMin(a, b, c, d, e);
	std::cout << Minimum;



}

