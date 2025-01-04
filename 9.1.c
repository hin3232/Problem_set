#include<stdio.h>
void b (int arr[],int size){
  int  m;

    for (int i=0;i<size;i++){
        for(int j=0;j<size-i-1;j++){
            if (arr[j]<arr[j+1]){
              m=arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=m;
            }
        }
    }
}
int main(){
    printf ("enter size of arr: \n");
    int size;
    scanf("%d",&size);
    int arr[size];
    printf("the arr:\n");
    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("befor\n");
    for (int i=0;i<size;i++){
        printf("%d ,",arr[i]);
    }
    b(arr,size); 
    printf("\nafter \n");
    for (int i=0;i<size;i++){
        printf("%d ,",arr[i]);
    }return 0;
}