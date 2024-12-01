#include<stdio.h>
int main()
{
	printf("umar  ali\n") ;
	int x=2;
	int y=3;
	int umar=x+y;
	
	printf("youR value is:%d",umar);

printf("the sum of two numbers is: %d \n" , umar);
   int x;
    int y;
    int u; // for sum
    int m; // for difference
    int a; // for product
    int r; // for division

    printf("Give the value of x: \n");
    scanf("%d", &x);

    printf("Give the value of y: \n");
    scanf("%d", &y);

    u = x + y;
   printf("The sum of the two numbers is: %d\n", u);*/
    int x,y,u,m,a;
    float rf;
    printf("enter the amount of x: \n");
    scanf("%d",&x);
    printf("enter the amount of y: \n");
    scanf("%d",&y);
    u=x+y;
    printf("adding is equal to : %d \n", u);
    m=x-y;
   printf("subtriction is equal to: %d \n" ,m);
    a=x*y;
    printf("multiplication is equal to: %d \n",a);
    rf=x/y;
    printf("division is equal to: %f",rf);
float f;
f=3.14;
printf("the value of f is : %d",f);
  find the area of square
  float side;
  printf("give the value of one side of square: \n");
  scanf("%f",&side);
    printf("area is: %f \n",side*side);
    printf("area is: %f",side+side);
int number;

printf("enter the number:\n");
scanf("%d",&number);
if(number>=10){
	printf("you are over 50");
}
    else{
    	printf("you are ");
	}
	return 0;
}
#include<stdio.h>
int main(){
//int jy,cy,ex,sa;
//	printf("enter the joining year:");
//	scanf("%d",&jy);
//	printf("enter the current year: ");
//	scanf("%d",&cy);
//
//	ex=cy-jy;
//	printf("your experience is %d \n",ex);
//	if(ex>3){
//		printf("your are eligibel of bonus, we will add bonus in your salery \n");
//			printf("enter your salery:");
//	scanf("%d",&sa);
//		printf("your old salery was %d \n",sa);
//		printf("your new salery is : %d",sa+2500);
//	}
//	else{
//		printf("your are not eligible");
//	}
////////////////////////////////////////////////////////////////////////////////////////////////
//           char ch;
//		   printf("enter any character \n");
//		   scanf("%c",&ch); 
//           if(ch>='a' && ch<='z'){
//           	printf("your entered the small alphabet \n");
//           	printf("now we will show you small letter in capital\n");
//           	int u=ch-32;
//           	printf("your capital letter is:%c\n",u);
//           	if(ch=='a'||ch=='i'||ch=='o'||ch=='u'||ch=='s'){
//           		printf("you enter the vowel");
//			   }
//			   else{
//			   	printf("your entered alphabet is consonent \n");
//			   }
//		   }
//		   else if(ch>='A'&& ch<='Z'){
//		   	printf("you entered the capital alphabet \n");
//		   		printf("now we will show your capital letter in small \n");
//           	int u=ch+32;
//           		printf("your capital letter is:%c \n",u);
//           		 	if(ch=='A'||ch=='I'||ch=='O'||ch=='U'||ch=='S'){
//           		printf("you enter the vowel");
//			   }
//			   else{
//			   	printf("your entered alphabet is consonent \n");
//			   }
//		   }
//		   else if(ch>='1' && ch<='9'){
//		   	printf("you entered the digit \n");
//		   }
////////////////////////////////////////////////////////////////////////////////////////
//		   int num;
//		   printf("enter any number:");
//		   scanf("%d",&num);
//		   num%2==0?printf("even"):printf("odd");
/////////////////////////////////////////////////////////////////////////////////////////
//	int num;
//	printf("enter any number:");
//	scanf("%d",&num);
//	num>=0?printf("your number is positive"):printf("your number is negtive");
/////////////////////////////////////////////////////////////////////////////////////
//  currency program
//int num;
//printf("enter the number ");
//scanf("%d",&num);
//int u=num/1000;
//num=num%1000;
//
//int m=num/100;
//num=num%100;
//
//int a=num/50;
//num=num%50;
//
//int r=num/10;
//printf("the note of 1000=%d \n",u);
//printf("the note of 100=%d \n",m);
//printf("the note of 50=%d \n",a);
//printf("the note of 10=%d \n",r);
///////////////////////////////////////////////////////////
// the program in which we add 1 in every digit and 9 becomes 0
//int num;
//printf("enter the number");
//scanf("%d",&num);
//int u=num/10000;
//num=num%10000;
//
//int m=num/1000;
//num=num%1000;
//
//int a=num/100;
//num=num%100;
//
//int r=num/10;
//num=num%10;
//
//
//int l=num%10;
//
//    u = (u + 1) % 10;
//    m = (m + 1) % 10;
//    a = (a + 1) % 10;
//    r = (r + 1) % 10;
//    l = (l + 1) % 10;
//
//    int f = (u * 10000) + (m * 1000) + (a * 100) + (r * 10) + l;
//    printf("%d\n", f);
/////////////////////////////////////////////////////
//  int month;
//  int days;
//
//  printf("Enter month: ");
//  scanf("%d", & month);
//
//  switch (month) {
//  case 4:
//  case 6:
//  case 9:
//  case 11:
//    days = 30;
//    break;
//  case 1:
//  case 3:
//  case 5:
//  case 7:
//  case 8:
//  case 10:
//  case 12:
//    days = 31;
//    break;
//
//  case 2:
//    days = 28;
//    break;
//
//  default:
//    days = 0;
//    break;
//  }
//
//  if (days)
//    printf("Number of days in %d month is: %d\n", month, days);
//  else
//    printf("You have entered an invalid month!!!\n");
//////////////////////////////////////////////////////////////////
//int num;
//printf("enter the number");
//scanf("%d",&num);
//int count=1;
//start:
//	printf("%d",count);
//	count++;
//	 if(count<=num)
//	 goto start;
	 
	 ////////////////////////////
//	 int num;
//printf("enter the number");
//scanf("%d",&num);
//int count=num;
//start:
//	printf("%d,",count);
//	count--;
//	if(count>=1){
//		goto start;
//	}
////////////////////////////////////////////
// table using goto statement
//int t,r,count;
//printf("enter the digit which table  you want: ");
//scanf("%d",&t);
//count=1;
//start:
//	if(count<=10){
//		r=t*count;
//		printf("%d*%d=%d\n",t,count,r);
//		count++;
//		goto start;
//	}
//////////////////////////////////////
// print 10 times name using goto statement
// we use fgets to show spaces in output
//char name[50];
//int count;
//printf("enter the name: ");
//fgets(name,sizeof(name),stdin);
//count=1;
//start:
//	printf("you name is: %s \n",name);
//	count++;
//	if(count<=10){
//		goto start;
//	}
//	
//Program to print Square and Cube of all numbers from 1 to N using goto in C
//	int num; 
//	int count=1;
//	printf("enter the number");
//	scanf("%d",&num);
//	start:
//		printf("num=%4d, square=%4d ,cube=%4d \n",count,(count*count),(count*count*count));
//	count++;
//	if(count<=num){
//		goto start;
//	}
	//////////////////////////////////////////////////////
//	int count='A';
//	start:
//		printf("%c[%d]\n",count,count);
//		count++;
//		if(count<='Z'){
//			goto start;
//		}
//	////////////////////////////////////////

//  //loop counter declaration
//  int number;
//  //variable to store limit /N
//  int n;
//
//  //assign initial value 
//  //from where we want to print the numbers
//  number = 1;
//
//  //input value of N
//  printf("Enter the value of N: ");
//  scanf("%d", & n);
//
//  //print statement
//  printf("Odd Numbers from 1 to %d:\n", n);
//
//  //while loop, that will print numbers 
//  while (number <= n) {
//    //Here is the condition to check ODD number
//    if (number % 2 != 0)
//      printf("%d ", number);
//
//    // increasing loop counter by 1
//    number++;
//  }
///////////////////////////////////////////////////////////	
//int index=1;
//while(index<=10){
//	if(index==5 || index==6){
//		index++;
//		continue;
//	}
//	printf("%d",index);
//	index++;
//}

//find first even number and print it
//int num;
//while(1){
//	printf("enter the number: ");
//	scanf("%d",&num);
//	if(num%2==0){
//			printf("you entered the even number %d",num);
//		break;
//	}
//
//}
////////////////////////////////////////////////////////
//negtive,positive numbers
//int i;
//int num;
//   for(i = 1; i <= 10; i++) {
//        printf("Enter number %d: ", i);
//        scanf("%d", &num);
//
//        // Check if the number is positive, negative, even, or odd
//        if (num > 0) {
//            printf("The number %d is Positive", num);
//        } else if (num < 0) {
//            printf("The number %d is Negative", num);
//        } else {
//            printf("The number %d is Zero", num);
//        }
//
//        // Check if the number is even or odd
//        if (num % 2 == 0) {
//            printf(" and Even.\n");
//        } else {
//            printf(" and Odd.\n");
//        }
//    }
//int num;
//while(1){
//	printf("enter the number ");
//	scanf("%d",&num);
//	if(num%2==1){
//		continue;
//	}
//	else{
//		if(num==0){
//			break;
//		}
//printf("%d",num);
//	}
//}
/////////////////////////////////////////////////////
//int num;
//while(1) {
//        printf("Enter the number: ");
//        scanf("%d", &num);
//
//        if (num % 2 == 1) {
//            continue;  // Skip odd numbers
//        }
//        else {
//            if (num == 0) {
//                break;  // Exit the loop if the number is 0
//            }
//            printf("%d\n", num);  // Print the even number
//        }
//    }
#include<stdio.h>
int main(){
	char c,u;
	printf("enter you capital letter \n");
	scanf("%c",&c);
	u=c+32;
	printf("your small letter is:%c",u);
	
	
	return 0;
}
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


  return 0;

}
#include<stdio.h>
#include<conio.h>
int main(){
	
	printf("------------------------program1--------------------------------------\n");
//	float f;
//	printf("enter the float number:");
//	scanf("%f",&f);
//	int u=f;
//	printf("whole part is:%d\n",u);
//	float y=f-u;
//	printf("fractional part is:%.4f",y);
	printf("------------------------program2--------------------------------------\n");
//	
//	int a,b,tem=0;
//	printf("enter the value of a:");
//	scanf("%d",&a);
//	printf("enter the  value of b:");
//	scanf("%d",&b);
//	
//	tem=a;
//	a=b;
//	b=tem;
//	printf("after swapping value of a is: %d\n",a);
//	printf("after swapping value of b is: %d",b);
		printf("------------------------program3--------------------------------------\n");
//	int a,b;
//	printf("enter the value of a:");
//	scanf("%d",&a);
//	printf("enter the value of b:");
//	scanf("%d",&b);
//	a=a+b;
//	b=a-b;
//	a=a-b;
//	printf("after swapping value of a:%d\n",a);
//	printf("after swapping value of b:%d\n",b);

	printf("------------------------program4--------------------------------------\n");

//int num;
//printf("enter the number:");
//scanf("%d",&num);
// int u=num%10;
// num=num/10;
// int m=num%10;
// num=num/10;
// int a=num%10;
// num=num/10;
// int r=num%10;
// num=num/10;
// int l=num%10;
// num=num/10;
// printf("sum of digits is:%d",u+m+a+r+l);
 
printf("------------------------program5--------------------------------------\n");

//int rem,rev=0,num;
//printf("enter the number:");
//scanf("%d",&num);
//while(num!=0){
//	rem=num%10;
//	rev=rev*10+rem;
//	num=num/10;
//	
//}
//printf("reverse of number is:%d",rev);

// another program of reverse a number

//int num;
//printf("enter the number:");
//scanf("%d",num);
//int u=num%10000;
//num=num/10000;
//int m=num%1000;
//num=num/1000;
//
//int a=num%100;
//num=num/100;
//
//
//int r=num%10;
//num=num/10;
//int rev=r*10000+a*1000+m*100+u*10;
//printf("your reverse value is:%d",rev);
printf("-----------------program of even odd---------------\n");
//int c;
//printf("enter the number");
//scanf("%d",&c);
//if(c%2==0){
//	printf("%d is even",c);
//}
//else{
//	printf("%d is odd",c);
//}
printf("-----------------vovel and constant---------------\n");
//char c;
//printf("enter any character:");
//scanf("%c",&c);
//if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
//	printf("you entered the vovel");
//}
//else{
//	printf("you entered the constant");
//}
printf("-----------------positive and negtive---------------\n");
//int x;
//printf("enter any number:");
//scanf("%d",&x);
//if(x>0){
//	printf("your entered the positive digit");
//}
//else{
//	printf("you entered the negtive digit");
//}
printf("-----------------scholarship---------------\n");
//float marks,nts;
//printf("your your fsc marks:");
//scanf("%f",&marks);
//printf("your your nts marks:");
//scanf("%f",&nts);
//if(marks>=80||nts>=80){
//	printf("you are eligible");
//}
//else{
//	printf("you are not eligible");
//}
////////////////////////////////////////////////////
int num;
printf("enter the number of missiles whose iran striked on israel:");
scanf("%d",&num);
if(num<100){
	printf("israel can servive");
}
else if(num>100)
{
	printf("israel can,t survive");
}
else{
	printf("kindly enter any number");
}
	return 0;
}

/////////////////////
#include<stdio.h>
#include<conio.h>
int main(){
	
	printf("------------------------program1--------------------------------------\n");
//	float f;
//	printf("enter the float number:");
//	scanf("%f",&f);
//	int u=f;
//	printf("whole part is:%d\n",u);
//	float y=f-u;
//	printf("fractional part is:%.4f",y);
	printf("------------------------program2--------------------------------------\n");
//	
//	int a,b,tem=0;
//	printf("enter the value of a:");
//	scanf("%d",&a);
//	printf("enter the  value of b:");
//	scanf("%d",&b);
//	
//	tem=a;
//	a=b;
//	b=tem;
//	printf("after swapping value of a is: %d\n",a);
//	printf("after swapping value of b is: %d",b);
		printf("------------------------program3--------------------------------------\n");
//	int a,b;
//	printf("enter the value of a:");
//	scanf("%d",&a);
//	printf("enter the value of b:");
//	scanf("%d",&b);
//	a=a+b;
//	b=a-b;
//	a=a-b;
//	printf("after swapping value of a:%d\n",a);
//	printf("after swapping value of b:%d\n",b);

	printf("------------------------program4--------------------------------------\n");

//int num;
//printf("enter the number:");
//scanf("%d",&num);
// int u=num%10;
// num=num/10;
// int m=num%10;
// num=num/10;
// int a=num%10;
// num=num/10;
// int r=num%10;
// num=num/10;
// int l=num%10;
// num=num/10;
// printf("sum of digits is:%d",u+m+a+r+l);
 
printf("------------------------program5--------------------------------------\n");

//int rem,rev=0,num;
//printf("enter the number:");
//scanf("%d",&num);
//while(num!=0){
//	rem=num%10;
//	rev=rev*10+rem;
//	num=num/10;
//	
//}
//printf("reverse of number is:%d",rev);

// another program of reverse a number

//int num;
//printf("enter the number:");
//scanf("%d",num);
//int u=num%10000;
//num=num/10000;
//int m=num%1000;
//num=num/1000;
//
//int a=num%100;
//num=num/100;
//
//
//int r=num%10;
//num=num/10;
//int rev=r*10000+a*1000+m*100+u*10;
//printf("your reverse value is:%d",rev);
printf("-----------------program of even odd---------------\n");
//int c;
//printf("enter the number");
//scanf("%d",&c);
//if(c%2==0){
//	printf("%d is even",c);
//}
//else{
//	printf("%d is odd",c);
//}
printf("-----------------vovel and constant---------------\n");
//char c;
//printf("enter any character:");
//scanf("%c",&c);
//if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
//	printf("you entered the vovel");
//}
//else{
//	printf("you entered the constant");
//}
printf("-----------------positive and negtive---------------\n");
//int x;
//printf("enter any number:");
//scanf("%d",&x);
//if(x>0){
//	printf("your entered the positive digit");
//}
//else{
//	printf("you entered the negtive digit");
//}
printf("-----------------scholarship---------------\n");
//float marks,nts;
//printf("your your fsc marks:");
//scanf("%f",&marks);
//printf("your your nts marks:");
//scanf("%f",&nts);
//if(marks>=80||nts>=80){
//	printf("you are eligible");
//}
//else{
//	printf("you are not eligible");
//}

int num;
printf("enter the number of missiles whose iran striked on israel:");
scanf("%d",&num);
if(num<100){
	printf("israel can servive");
}
else if(num>100)
{
	printf("israel can,t survive");
}
else{
	printf("kindly enter any number");
}
	return 0;
}

