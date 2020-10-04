#include <stdio.h>
#include <stdlib.h>
struct students
{
    char ID[20];
    char name[50];
    char dob[50];
    int age;
    char address[50];
    int mark[5];
}student[10];
int main()
{
    int i,j;
    char temp;
   for(i=1;i<=5;i++)
   {
       printf("Enter the details of student: %d\n",i);
       printf("ID:");
       scanf("%s",student[i].ID);
       printf("name:");
        scanf("%c",&temp); // temp statement to clear buffer
    scanf("%[^\n]",student[i].name);
       printf("Date of birth:");
       scanf("%s",student[i].dob);
       printf("Address:");
       scanf("%c",&temp); // temp statement to clear buffer
    scanf("%[^\n]",student[i].address);
       printf("Age:");
       scanf("%d",&student[i].age);
       printf("Marks in 5 subjects:");
       for(j=0;j<5;j++)
       {
           scanf("%d",&student[i].mark[j]);
       }
   }
   for(i=1;i<=5;i++)
   {
       printf("\nDetails of student:%d\n",i);
       printf("%s\t%s\t%s\t%s ",student[i].ID,student[i].name,student[i].dob,student[i].address);
       printf("%d\t ",student[i].age);
       for(j=0;j<5;j++)
       {
           printf("%d\t",student[i].mark[j]);
       }
   }
   return 0;
}

