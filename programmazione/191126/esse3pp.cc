#include <iostream>
#include <cstring>
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
         << "media    : " << x->media << "\n";
}
int main(int argc, char const *argv[])
{

    Studente *prova = genera_studente("cisco", "aura", 277013, 23.7);
    stampa_studente(prova);
    return 0;
}