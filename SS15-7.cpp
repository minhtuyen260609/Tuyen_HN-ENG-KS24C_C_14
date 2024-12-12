#include<stdio.h>
#include<string.h>
int main(){
	int i, word=0, number=0, special=0, length;
	char str[100];
	printf("Moi nhap chuoi bat ki: "); 
	fgets(str, 100, stdin); 
	length=strlen(str);
	for(i=0;i<length;i++){
		if(str[i]>=97&&str[i]<=122||str[i]>=65&&str[i]<=90){
			word+=1; 
		}else if(str[i]>47&&str[i]<58){
			number+=1; 
		}else{
			special+=1; 
		} 
	} 
	printf("so ky tu la: %d\n", word);
	printf("so chu so la: %d\n", number);
	printf("so ky tu dac biet la: %d\n", special-1);
	return 0; 
} 
