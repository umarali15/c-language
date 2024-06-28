#include<stdio.h>
int main(){
//	(for flotint product)
//	float a,b,sum;
//	printf("enter the value of a \n ");
//	scanf("%f ",&a);
//		printf("enter the value of b  \n");
//	scanf("%f ",&b);
//	sum=a*b;
//	printf("you product is: %2f ",sum);
//	
	
	//(for ascii value)
//	char ch;
//	printf("enter the character:\n");
//	scanf("%c",&ch);
//	printf("the ascii value of character  is %c=%d",ch,ch);
//	
	
	
	
//	 char ch;
//
// printf(“Enter a character: “);
//
// scanf(“%c”, &ch);
//
// printf(“ASCII value of %c = %d\n”, ch, ch);
//	
	//(for digit to character)
//	int a;
//	printf("enter the number: \n");
//	scanf("%d",&a);
//	printf("you value is %d=%c",a,a);
	//(swapping)
//	int x,y,z;
//	printf("enter the value of x:\n",x);
//	scanf("%d",&x);
//		printf("enter the value of y:\n",x);
//	scanf("%d",&y);
//	z=x;
//	x=y;
//	y=z;
//	printf("the value of x after swapping:%d\n",x);
//	printf("the value of y after swapping:%d\n",y);
// size of data types
//printf("size of float:%d \n",sizeof(float));
//printf("size of int:%d\n",sizeof(int));
//
//printf("size of char:%d\n",sizeof(char));
//printf("size of double:%d\n",sizeof(double));
// C Program to Check Whether a Number is Positive, Negative, or Zero

//---------------------------------------------------------
//int num;
//printf("enter the number:\n");
//scanf("%d",&num);
//if(num>0){
//	printf("your integer is positive \n");
//	
//}
//else if(num<0){
//	printf("your integer is negtive \n");
//	
//}
//else{
//	printf("zero");
//}
//
//
// ------------------------------------------------------
//int num;
//printf("enter the number:\n");
//scanf("%d",&num);
//if(num%2==0){
//	printf("your number is even");
//}
//else
//printf("your number is odd");
//-----------------------------------
//program for sum of natural numbers
//int x,i;
//int u=0;
//printf("enter the number:\n");
//scanf("%d",x);
//for(int i=1;i<=x;i++){
//	
//	u+=i;
//
//}
//
//printf("the sum of numbers is %d:%d",x,u);
//--------------------------------------------
// int x, i;
//    int u = 0;
//    printf("Enter the number:\n");
//    scanf("%d", &x);  // Pass x by reference
//    for (i = 1; i <= x; i++) {
//        u += i;
//    }
//    printf("The sum of numbers up to %d is: %d\n", x, u);

//----------------------------------------------------------
//int x;
//char ch;
//printf("enter the number:\n");
//scanf("%d",&x);
//printf("your value %d is:%c",x,x);
//-------------------------------------------------------------
 char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    printf("\n");
    if(ch>=65 && ch<90)
        printf("%c", ch+1);
    else if(ch>=97 && ch<122)
        printf("%c", ch+1);
    else if(ch==90)
        printf("%c", 65);
    else if(ch==122)
        printf("%c", 122);
    else
        printf("%c", ch);
   
	return 0;
}
