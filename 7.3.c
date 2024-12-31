#include <stdio.h>
struct employees{
    char name[50];
    int age;
    int salary;
};
int main(){
    struct employees em[5] ;
    printf(" the ditailes of 5 employees :\n");
   
for (int i =0;i<5;i++){
    while (getchar()!='\n'&&getchar()!=EOF);
    printf ("enter the name \n");
    fgets(em[i].name,sizeof(em[i].name),stdin);
    printf (" the age and salary  :\n" );
    scanf("%d %d",&em[i].age,&em[i].age);
}
for (int i=0;i<5;i++){
    printf ("1|- the name : %s 2|-the age :  %d\n 3|the salary - : %d \n ",em[i].name,em[i].age ,em[i].salary);
}return 0;
}