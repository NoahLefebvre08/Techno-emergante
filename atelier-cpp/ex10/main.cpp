#include <iostream>
#include <algorithm>
using namespace std;


int checkArrays( int arr[], int taille){
    
    int nouvelleTaille = 1;

    for(int i = 1; i< taille; i++){
        
        if(arr[i] != arr[i-1]){

            arr[nouvelleTaille] = arr[i];

            nouvelleTaille++;
        }

    }

    return nouvelleTaille++;
}

int main(){

    int arr[] = {1,1,2,2,3,4,4,5};

    int taille = sizeof(arr) / sizeof(arr[0]);

    int nouvelleTaille = checkArrays(arr, taille);

    for(int i = 0; i< nouvelleTaille; i++){
        cout<< arr[i] << " ";
    }

    cout << "\nNouvelle Taille : " << nouvelleTaille << endl;

    return 0;
}