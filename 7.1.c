#include<stdio.h>
struct Student{
    char name[50];
    int Registration_number;
};
int main(){
    struct Student student;
    printf(" nome of student:\n");
    fgets(student.name,sizeof(student.name),stdin);
    printf("enter Registration number:\n");
    scanf("%d",&student.Registration_number);
    printf("the Details of Student  :\n");
    printf (" the name : %s \n the Registration number : %d ",student.name,student.Registration_number);
    
return 0;
    
}