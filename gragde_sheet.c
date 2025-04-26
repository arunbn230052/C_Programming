#include<stdio.h>
int main(){
int mark;
float total_mark_Physic, Science, Math, Social, Health;
printf("Enter your marks: \n");
scanf("%d", &mark); 
if(mark >90&&mark<=100)
{
printf("Congratulation! your score A+ \n " );
}
else if(mark >80&&mark<=90){
	printf("your score is B+ \n ");
}
else if(mark >70&&mark<=80){
printf("your score is C+ \n");
}
else if(mark >60&&mark<=70){
	printf("your score is C \n ");
}
else if(mark >50&&mark<=60){
	printf("your score is D+ \n");
}
else if(mark >40&&mark<=50){
	printf("your score is D \n");
}
else
{
	printf("sorry Bro you are fail \n ");
}
}