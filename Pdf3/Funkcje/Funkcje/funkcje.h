#ifndef FUNKCJE_H
#define FUNKCJE_H
 
#include <vector>

/**
* 1. Prosz� napisa� funkcj�, kt�ra przyjmuje pi�� liczb 
* zmiennoprzecinkowych i zwraca ich minimum.
**/
double PrzyjmijPiecZmiennychZwrocMin(double a, double b, double c, double d, double e);

/**
* 2. Prosz� napisa� funkcj�, kt�ra przyjmuje tablic� liczb 
* zmiennoprzecinkowych i rozmiar tablicy, i zwraca ich minimum.
**/
double PrzymijTabliceIRozmiarZwrocMin(double tab[], const int N);

/**
* 3. Prosz� napisa� funkcj�, kt�ra przyjmuje tablic� liczb 
* zmiennoprzecinkowe i rozmiar tablicy, i odwraca
* kolejno�� element�w w tablicy
**/
void PrzyjmijTabliceIRozmiarOdwrocTablice(double tab[], const int N);

/**
* 6. Prosz� napisz� funkcj�, kt�ra przyjmuje wektor liczb zmiennoprzecinkowych i 
* zwraca wektor tych�e liczb w odwrotnej kolejno�ci.
**/
void PrzyjmijVectorOdwrocVector(std::vector<double> vector);

/**
* 9. Prosz� napisa� funkcj�, kt�ra przyjmuje jeden parametr const int N i 
*zwraca wektor N pocz�tkowych liczb pierwszych.
**/
void PrzyjmijNZwrocWektor(const int N);







#endif 