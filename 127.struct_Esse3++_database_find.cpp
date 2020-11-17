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

Studente genera_studente(char nome[], char cognome[], int n_matricola, double avg) {
	Studente S;
	strcpy(S.nome, nome);
	strcpy(S.cognome, cognome);
	S.n_matricola = n_matricola;
	S.avg = avg;
	return S;
}

int cerca_matricola(Studente * database, int n_matricola, int N) {
	int res = -1;
	for (int i = 0; i < N; i++) {
		if (database[i].n_matricola == n_matricola) res = i;
	}
	return res;
}

int cerca_nome_cognome(Studente * database, char * nome, char * cognome, int N) {
	int res = -1;
	for (int i = 0; i < N; i++) {
		if (strcmp(database[i].nome, nome) == 0)
			if (strcmp(database[i].cognome, cognome) == 0) res = i;
	}
	return res;

}

int studente_top_media(Studente * database, int N) {
	int res;
	int avg = -1;
	for (int i = 0; i < N; i++) {
		if (database[i].avg > avg) {
			res = i;
			avg = database[i].avg;
		}
	}
	return res;
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

	int b;
	int res;
	cout << "Students saved. I can find a student if you tell me his Badge Number. Give me one: ";
	cin >> b;
	res = cerca_matricola(database, b, N);
	if (res < 0) cout << "Couldn't find any student." << endl;
	else cout << "Student n. " << res << endl;

	char n[20], c[20];
	cout << "I can find a student if you tell me name and surname. Mind capital first letters!" << endl;
	cout << "Name: ";
	cin >> n;
	cout << "Surname: ";
	cin >> c;
	res = cerca_nome_cognome(database, n, c, N);
	if (res < 0) cout << "Couldn't find any student." << endl;
	else cout << "Student n. " << res << endl;

	cout << "I can find the student with top average: it is the student n. " << studente_top_media(database, N) << endl;

	delete [] database;
	return 0;
}
