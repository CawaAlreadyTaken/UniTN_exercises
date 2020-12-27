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
void printPath(albero root, int t);
void deallocaTree(albero root);

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
			  int t;
			  cout << "What number are you looking for? ";
			  cin >> t;
		     printPath(alberoBinario, t);
			  deallocaTree(alberoBinario);
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

void printPath(albero root, int t) {
	if (root == NULL) {
		cout << "Could not find " << t << "." << endl;
	} else if (root->value == t) {
		cout << "Found!" << endl;
	} else {
		if (root->value > t) {
			cout << root->value << " left, ";
			printPath(root->left, t);
		} else {
			cout << root->value << " right, ";
			printPath(root->right, t);
		}
	}
}

void deallocaTree(albero root) {
	if (root != NULL) {
		deallocaTree(root->left);
		deallocaTree(root->right);
		delete root;
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
