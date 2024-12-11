#include<stdio.h>
#include<string.h>
int main(){
	char word[100];
	printf("Moi nhap vao chuoi ki tu bat ki: ");
	fgets(word, 100, stdin);
	printf("Chuoi ki tu vua nhap la: %s ", word); 
	return 0; 
} 
