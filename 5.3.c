#include<stdio.h>
int fac(int n){
    int m=1;
    while(n){
      
        m=m*n;
        n--;
    }return m;
}
int main(){
    int n;
    printf("the number:\n");
    scanf("%d",&n);
    printf ("the factorial of %d is %d",n,fac(n));
    return 0;

}