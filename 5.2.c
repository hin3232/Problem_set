#include<stdio.h>
int powr(int a , int b){
    int m=1;
    for (int i=1;i<=b;i++){
     m=a*m;
    }return m;
}
int main(){
    int a,b;
    printf("enter a and b that (a^b):\n");
    scanf("%d %d",&a,&b);
    printf ("the resulte : %d",powr(a,b));
    return 0;
}