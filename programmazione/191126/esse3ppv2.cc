#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

struct Studente
{
    char nome[30];
    char cognome[30];
    int matricola;
    float media;
};

Studente *genera_studente(char nome[], char cognome[], int matricola, float media)
{

    Studente *caccola = new (nothrow) Studente;

    if (caccola == NULL)
    {
        return NULL;
    }

    strcpy(caccola->nome, nome);
    strcpy(caccola->cognome, cognome);
    caccola->matricola = matricola;
    caccola->media = media;
    return caccola;
}

void stampa_studente(Studente *x)
{
    cout << "nome     : " << x->nome << "\n"
         << "cognome  : " << x->cognome << "\n"
         << "matricola: " << x->matricola << "\n"
         << "media    : " << x->media << "\n"<<"\n\n";
}

Studente **carica_database(char file2[], int nRighe)
{
    // file stuff
    fstream file;
    file.open(file2, ios::in);
    if (file.eof() || file.fail())
    {
        cout << "file merda";
        exit(1);
    }

    Studente **database = new (nothrow) Studente *[nRighe];
    
    char nome[30], cognome[30];
    int matricola;
    float media;

    for (int i = 0; i < nRighe; i++)
    {
        file >> nome >> cognome >> matricola >> media;
        Studente *stud = genera_studente(nome, cognome, matricola, media);
        if(stud==NULL){
            return NULL;
        }
        database[i] = stud;
    }

    file.close();
    return database;
}

int main(int argc, char *argv[])
{
    Studente **database = carica_database(argv[1], atoi(argv[2]));
    for (int i = 0; i < atoi(argv[2]); i++)
    {
        stampa_studente(database[i]);
    }
    
    for (int i = 0; i < atoi(argv[2]); i++)
    {
        delete[] database[i];
    }
    delete [] database;
    
    return 0;
}