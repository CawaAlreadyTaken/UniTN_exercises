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
	char filename[100];
	Studente * database = new Studente[1000];
	int N = 0;
	while (true) {
		char operation;
		int tmp;
		bool success;
		cout << "[ESSE3++] What do you want to do? [i/l/f/b/n/t/e]: ";
		cin >> operation;
		switch(operation) {
			case 'i':
				if (N < 1000) {
					cout << "[ESSE3++] Adding a new student." << endl;
					cout << "[ESSE3++] Name: ";
					cin >> nome[N];
					cout << "[ESSE3++] Surname: ";
					cin >> cognome[N];
					cout << "[ESSE3++] Badge Number: ";
					cin >> n_matricola[N];
					cout << "[ESSe3++] Average: ";
					cin >> avg[N];
					database[N] = genera_studente(nome[N], cognome[N], n_matricola[N], avg[N]);
					cout << "[ESSE3++] Student added." << endl;
					N++;
				} else {
					cout << "[ESSE3++] Database limit reached." << endl;
				}
				break;
			case 'l':
				cout << "[ESSE3++] Importing new students from a file. Insert filename: ";
				cin >> filename;
				in.open(filename, ios::in);	
				tmp = N;
				in >> nome[N];
				success = true;
				if (in.fail()) {
					cout << "[ESSE3++] File '" << filename << "' not found. Please create it." << endl;
					in.close();
					success = false;
				}
				if (success) {
					in >> cognome[N];
					in >> n_matricola[N];
					in >> avg[N];
					cout << "[ESSE3++] Saving new students..." << endl;
					bool size = false;
					N++;
					while (!in.eof() && !size) {
						if (N == 1000) {
							size = true;
						} else {
							in >> nome[N];
							in >> cognome[N];
							in >> n_matricola[N];
							in >> avg[N];
							N++;
						}
					}
					in.close();
					if (size) {
						cout << "[ESSE3++] Students were more than Max:1000. Saving only the first 1000." << endl;
					}
					for (int i = tmp; i < N; i++) {
						database[i] = genera_studente(nome[i], cognome[i], n_matricola[i], avg[i]);
					}
				}
				break;
			case 'f':
				cout << "[ESSE3++] This operation will overwrite any already existing database. Insert filename: ";
				cin >> filename;
				in.open(filename, ios::in);	
				in >> nome[0];
				success = true;
				if (in.fail()) {
					cout << "[ESSE3++] File '" << filename << "' not found. Please create it." << endl;
					in.close();
					success = false;
				}
				if (success) {
					in >> cognome[0];
					in >> n_matricola[0];
					in >> avg[0];
					cout << "[ESSE3++] Saving new students..." << endl;
					bool size = false;
					N = 1;
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
						cout << "[ESSE3++] Students were more than Max:1000. Saving only the first 1000." << endl;
					}
					for (int i = 0; i < N; i++) {
						database[i] = genera_studente(nome[i], cognome[i], n_matricola[i], avg[i]);
					}
					for (int i = N; i < 1000; i++) {
						database[i] = {0};
					}
				}
				break;
			case 'b':
				int b;
				int res;
				cout << "[ESSE3++] I will find the student if you tell me his Badge Number: ";
				cin >> b;
				res = cerca_matricola(database, b, N);
				if (res < 0) cout << "[ESSE3++] Couldn't find any student." << endl;
				else cout << "[ESSE3++] Student n. " << res << endl;
				break;
			case 'n':
				char n[20], c[20];
				cout << "[ESSE3++] can find a student if you tell me name and surname." << endl;
				cout << "[ESSE3++] Mind to capital the first letters!" << endl;
				cout << "[ESSE3++] Name: ";
				cin >> n;
				cout << "[ESSE3++] Surname: ";
				cin >> c;
				res = cerca_nome_cognome(database, n, c, N);
				if (res < 0) cout << "[ESSE3++] Couldn't find any student." << endl;
				else cout << "[ESSE3++] Student n. " << res << endl;
				break;
			case 't':
				cout << "[ESSE3++] Finding the student with top average..." << endl;
				if (N > 0)
					cout << "[ESSE3++] Found! It is the student n. " << studente_top_media(database, N) << endl;
				else {
					cout << "[ESSE3++] No students found." << endl;
				}
				break;
			case 'e':
				cout << "[ESSE3++] Thanks for using our service." << endl;
				delete [] database;
				return 0;
			default:
				cout << "[ESSE3++] Invalid Operation." << endl;
		}
	}



}
