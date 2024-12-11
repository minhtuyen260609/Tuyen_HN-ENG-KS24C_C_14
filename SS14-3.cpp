#include<stdio.h>
#include<string.h>
int main(){
	int i, j, temp; 
	char str[]={"Hello"};	
	int length=sizeof(str)/sizeof(str[0]);
	j = length-1; 
	for(i=0;i<length/2;i++){
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		--j; 
	}
	for(i=0;i<length;i++){
		printf("%c", str[i]);
	} 
	return 0; 
} 
