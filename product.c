#include<stdio.h>
int main(){
double a= 1;
//printf("enter your any number:\n");
for(int i=5; i<=97; i+=4){
a=1.0/i*a;
printf("%.50lf\n",a);
}
printf("the sum is %.100lf",a);

}