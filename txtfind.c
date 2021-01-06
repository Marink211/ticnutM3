#include <stdio.h>
#include <string.h>
#include "txtfind.h"


int substring( char * str1, char * str2){
	char *m = strstr(str1,str2);
	if(m == NULL){
		return 0 ; 
	}else{
		return 1 ; 
	}
}

int length(char *s){
	int count = 0 ; 
	while(*(s+count) != '\0' ){
		count++;
	}
	return count;
}

int similar (char *s,char  *t, int n){
	int ls = length(s);
	int lt = length(t);
	int count = 0 ; 
	if(substring(s,t)!=1)return 0;
	if(lt-ls < 0 ) return 0;
	while(*s != '\0' && *t !='\0'){
			if(*s != *t){
				s++;
				count++;
				ls--;
			}else{
				s++;
				t++;
				ls--;
				lt--; 
			}
	}
	if(count > 1 ) return 0; 
	if(ls!= 0 || lt != 0 ) return 0 ;
	return 1 ;															}
	

void print_lines(char * str){
	char text [LINE];
	while(scanf("%[^\n]%*c" ,text) != EOF){
		if(substring(text,str)){
			printf("%s\n",text);
		}
						

	}
}
void print_similar_words(char * str){
	char text[LINE] ;
	while(scanf("%s" , text) != EOF){
		if(similar(text,str,1) || substring(text,str)){
			printf("%s\n" ,text);
		}
							}
}



