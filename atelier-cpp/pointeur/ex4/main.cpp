#include <iostream>
#include <algorithm>
using namespace std;


void calculerStats(const int* tab, int taille, int* pSomme, int* pMax){

    *pSomme = 0;

    *pMax = tab[0];

    for(int = 0; i < taille; i++;){

        *pSomme += tab[i];

        if(tab[i] > *pMax){
            *pMax = tab[i];
        }

    }
}

int main(){

    int arr[] = {1,4,9,6,2};

    int somme;
    int max;
    int taille = sizeof(arr) / sizeof(arr[0]);

    calculerStats(arr, taille, &somme, &max);

    cout << " VOici les restulat de la somme et du max " << endl

    cout << somme << " : " << max << endl;

    return 0;
}