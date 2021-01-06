#include <stdio.h>
#include "txtfind.h"

int main() {
	char fl[LINE] , word[WORD];
	char letter;
	char *flp = fl;
	char *wordp = word;
	scanf("%[^\n]s", fl);
	while (*flp != ' ') {
		*(wordp++) = *(flp);
	}
	letter = *(++flp);
	*wordp = '\0';
	scanf("%s", fl);
	if (letter == 'a')
	print_lines(word);
	if(letter == 'b'){
		print_similar_words(word);
	}
}

