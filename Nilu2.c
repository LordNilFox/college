#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define EMPTY 		0
#define NOT_EMPTY 	1

int check(char *str) {
	for (int i = 0; i < strlen(str); i++) {
		if ((str[i] != '\n') && (str[i] != ' ') && (str[i] != '\t')) {
			return NOT_EMPTY;
		}
	}
	return EMPTY; 
}

int main(int argc, char const *argv[])
{
	FILE *f = fopen("input.txt", "r+");
	char str[255];
	int empty_count = 0;

	memset(&str, 0, sizeof(str));

	while (!feof(f)) {
		fgets(str, 255, f);
		if (check(str) == EMPTY)
			empty_count++;
	}
	printf("Empty strings = %d\n", empty_count);
	fclose(f);
	return 0;
}