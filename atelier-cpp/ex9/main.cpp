#include <iostream>
#include <algorithm>
using namespace std;


void rotation(int arr[], int taille, int k){
    
    for(int i = 0; i< k; i++){

        int dernier = arr[taille -1];

        for(j = taille; j > 0 ; j--){
            arr[j] = arr[j-1];
        }
        arr[0] = dernier;
    }
}


int main()
{   
    int k;

    int arr[] = {12,3,5,6,7};

    int taille = sizeof(arr) / sizeof(arr[0]);

    cout << "Entrer le K qui va decider le nombre de rotation qui va etre effectuer";

    cin >> k;

    rotation(arr,taille,k);

    for(int i = 0; i < taille; i++){
        cout<< arr[i] << " ":
    }
    
    return 0;
}