#include<stdio.h>
int main (){
    int x,y;
    scanf("%d %d",&x,&y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("x = %d \n y =%d ",x,y);
    return 0;

}