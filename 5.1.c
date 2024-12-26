#include<stdio.h>
int pgcd(int a,int b){
    while(b!=0){
        int m=b;
        b=a%b;
       a=m;
    }
    return a;
}
int main(){
    int a,b;
    printf("enter 2 numbers \n");
    scanf("%d %d",&a,&b);
    printf("GCD is : \n  %d ",pgcd(a,b ));
    return 0;

}