#ifndef FUNKCJE_H
#define FUNKCJE_H
 
#include <vector>

/**
* Prosz� napisa� funkcj�, kt�ra przyjmuje pi�� liczb 
* zmiennoprzecinkowych i zwraca ich minimum.
**/
double PrzyjmijPiecZmiennychZwrocMin(double a, double b, double c, double d, double e);

/**
* Prosz� napisa� funkcj�, kt�ra przyjmuje tablic� liczb 
* zmiennoprzecinkowych i rozmiar tablicy, i zwraca ich minimum.
**/
double PrzymijTabliceIRozmiarZwrocMin(double tab[], const int N);

/**
*Prosz� napisa� funkcj�, kt�ra przyjmuje tablic� liczb 
*zmiennoprzecinkowe i rozmiar tablicy, i odwraca
*kolejno�� element�w w tablicy
**/
void PrzyjmijTabliceIRozmiarOdwrocTablice(double tab[], const int N);

/**
* Prosz� napisz� funkcj�, kt�ra przyjmuje wektor liczb zmiennoprzecinkowych i 
*zwraca wektor tych�e liczb w odwrotnej kolejno�ci.
**/
void PrzyjmijVectorOdwrocVector(std::vector<double> vector);









#endif 