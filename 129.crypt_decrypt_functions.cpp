#include <iostream>
#include <fstream>
#include "129.crypt_decrypt_functions.h"

using namespace std;

char output[100];

void crypt(char parola [], int chiave) {
	int i;
	for (i = 0; i < 100 && parola[i]!='\0'; i++) {
		char newLetter;
		if (parola[i] >= 'a' && parola[i] <= 'z') {
			if (parola[i]-'a'+chiave>25) {
				newLetter = (parola[i]-'a'+chiave)%26+'a';
			} else newLetter = parola[i]+chiave;
		} else if (parola[i] >= 'A' && parola[i] <= 'Z') {
			if (parola[i]-'A'+chiave>25) {
				newLetter = (parola[i]-'A'+chiave)%26+'A';
			} else newLetter = parola[i]+chiave;
			
		} else {
			newLetter = '?';
		}
		output[i] = newLetter;
	}
		output[i] = '\n';
}

void decrypt(char parola [], int chiave) {
	int i;
	for (i = 0; i < 100 && parola[i]!='\0'; i++) {
		char newLetter;
		if (parola[i] >= 'a' && parola[i] <= 'z') {
			if (parola[i]-'a'-chiave<0) {
				newLetter = (parola[i]-'a'-chiave)%26+'a';
			} else newLetter = parola[i]-chiave;
		} else if (parola[i] >= 'A' && parola[i] <= 'Z') {
			if (parola[i]-'A'-chiave>0) {
				newLetter = (parola[i]-'A'-chiave)%26+'A';
			} else newLetter = parola[i]-chiave;
			
		} else {
			newLetter = '?';
		}
		output[i] = newLetter;
	}
		output[i] = '\n';
}
