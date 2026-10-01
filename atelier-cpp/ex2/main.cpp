#include <iostream>
using namespace std;

void versFahrenheit() {
    int celsius;
    int fahrenheit;

    cout << "Entrer le nombre en celcius : " << endl;
    cin >> celsius;

    fahrenheit = (celsius * 1.8) + 32;
    cout << celsius << " en celsius est = " << fahrenheit << " en fahrenheit" << endl;

}

void versCelcius(){
    int celsius;
    int farhenheit;

    cout << "Entrer le nombre en farhenheite" << endl;
    cin >> farhenheit;

    celsius = (farhenheit-32)/1.8;
    cout << farhenheit << "en farenheite est " << celsius << " en celsius" << endl;

}


int main() {
int choix;
cout << "Choissiser quelle converstion vous souaiter appliquer. : "<< endl ;
cout << " 1 : Celcius vers Fahrenheit.  "<< endl ;
cout << " 2 : Fahrenheit vers Celcius.  "<< endl ;
cout << "Votre choix : ";
cin >> choix;


switch(choix){
    case 1 :
        versFahrenheit();
    break;
    case 2 :
        versCelcius();
    break;
}    
    return 0;

}  