#include<stdio.h>
int main(){
    int t[5],min,max;
    printf("Enter the numbers \n ");
    for (int i=0;i<5;i++){
        scanf("%d",&t[i]);

    }
   min=max=t[0];
    for (int i=1;i<5;i++){
       if (min>t[i]){
        min=t[i];
       }
       if (max<t[i]){
        max=t[i];
       }
    }
    printf("%d is the max \n",max);
    printf("%d is the min\n",min);
    return 0;

}