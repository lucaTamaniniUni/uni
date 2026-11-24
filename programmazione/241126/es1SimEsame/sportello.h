#ifndef sportello_h
#define sportello_h

struct abbonamenti
{
    int nAbbonamento;
    char nome[32];
    char cognome[32];
    char tipo[2];
    float costo;
};

bool inserisci(char nomeFile[], abbonamenti* abbs[], int numElem);

float guadagno(abbonamenti* abbs[]);

void elabora(abbonamenti* abbs[], int numAbbs, float r[4]);

#endif