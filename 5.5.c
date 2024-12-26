#include<stdio.h>
int digi(int a ){
    int i=0;
   while (a!=0){
        a=a/10;
        i++;

    }return i;
}
int main(){
    int a;
    printf(" the number ");
    scanf("%d",&a);
    printf("THE SUM OF DIGITS OF %d IS : %d ",a,digi(a));
    return 0;
}