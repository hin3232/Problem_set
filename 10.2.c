#include<stdio.h>
#include<math.h>
int gremetric_sum(int a,int r,int n){
    if (r==1){
        return a*n;
    }else{
        return a*(pow(r,n)-1)/(r-1);
    }
}
int main(){
    int a,r,n;
    printf(" S=a*(r^n -1)/r-1\n");
    printf("a = ");
    scanf("%d",&a);
    printf("n = ");
    scanf("%d",&n); 
    printf("r = ");
    scanf("%d",&r);
    int sum = gremetric_sum(a,r,n);
      printf("The sum of the geometric series is: %d\n", sum);
      return 0;
}