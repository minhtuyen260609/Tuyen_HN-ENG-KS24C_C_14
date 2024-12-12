#include<stdio.h>
#include<string.h>
int main(){
 	char str[100];
 	printf("Moi nhap chuoi :");
 	fgets(str,100,stdin);
 	str[strcspn(str,"\n")]='\0';
 		size_t len=strlen(str);
	int index=0;
	for(int i=0;i<len;i++){
		if(str[i]>=65&&str[i]<=122){
			index+=1;
		}
	}
	printf("So ki tu : %d",index);
}
