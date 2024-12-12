#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	char str[100];
	printf("Enter string :");
	fgets(str,100,stdin);
	str[strcspn(str,"\0")]='\0';
		int new_word=1;
	for(int i=0;i<strlen(str);i++){
		if(isspace(str[i])){//kiem tra dau cach
			new_word=1;
		}
		else if(new_word){
			str[i]=toupper(str[i]);//viet in hoa
			new_word=0;
		}
		else {
			str[i]=tolower(str[i]);//viet thuong
		}
	}
	printf("%s",str);;
	return 0; 
}
