#include<stdio.h>
void reverse(int *arr,int size){
    int *biggen=arr; int t;
    int *end=arr+size-1;
    while(end>biggen){
     t=*end;
     *end=*biggen;
     *biggen=t;
     end--;biggen++;
    }
}

int main(){
    int arr[]={4,6,7,55,4,2};
    printf ("Before reversing:\n");
    for (int i=0;i<6;i++){
        printf("%d \n ",arr[i]);
    }
    printf("After reversing:\n");
    reverse(arr,6);
    for (int i=0;i<6;i++){
        printf("%d \n",arr[i]);
    }
    return 0;
}