#include<stdio.h>
int s(int arr[],int size){
    for (int i=0;i<size-1;i++){
        int max=i;
        for (int j=i+1;j<size;j++){
            if (arr[j]>arr[max]){
               max=j;
            }
        }if (max!=i){
            int m=arr[i];
                arr[i]=arr[max];
                arr[max]=m;
        }
    }
}
int main(){
    int N;
    printf(" size of arr:\n");
    scanf("%d",&N);
    int arr[N];
     printf("the arr:\n");
    for (int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    printf("befor\n");
    for (int i=0;i<N;i++){
        printf("%d ,",arr[i]);
    }
    s(arr,N); 
    printf("\nafter \n");
    for (int i=0;i<N;i++){
        printf("%d ,",arr[i]);
    }return 0;
}