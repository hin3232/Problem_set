#include<stdio.h>
void swap(int* a,int* b){
    int p =*a;
    *a=*b;
    *b=p;
}
int main(){
    int a,b;
   
    printf("enter 2 numbers :\n");
    scanf("%d %d",&a,&b);
    printf(" Before swapping: a = %d, b = %d\n", a, b);
    swap(&a,&b);
    printf ("after swapping : a= %d ,b =%d",a,b);
return 0;
}