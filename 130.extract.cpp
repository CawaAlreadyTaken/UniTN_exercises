#include "130.extract.h"

int extract(char * str, int counter, int iterator) {
	if (counter == 81 || str[counter] == '\0') {
		return iterator;
	}
	if (str[counter] >= 'A' && str[counter] <= 'Z') {
		str[iterator] = str[counter];
		iterator++;
	}
	return extract(str, counter+1, iterator);
}
