#include<stdio.h>
int main (){
    int s=1, p;
    scanf ("%d",&p);
      if (p < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 0;
    }
    for (int i=1;i<=p;i++){
        s=s*i;
    }
    printf("the factorial of a number %d is  %d ",p,s);

return 0;}