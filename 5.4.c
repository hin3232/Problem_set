#include<stdio.h>
#include<math.h>
int prime(int n){
    if (n<=1){
        return 0;
    }
for (int i=2;i<=sqrt(n);i++){
    if (n%i==0){
        return 0;
    }
}
return 1;
}
int main (){
    int c;
    printf("enter a number:\n");
    scanf("%d",&c);
    if (prime(c)){
        printf("%d is prime ",c);
    }
    else{
         printf("%d is  not prime ",c);
    }
    return 0;
}