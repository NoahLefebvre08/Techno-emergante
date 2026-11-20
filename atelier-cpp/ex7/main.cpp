#include <iostream>
#include <algorithm>
#include <cctype>
#include <utility>
#include <string>

using namespace std;



pair<int, int> compterVoyelleEtConsonnes(string entrerUtilisateur){

    int nbV = 0;
    int nbC = 0;
    string voyelles = "aeiouy";
    
    for (int i = 0; i< entrerUtilisateur.length(); i++){
    
        if(isalpha(tolower(entrerUtilisateur[i])))
        {   
            bool estVoyelle = false;

            for(int j = 0; j< voyelles.length(); j++){

                if(tolower(entrerUtilisateur[i]) == voyelles[j])
                {
                    nbV++;
                    estVoyelle = true;
                    break;
                }
            }

            if(estVoyelle == false)
            {
                nbC++;
            }
        }
    }
    
    return {nbV, nbC};
}
    

    
   
int main (){

    string entrerUtilisateur;

    cout << "Entrer un mot ou une phrase : ";
    getline(cin,entrerUtilisateur);

    pair<int, int> resultat = compterVoyelleEtConsonnes(entrerUtilisateur);

    cout << "Nombre de voyelle : " << resultat.first << endl;
    cout << "Nombre de consonnes : " << resultat.second << endl;

    return 0;
}