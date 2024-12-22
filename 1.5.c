#include<stdio.h>
int main(){
    printf("Enter a number \n");
    int C;
    scanf("%d",&C);
    if (C % 2==0){
        printf (" %d is even\n",C);
    }
    else {
        printf (" %d is odd \n",C);
    }
    return 0;
}