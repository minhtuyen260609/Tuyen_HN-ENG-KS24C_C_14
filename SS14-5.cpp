#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	printf("Moi nhap chuoi:");
	fgets(str,100,stdin);
	str[strcspn(str,"\n")]=' ';
		size_t len=strlen(str);
	int count=0;
	for(int i=0;i<len;i++){
		if(str[i]!=' '&&(i==0||str[i-1]==' ')){
			count+=1;
		}
	}
	printf("so tu : %d",count);
}
