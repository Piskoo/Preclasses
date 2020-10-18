#ifndef FUNKCJE_H
#define FUNKCJE_H
 
#include <vector>

/**
* 1. Proszê napisaæ funkcjê, która przyjmuje piêæ liczb 
* zmiennoprzecinkowych i zwraca ich minimum.
**/
double PrzyjmijPiecZmiennychZwrocMin(double a, double b, double c, double d, double e);

/**
* 2. Proszê napisaæ funkcjê, która przyjmuje tablicê liczb 
* zmiennoprzecinkowych i rozmiar tablicy, i zwraca ich minimum.
**/
double PrzymijTabliceIRozmiarZwrocMin(double tab[], const int N);

/**
* 3. Proszê napisaæ funkcjê, która przyjmuje tablicê liczb 
* zmiennoprzecinkowe i rozmiar tablicy, i odwraca
* kolejnoœæ elementów w tablicy
**/
void PrzyjmijTabliceIRozmiarOdwrocTablice(double tab[], const int N);

/**
* 6. Proszê napisz¹ funkcjê, która przyjmuje wektor liczb zmiennoprzecinkowych i 
* zwraca wektor tych¿e liczb w odwrotnej kolejnoœci.
**/
void PrzyjmijVectorOdwrocVector(std::vector<double> vector);

/**
* 9. Proszê napisaæ funkcjê, która przyjmuje jeden parametr const int N i 
*zwraca wektor N pocz¹tkowych liczb pierwszych.
**/
void PrzyjmijNZwrocWektor(const int N);







#endif 