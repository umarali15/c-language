#include<stdio.h>
#include<conio.h>
int main(){
	char c;
	printf("ENTER ANY CHARACTER \n");
	scanf("%c",&c);
	if((c>='a'&&c<='z') ||(c>='A'&&c<='Z')){
		printf("'%c' IS AN ALPHABET",c);
	}
	else if(c>='0'&&c<='9'){
		printf("'%c' IS A DIGIT",c);
	}
	else{
		printf("'%c' IS A SPECIAL SYMBOL",c);
	}
	
	return 0;
}
