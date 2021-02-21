#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void AskName(void) {
	unsigned int max_length = 128;
	unsigned int current_length = 0;

	char* string = malloc(max_length);
	current_length = max_length;

	if (string == NULL) return -1;

	printf("Enter a string: \n");

	int c = EOF;
	unsigned int i = 0;//index

	while ((c = getchar()) != '\n' && c != EOF) {
		string[i++] = (char)c;
		printf("%d", i);
		if (i == current_length) {
			current_length = i + max_length;
			string = realloc(string, current_length);
		}
	}
	string[i] = '\0';
	printf("%s", string);
	free(string);
	string = NULL;
}

int main() {
	int array[5] = { 1, 2, 3, 4, 5 };
	/*printf("%d", sizeof(array) / sizeof(array[0]));*/ //size of the complete array is all the types bytes summed up, so if an integer is 4 bytes and there is 5 int elements, sizeof(array) will return 20 bytes
	AskName();
	/*char* c = malloc(10);
	int i = 0;*/
	/*c[1] = 'b';
	c[0] = 'a';
	c[0] = 't';
	printf(c);
	free(c);*/
	/*while (c != EOF && c != '\n') {
		printf("%c", c[i++]);
	}*/
}