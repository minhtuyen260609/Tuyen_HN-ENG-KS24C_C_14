#include<stdio.h>
#include<string.h>
int main(){
	int i, temp, count=0; 
	char str[]={"Hello"};	
	int length=sizeof(str)/sizeof(str[0]);
	printf("Moi nhap mot ki tu bat ki: "); 
	scanf("%c", &temp);
	for(i=0;i<length;i++){
		if(temp==str[i]){
			count+=1; 
		} 
	}
	printf("Ki tu xuat hien %d lan trong chuoi: ", count); 
	return 0; 
} 
