#include <stdio.h>

void main()
{
	char name[20];
    printf("what is your name?\n");
	scanf("%[^\n]s",name);
	printf("Name: %s\n",name);
	
	char adress[15];
    printf("where is your adress \n");
	fflush(stdin);
	gets(adress);
	printf("Address: %s\n",adress);

	char studing[20];
	printf("where are you studing \n");
	fflush(stdin);
	scanf("%[^\n]s",studing);
	printf("Study in: %s\n",studing);

    char actor[50];
    printf("My favourite actor is \n");
	fflush(stdin);
	scanf("%[^\n]s",actor);
	printf("Actor is: %s\n",actor);

	long int phoneno;
	printf("what is your phoneno\n");
	scanf("%ld", &phoneno);

	float weight;
	printf("how much your weight\n");
	fflush(stdin);
	scanf("%f",&weight);

	int age;
	printf("How old are you\n");	
	fflush(stdin);
	scanf("%d",&age);
	
	printf("weight: %f\n",weight);
	printf("age: %d\n",age);

}