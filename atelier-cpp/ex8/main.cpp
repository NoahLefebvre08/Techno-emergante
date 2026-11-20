#include <iostream>
#include <algorithm>
using namespace std;


int CheckArrays( int arr1[], int n, int elementChercher){

    

    for(int i = 0; i < n; i++){
        if(arr1[i] == elementChercher){
            return i;
        }
    }

    return -1;

}

int main()
{
    int arr[] = {10,11,7,8,2,9};
    int taille = sizeof(arr)/ sizeof(arr[0]);

    int elementChercher = 19;
    
    int resultat = CheckArrays(arr, taille, elementChercher);

    if(resultat != -1){
        cout << elementChercher << "Element trouve a l'index : " << resultat << endl;
    }
    else{
        cout << elementChercher << "Element non trouve dans arr[]" << endl;
    }

}
