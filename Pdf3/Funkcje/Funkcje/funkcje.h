#ifndef FUNKCJE_H
#define FUNKCJE_H
 
#include <vector>

/**
* Proszê napisaæ funkcjê, która przyjmuje piêæ liczb 
* zmiennoprzecinkowych i zwraca ich minimum.
**/
double PrzyjmijPiecZmiennychZwrocMin(double a, double b, double c, double d, double e);

/**
* Proszê napisaæ funkcjê, która przyjmuje tablicê liczb 
* zmiennoprzecinkowych i rozmiar tablicy, i zwraca ich minimum.
**/
double PrzymijTabliceIRozmiarZwrocMin(double tab[], const int N);

/**
*Proszê napisaæ funkcjê, która przyjmuje tablicê liczb 
*zmiennoprzecinkowe i rozmiar tablicy, i odwraca
*kolejnoœæ elementów w tablicy
**/
void PrzyjmijTabliceIRozmiarOdwrocTablice(double tab[], const int N);

/**
* Proszê napisz¹ funkcjê, która przyjmuje wektor liczb zmiennoprzecinkowych i 
*zwraca wektor tych¿e liczb w odwrotnej kolejnoœci.
**/
void PrzyjmijVectorOdwrocVector(std::vector<double> vector);









#endif 