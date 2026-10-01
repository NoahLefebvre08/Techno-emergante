#include <iostream>
using namespace std;
int main() {
   int a, b, c;

   cout << "Entrez trois nombres : " << endl;
    cin >> a >> b >> c;

   if(a> b && a> c){
    cout << "Le plus grand chiffre est A" << endl;
   }
   else if(b>a && b> c){ 
   cout << "Le plus grand chiffre est B" << endl;
    }
    else(cout << " le plus grand chiffre est C") << endl;

    return 0;
}

