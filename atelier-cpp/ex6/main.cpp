#include <iostream>
#include <algorithm>
using namespace std;

void inverserTableau(int arr[], int taille){

    for(int i = 0; i< taille/2 ; i++){
        int temp = arr[i];
        arr[i] = arr[taille - 1 - i];
        arr[taille - 1 - i] = temp;
    }

}

int main()
{
    int arr[] = {1,2,3,4,5};
    int taille = sizeof(arr) / sizeof(arr[0]);

    inverserTableau(arr, taille);

    for(int i = 0; i<taille; i++){
        cout <<arr[i] << endl;
    }

    return 0;
}