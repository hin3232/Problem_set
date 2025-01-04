#include<stdio.h>
int main(){
     int N;
    printf(" size of arr (N>2):\n");
    scanf("%d",&N);
    int arr[N];
     printf("the arr:\n");
     arr[0]=0;arr[1]=1;
    for (int i=2;i<N;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
      for (int i=0;i<N;i++){
        printf("%d  ",arr[i]);
    }
 return 0;   
}