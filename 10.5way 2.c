#include<stdio.h>
void sieve(int n){
    int prime[n+1];
    for (int i=0;i<=n;i++){
        prime[i]=1;
        prime[0]=prime[1]=0;
    }for (int j=2;j*j<=n;j++){
        if (prime[j]==1){
            for (int p=j*j;p<=n;p+=j){
                prime [p]=0;
            }
        }
    }printf (" the prime numbers from 2 to %d :\n  ",n);
    for (int i=2;i<=n;i++){
        if (prime[i]==1){
            printf("%d\n",i);
        }
    }
}
int main (){
    int N;
    printf(" enter N:\n");
    scanf("%d",&N);
    sieve(N);
    return 0;
}