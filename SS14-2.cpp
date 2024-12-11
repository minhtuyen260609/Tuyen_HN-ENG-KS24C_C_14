#include<stdio.h>
#include<string.h>
int main(){ 
	char word[]={"Hello"};
	for(int i=0; i<sizeof(word)/sizeof(char); i++){
		printf("%c ", word[i]); 
	} 
	return 0; 
} 
