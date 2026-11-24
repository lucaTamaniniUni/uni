#include <iostream>
#include <fstream>
#include "sportello.h"
using namespace std;


int main(int argc, char const *argv[])
{
    const char * nomeFile = "Abbonamenti2026.txt";
    fstream file;
    file.open(nomeFile, ios::in);


    int numAbbons = 0;
    abbonamenti temp;
    while (file>>temp.nAbbonamento>>temp.nome>>temp.cognome>>temp.tipo>>temp.costo)
    {
        numAbbons++;
    }
    cout<<numAbbons;
    file.close();
    file.open(nomeFile,ios::in);
    abbonamenti *cisco = new (nothrow) abbonamenti[numAbbons*2];
    
    if(cisco==nullptr)
    exit(8);
    for (int i = 0; i < numAbbons; i++)
    {
        file>>cisco[i].nAbbonamento>>cisco[i].nome>>cisco[i].cognome>>cisco[i].tipo>>cisco[i].costo;
    }
    
    
    
    
    // do
    // {
    //     cout << "1. emetti nuovo abbonamento" << "\n"
    //          << "2. calcola guadagno totale " << "\n "
    //          << "3. calcola ricavo per tipo abbonamento " << "\n "
    //          << "4. esci " << "\n "
    //          << "scegli: ";

    //     int scelta;
    //     switch (scelta)
    //     {
    //     case 1:
    //         inserisci(nomeFile, cisco, numAbbons);
    //         break;
    //     case 2:
    //         guadagno(cisco);
    //         break;
    //     case 3:
    //         elabora(cisco, numAbbons);
    //         break;
    //     case 4:
    //         cout << "arrivederci";
    //         break;

    //     default:
    //         cout << "valore errato";
    //         break;
    //     }
    // } while (scelta != 4);

    file.close();
    return 0;
}
