#include<stdio.h>
void main()
{ 
    char name[27];
    
    int i;

    for(i=0;i<26; i++)
	{
	fflush(stdin);
    scanf("%c",(name+i));
}
    for(i=0;i<26; i++)
    {
    printf("%c ",name[i]);
	}
    }