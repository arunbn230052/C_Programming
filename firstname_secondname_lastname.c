#include <stdio.h>
void main(){
    // C programming to find a persion firstname, secondname, lastename 
    char fname[20], mname[20], lname[20];
    printf("please enter your firstname, midlename, lastname \n");
    scanf("%s %s %s", &fname, &mname, lname);

    printf("your name: ");
    printf(" %c. %c. %c", fname[0], mname[0], lname[0]);
}