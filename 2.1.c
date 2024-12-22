#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter 3 numbers :\n");
    scanf("%d %d %d",&a,&b,&c);
    if (a>b){ 
        if(a>c){
            printf(" %d is the biggest\n",a);
        }
        else {  printf(" %d is the biggest\n",c);}
    }
    else {
        if (b>c){
              printf(" %d is the biggest\n",b);
        }
        else{  printf(" %d is the biggest\n",c);}
    }
}