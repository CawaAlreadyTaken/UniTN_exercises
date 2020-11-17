#include <iostream>
#include <cstring>

using namespace std;

struct Studente {
	char nome[20];
	char cognome[20];
	int n_matricola;
	float avg;
};

void stampa_studente(const Studente & S) {
	cout << endl;
	cout << "Name: " << S.nome << endl;
	cout << "Surname: " << S.cognome << endl;
	cout << "Badge Number: " << S.n_matricola << endl;
	cout << "Average: " << S.avg << endl;
}
Studente genera_studente(char nome[], char cognome[], int n_matricola, float avg) {
	Studente S;
	strcpy(S.nome, nome);
	strcpy(S.cognome, cognome);
	S.n_matricola = n_matricola;
	S.avg = avg;
	return S;
}

int main() {
	char nome[20];
	char cognome[20];
	int n_matricola;
	float avg;
	cout << "Saving a new student:" << endl;
	cout << "What is its name? ";
	cin >> nome;
	cout << "And what is its surname? ";
	cin >> cognome;
	cout << "Badge number: ";
	cin >> n_matricola;
	cout << "Average: ";
	cin >> avg;
	Studente S = genera_studente(nome, cognome, n_matricola, avg);
	stampa_studente(S);
	return 0;
}
