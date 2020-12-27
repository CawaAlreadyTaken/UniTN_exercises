#include <iostream>
#include <fstream>

using namespace std;

struct nodo {
    int value;
    nodo* left;
    nodo* right;
};
typedef nodo* albero;

void stampaAlbero(albero radice, int spazio=0);

albero creaAlbero(char* fileInput);
void inserisciNodo(albero radice, nodo* nuovoNodo);
void printIncreasing(albero alberoBinario);

int main(int argc, char * argv[]) {

    int returnValue = 0;
    
    if (argc != 2) {
        cout << "Usage: ./a.out <inputFile>" << endl;
        returnValue = 1;
    }
    else {
        albero alberoBinario = creaAlbero(argv[1]);

        if (alberoBinario == NULL) {
            cout << "L'albero è vuoto" << endl;
            returnValue = 2;
        }
        else {
            //stampaAlbero(alberoBinario);
				printIncreasing(alberoBinario);
        }
    }
    return returnValue;
}

albero creaAlbero(char * inputFile) {

    fstream input;
    input.open(inputFile, ios::in);

    albero radice = NULL;

    if (input.fail()) {
        cout << "Il file non esiste o il programma non può leggerlo" << endl;
    }
    else {

        int numero;
        input >> numero;
        radice = new nodo{numero, NULL, NULL};

        while (input >> numero) {
            nodo* nuovoNodo = new nodo{numero, NULL, NULL};
            inserisciNodo(radice, nuovoNodo);
        }

        input.close();
    }

    return radice;
}

void printIncreasing(albero alberoBinario) {
	if (alberoBinario) {
		printIncreasing(alberoBinario->left);
		cout << alberoBinario->value << " ";
		printIncreasing(alberoBinario->right);
	}
}

void inserisciNodo(albero radice, nodo* nuovoNodo) {
    if (radice->value > nuovoNodo->value) {
        if (radice->left == NULL) {
            radice->left = nuovoNodo;
        }
        else {
            inserisciNodo(radice->left, nuovoNodo);
        }
    }
    else {
        if (radice->right == NULL) {
            radice->right = nuovoNodo;
        }
        else {
            inserisciNodo(radice->right, nuovoNodo);
        }
    }
}


void stampaAlbero(albero radice, int spazio){
   if (radice != NULL) {
    spazio ++;
    
    stampaAlbero(radice->right, spazio);
 
    for (int i = 1; i < spazio; i++) {
        cout<<"\t";
    }
    cout<<radice->value<<"\n";
    
    stampaAlbero(radice->left, spazio);
   }
}
