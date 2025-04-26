#include<stdio.h>
int main(){
    // C programming to find area of cirecle and area of circumference

    int rad;
float pi = 3.14, area, ci;

printf("please enter radius of circle:\n");
scanf("%d", &rad);

// area of circle

area = pi * rad * rad;
printf("\n area of circle: %f", area);

//area of circumference

ci =  2* pi* rad;
printf(" \n area of Circumference of Circle: %f", ci);

}