#include <stdio.h>
#include "txtfind.h"

int main() {
	char fl[LINE] , word[WORD];
	char letter;
	char* flp = fl;
	char* wordp = word;
	//save the first word
	scanf("%s",word);
	//scan all the text 
	scanf("%[^\n]s", fl);
	while (*flp != ' ' && *flp != '\n' && *flp != 't') {
		*(wordp++) = *(flp++);
		
	}
	
	letter = *(++flp);
	wordp = '\0';	
	scanf("%s",fl);
	
	if (letter == 'a'){
		print_lines(word);
	}else {
		print_similar_words(word);
	}
}

