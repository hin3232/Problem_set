#include<stdio.h>
struct age{
    int bearth;
    int year;
};
int agee(struct age ag ){
    return ag.year-ag.bearth;
}
int main(){
    struct age ag;
    printf ("enter the year of berth and this year :\n ");
    scanf("%d %d",&ag.bearth,&ag.year);
    printf(" your age is : %d ",agee(ag));
    return 0;
}