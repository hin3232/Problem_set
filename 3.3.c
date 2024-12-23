#include<stdio.h>
int main(){
    int t[5],sum;
    float adv;
    printf("Enter the numbers \n ");
    for (int i=0;i<5;i++){
        scanf("%d",&t[i]);
        sum=sum+t[i];
    }
    adv=sum/5.0;
    printf(" the sum of elements is \n %d  ",sum);
    printf(" \n the average of elements is \n %f  ",adv);

return 0;
}