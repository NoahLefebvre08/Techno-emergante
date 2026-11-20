#include <iostream>
#include <algorithm>
using namespace std;


int main(){

    int var = 42;
    int chifrre = 100;
    int* p = &var;

    cout<< "valeur de a " << *p << endl;
    cout << "Adresse de a " << p << endl;

    *p = chifrre;
    cout<< "valeur de a " << *p << endl;
    return 0;
}


