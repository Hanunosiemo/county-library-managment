/*
  county library managment
  by 0mieso Hanun
  Feb 2022
  MIT license
  C89 Compiler
*/
#include <stdio.h>
#include <stdlib.h>

struct Patron{
    char name [100];
    char email[50];
    char password[30];
    int is_staff;
};

 void addpatron(){

    struct Patron patron;
    printf("Enter name");
    getchar();
    gets(patron.email);
    printf("enter initial password");
    gets(patron.email);
    printf("Enter 1 if staff 0 otherwise");
    scanf("%d",&patron.is_staff);
    printf("%s added\n,patron.name");
}

int menu(){
    int action;
    printf("select an action!\n");
    printf("1.add new patron!\n");
    printf("2.add view patron!\n");
    printf("3.view book!\n");
    printf("4.add new book!\n");
    printf("your action\n");
    scanf("%d",&action);
    if(action < 1 || action > 4){
        printf("invalid action. Try again");
}
    return action;
}

void execute(int action){
switch(action){

case 1:
    addpatron();
case 2:
    printf("list of all books\n");
    break;
case 3:
    printf("list of all books\n");
    break;
case 4:
    printf("list of new books\n");
    break;

default: printf("Invalid action.\n ");
}

}





int main(){
    printf("COUNTY LIBRARY SYSTEM!\n");
    printf("Welcome Mr.Zerry!\n");
    printf ("you selected the action %d",menu());
    execute(menu());
    return 0;
}
