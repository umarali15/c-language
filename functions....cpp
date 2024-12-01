////////////////////factorial of number//////////////////////////////
//#include<stdio.h>
//int fact(int n){
//	int res=1;
//	for(int i=1;i<=n;i++){
//		res=res*i;
//	}
//	return res;
//}
//int main(){
//	int num;
//	printf("enter the number\n");
//	scanf("%d",&num);
//	if(num<0){
//		printf("factorial of negtive number does not exist. Thanks\n");
//		
//	}
//	else{
//		printf("factorial of %d is %d",num,fact(num));
//	}
//	return 0;
//}
//////////////////////////////prime number//////////////////////////////
//#include<stdio.h>
//int prime(int n){
//	if(n<=1){
//		return 0;
//	}
//	for(int i=2;i*i<=n;i++){
//		if(n%i==0){
//			return 0;
//		}
//	}
//	return 1;
//}
//int main(){
//	int num;
//	printf("enter any number:\n");
//	scanf("%d",&num);
//	if(prime(num)){
//		printf("your given nymber is prime \n");
//	}
//	else{
//		printf("your number is not prime");
//	}
//	return 0;
//}
//////////////////////////////larger from 2//////////////////////////
//#include<stdio.h>
//int lar(int x, int y){
//	if(x>y){
//		return x;
//	}
//	else{
//		return y;
//	}
//}
//int main(){
//	int num1,num2;
//	printf("enter the 1st number:");
//	scanf("%d",&num1);
//		printf("enter the 2nd number:");
//	scanf("%d",&num2);
//	int res=lar(num1,num2);
//	printf("the larger number is:%d",res);
//}
//////////////////////////// palindrome string//////////////////////////
//#include<stdio.h>
//int palin(int n){
//	int rev=0,rem,ori=n;
//	while(n!=0){
//		rem=n%10;
//		rev=rev*10+rem;
//		n=n/10;
//	}
//	if(ori==rev){
//		return 1;
//	}
//	else{
//		return 0;
//	}
//}
//int main(){
//	int num;
//	printf("kinldy enter any nymber:\n");
//	scanf("%d",&num);
//	if(palin(num)){
//		printf("your number %d is palindrome",num);
//	}
//	else{
//		printf("your number is not palindrome. Thanks");
//	}
//	
//}
////////////////////////power//////////////////////////
//#include<stdio.h>
//int pow(int x,int y){
//	int re=1;
//	for(int i=1;i<=y;i++){
//		re*=x;
//	}
//	return re;
//}
//int main(){
//	int base,exp;
//	printf("enter the base\t");
//	scanf("%d", &base);
//	printf("enter the exponent\t");
//	scanf("%d", &exp);
//	printf("your answer is:%d",pow(base,exp));
//}
//////////////////////////////temperature//////////////////////////
//#include<stdio.h>
//int con(int tem,char scale){
//	if(scale=='c'||scale=='C'){
//		int u=(tem-32)*5/9;
//		return u;
//	}
//	else if(scale=='f'||scale=='F'){
//		int t=(tem*9/5)+32;
//		return t;
//	}
//	
//}
//int main(){
//	int tem;
//	char scale;
//	printf("enter the temperature:");
//	scanf("%d", &tem);
//	printf("enter the scale:");
//	scanf(" %c", &scale);
//	int m=con(tem,scale);
//	if(scale=='c'||scale=='C'||scale=='f'||scale=='F'){
//		printf("your conversion is:%d",m);
//	}
//
//
//}
	
/////////////////////////////////gcd//////////////////////////////
//#include<stdio.h>
//int gcd(int x,int y){
//int	gcd=1;
//	for(int i=1;i<=x && i<=y;i++){
//		if(x%i==0 && y%i==0){
//			gcd=i;
//		
//		}
//		
//	}
//		return gcd;
//	
//}
//int main(){
//	int h,j;
//	printf("enter the first number:");
//	scanf("%d",&h);
//	printf("enter the second number number:");
//	scanf("%d",&j);
//	int g=gcd(h,j);
//	printf("gcd=%d",g);
//	return 0;
//}
//////////////////////////////sum of digits//////////////////////////////
//#include<stdio.h>
//int sum(int x){
//	if(x<0){
//		printf("kindly enter the positive number,THANKS");
//	}
//	else{
//		int sum=0,rem;
//		while(x!=0){
//			rem=x%10;
//			sum=sum+rem;
//			x=x/10;
//		}
//			return sum;
//	}
//
//}
//int main(){
//	int num;
//	printf("kindly enter any number:");
//	scanf("%d",&num);
//	int g=sum(num);
//	printf("the sum of your number is %d",g);
//}
/////////////////////////////////////armstrong////////////////////////
//#include <stdio.h>
//#include <math.h>
//
//// Function to check if the number is an Armstrong number
//int isArmstrong(int num) {
//    int originalNum = num;
//    int sum = 0;
//    int count = 0;
//    
//    // Find the number of digits in the number
//    while (num != 0) {
//        num /= 10;
//        count++;
//    }
//    
//    num = originalNum; // Restore the original number
//    
//    // Calculate the sum of each digit raised to the power of the number of digits
//    while (num != 0) {
//        int digit = num % 10;
//        sum += pow(digit, count);
//        num /= 10;
//    }
//    
//    // If the sum is equal to the original number, it's an Armstrong number
//    if (sum == originalNum)
//        return 1;
//    else
//        return 0;
//}
//
//int main() {
//    int number;
//    
//    // Input the number
//    printf("Enter a number: ");
//    scanf("%d", &number);
//    
//    // Check if the number is an Armstrong number
//    if (isArmstrong(number)) {
//        printf("%d is an Armstrong number.\n", number);
//    } else {
//        printf("%d is not an Armstrong number.\n", number);
//    }
//    
//    return 0;
//}
////////////////////////////////////swapping\\\\\\\\\\\\\\\\\\\\\\\\\\\
#include <stdio.h>

// Function to swap two integers using pass-by-reference
//void swap(int *a, int *b) {
//    int temp;
//    temp = *a;   // Store the value at address a in temp
//    *a = *b;     // Assign the value at address b to address a
//    *b = temp;   // Assign the value stored in temp to address b

//
////int main() {
////    int x, y;
////
////    // Input two integers
////    printf("Enter the first integer:");
////    scanf("%d", &x);
////    printf("Enter the second integer: ");
////    scanf("%d", &y);
////
////    // Print values before swapping
////    printf("Before swapping: x = %d, y = %d\n", x, y);
////
////    // Call swap function, passing addresses of x and y
////    swap(&x, &y);
////
////    // Print values after swapping
////    printf("After swapping: x = %d, y = %d\n", x, y);
////
////    return 0;
////}
//////////////////////////sign conversion///////////////////////////
////#include<stdio.h>
////int main(){
////	int x=3,y=5;
////	int *ptr1=&x;
////	int *ptr2=&y;
////	printf("address of x is %d",&x);
////	
////	return 0;
///////////////////////////////
////#include<stdio.h>
////int num(int x){
////	return -(x);
////}
////int main(){
////	int u;
////	printf("enter any number:");
////	scanf("%d",&u);
////	printf("before sign change your value is:%d\n",u);
////	int change=num(u);
////	printf("after sign conversion your value is:%d",change);
////	return 0;
////}
///////////////////////////////upper and lower///////////////////
//#include <stdio.h>
//
//// Function to change the case of the character (uppercase to lowercase or vice versa)
////void toggleCase(char *ch) {
////    if (*ch >= 'a' && *ch <= 'z') {
////        *ch = *ch - 32;  // Convert to uppercase if the character is lowercase
////    } else if (*ch >= 'A' && *ch <= 'Z') {
////        *ch = *ch + 32;  // Convert to lowercase if the character is uppercase
////    }
////}
////
////int main() {
////    char c;
////
////    // Input a character
////    printf("Enter a character: ");
////    scanf("%c", &c);
////
////    // Call the toggleCase function to change the case of the character
////    toggleCase(&c);
////
////    // Print the character after case conversion
////    printf("After case conversion: %c\n", c);
////
////    return 0;
////}
//#include<stdio.h>
//int prime(int x) {
//    int count = 0; 
//    if (x <= 1) { 
//        return 0; 
//    }
//
//   
//    for (int i = 1; i <= x; i++) {
//        if (x % i == 0) {
//            count++;
//        }
//    }
//
//    if (count == 2) {
//        return 1; 
//    } else {
//        return 0; 
//    }
//}
//	int main(){
//		int num;
//		printf("enter any number:\n");
//		scanf("%d",&num);
//	if(prime(num)){
//		printf("your number is prime.");
//	}
//	else{
//		printf("your number is not prime");
//	}
//		return 0;
//	}
//	
//////////////////////////////////////conversion/////////////////////
#include<stdio.h>

// Function for temperature conversion
int con(int tem, char scale) {
    if (scale == 'c' || scale == 'C') {
        int u = (tem - 32) * 5 / 9; // Fahrenheit to Celsius
        return u;
    } else if (scale == 'f' || scale == 'F') {
        int t = (tem * 9 / 5) + 32; // Celsius to Fahrenheit
        return t;
    } else {
        return -9999; // Invalid input flag
    }
}

int main() {
    int tem;
    char scale;

    // Input temperature and scale
    printf("Enter the temperature: ");
    scanf("%d", &tem);
    printf("Enter the scale (C/F): ");
    scanf(" %c", &scale);

    int m = con(tem, scale);

    // Output the result
    if (scale == 'c' || scale == 'C') {
        printf("Converted temperature: %d°F\n", m);
    } else if (scale == 'f' || scale == 'F') {
        printf("Converted temperature: %d°C\n", m);
    } else {
        printf("Kindly enter a valid scale (C or F).\n");
    }

    return 0;
}


