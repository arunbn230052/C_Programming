#include <stdio.h>
int main(){
int year;
int i =0;
printf("enter your year \n");
scanf("%d", &year);
i=(year % 4 == 0)&&((year % 400 ==0)|| (year % 100 !=0));
if (i==1){
	printf("%d is the leap year ",year);}
	else{
	printf("%d is not leap year ",year);}
	return 0;
}

