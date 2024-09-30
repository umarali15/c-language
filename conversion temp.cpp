#include<stdio.h>
#include<conio.h>
int main(){
	int f;
	float c;
	printf("FARENHITE\tCELCIUS\n");
	for(f=50;f<=100;f=f+5){
		c=5.0/9.0*(f-32);
	printf("%7d\t\t%6.02f\n",f,c);
	}
	return 0;
}
