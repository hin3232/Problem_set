#include<stdio.h>
int main(){
    int w;
    printf (" w = ");
    scanf("%d",&w);
    if (w>0){
        printf(" % d is positive\n",w);
    }
    else if (w<0){
         printf(" % d is negative\n",w);
    }
    else {
        printf("%d is zero");
    }
    return 0;
}