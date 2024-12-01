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


  return 0;

}


