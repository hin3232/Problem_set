#include<stdio.h>
void freq(int arr[],int size , int f){
    int count=0;
for(int i=0;i<size;i++){
    if (arr[i]==f){
        count++;
    }
}if (count==0){
    printf("the number not found");
}else{
    printf(" the number %d its frequency %d ",f ,count);

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
    printf("enter the number you wanna search its frequency  : \n");
    int f;scanf("%d",&f);
    freq(arr,N,f);
    return 0;
}