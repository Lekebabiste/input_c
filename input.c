#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char * readInput(){
	char * buff = calloc(2, sizeof(char)); 
	size_t len = 2;
	char * tpr;	
	char ch;
	while( (ch = (char) getchar()) != '\n'){
		buff[len - 2] = ch;
		len++;
		tpr = buff;
		buff = (char *) realloc(buff, len * sizeof(char));
		if (buff == NULL){ 
			free(tpr);
			return NULL;	
		}
	}
	buff[len - 1] = 0x00;
	return buff; 
	
}
int main(){
	printf("Enter string > ");
	char * str = readInput();
	puts(str);
	free(str);
	return 0;
}
