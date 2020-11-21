#include <iostream>
#include <fstream>
#include "129.crypt_decrypt_functions.h"

using namespace std;

char output[100];

void crypt(char parola [], int chiave) {
	int i;
	for (i = 0; i < 100 && parola[i]!='\0'; i++) {
		char newLetter;
		if (parola[i]-'a'+chiave>25) {
			newLetter = (parola[i]-'a'+chiave)%26+'a';
		} else newLetter = parola[i]+chiave;
		output[i] = newLetter;
	}
	output[i] = '\n';
}

void decrypt(char parola [], int chiave) {
	cout << 1;
}
