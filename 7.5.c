#include<stdio.h>
struct date{
    int dd;
    int mm;
    int yyyy;
};
int main(){
    struct date date;
    printf("enter date  like (dd-mm-yyyy):\n");
    scanf("%d%d%d",&date.dd,&date.mm,&date.yyyy);
    printf (" the date is :\n %d-%d-%d",date.dd,date.mm,date.yyyy);
    return 0;
}