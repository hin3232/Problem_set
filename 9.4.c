#include<stdio.h>
void Sort(int N,int arry[]){
    for (int i=0;i<N-1;i++){
        int in=i;
        for (int j=1+i;j<N;j++){
            if (arry[j]<arry[in]){
               in =j;
               } 
            }
            if (in!=i){
                int t=arry[i];
                arry[i]=arry[in];
                arry[in]=t;
            }
       
    }
}
int binarysearch(int arr[],int N , int f){
    int start=0,end=N-1;
    while ( start<=end)
    {
        int mid=(start +end)/2;
        if(arr[mid]==f){
            printf("founded\n");
            return mid;
        }else if(arr[mid]>f){
            end=mid-1;
    }else {
            start=mid+1;
        }
    }return -1;
}
int main(){
 int N;
    printf(" size of arr:\n");
    scanf("%d",&N);
    int arr[N];
     printf("the arr:\n");
    for (int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }Sort(N,arr); 
    printf("enter the number you wanna search : \n");
    int f;scanf("%d",&f);
    int index=binarysearch(arr,N,f);
    if (index ==-1){
        printf("not founded\n");
    }return 0;
}