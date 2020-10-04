#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    std::cout << "Hello World!\n";
    std::cout << "Wprowadz liczbê\n";
    string a;
    getline (cin, a);
    int b;
    stringstream(a) >> b;
    cout << "wprowadzona liczba to:" << b;


    return 0;
}
