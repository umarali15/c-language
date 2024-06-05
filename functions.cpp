#include<stdio.h>
//void product(){
//int x;
//int y;
//int z;
//printf("enter the value of x \n");
//scanf("%d",&x);
//printf("enter the value of y\n");
//scanf("%d",&y);
//	z=x*y;
//	printf("your product is: %d \n",z);
//}
//int main(){
//product();
//product();
//product();
//product();
//product();
//product();
//product();
//product();
//product();
int main(){
float r;
float h;
float v;
float a;
printf("enter the value of radius:\n");
scanf("%f",&r);
printf("enter the value of height:\n");
scanf("%f",&h);
v=3.14*r*r*h;
a=2*3.14*r*h+2*3.14*h*h;
printf("the volume of cylinder is= %f \n",v);
printf("the area of cylinder is= %f \n",a);

	return 0;
}
