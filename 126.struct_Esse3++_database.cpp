#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

struct Studente {
	char nome[20];
	char cognome[20];
	int n_matricola;
	double avg;
};

void stampa_studente(const Studente & S, int i) {
	cout << endl;
	cout << "Student n. " << i << endl;
	cout << "Name: " << S.nome << endl;
	cout << "Surname: " << S.cognome << endl;
	cout << "Badge Number: " << S.n_matricola << endl;
	cout << "Average: " << S.avg << endl;
}
Studente genera_studente(char nome[], char cognome[], int n_matricola, double avg) {
	Studente S;
	strcpy(S.nome, nome);
	strcpy(S.cognome, cognome);
	S.n_matricola = n_matricola;
	S.avg = avg;
	return S;
}

int main() {
	fstream in;
	char nome[1000][20];
	char cognome[1000][20];
	int n_matricola[1000];
	double avg[1000];
	in.open("databaseDiProva.txt", ios::in);	
	in >> nome[0];
	if (in.fail()) {
		cout << "File 'databaseDiProva.txt' not found. Please create it." << endl;
		in.close();
		exit(0);
	}
	in >> cognome[0];
	in >> n_matricola[0];
	in >> avg[0];
	cout << "Saving new students..." << endl;
	bool size = false;
	int N = 1;
	while (!in.eof() && !size) {
		in >> nome[N];
		in >> cognome[N];
		in >> n_matricola[N];
		in >> avg[N];
		N++;
		if (N == 1000) {
			size = true;
		}
	}
	in.close();
	if (size) {
		cout << "Students were more than Max:1000. Saving only the first 1000." << endl;
	}
	Studente * database = new Studente[N];
	for (int i = 0; i < N; i++) {
		database[i] = genera_studente(nome[i], cognome[i], n_matricola[i], avg[i]);
	}
	cout << "Here it is what i saved:" << endl;
	for (int i = 0; i < N; i++) {
		stampa_studente(database[i], i);
	}
	delete [] database;
	return 0;
}
