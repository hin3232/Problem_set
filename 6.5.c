#include<stdio.h>
#include<stdlib.h>
int main(){
    int N;
    printf("enter size of array:\n");
    scanf("%d",&N);
    printf(" enter the array \n");
    int*arr=(int*)malloc(N * sizeof(int));
    if (arr==NULL){
        return 1;
    }
    for (int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    printf(" the array :\n ");
    for (int i=0;i<N;i++){
        printf("%d \n",arr[i]);
    }
    free(arr);
return 0;
}