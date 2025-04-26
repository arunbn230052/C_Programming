#include<stdio.h>
int main(){
int n,x=0;
printf("enter your any number: \n");
scanf("%d", &n);
for(int i= 0; i<=n; i++){
	x=i+x;
	

}
printf("The sum is %d\n",x);
}
