#include<stdio.h>
int main(){
	printf("meter\t ");
	printf("feet \t ");
	printf("\n");
	for(int i=1; i<=20; i++){
		if(i%2!=0){
			printf("%d\t %f\n",i,i*3.980);
		}
	}
}