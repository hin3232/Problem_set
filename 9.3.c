#include<stdio.h>
int IMPLEMENT_LINEAR_SEARCH(int arry[],int N,int f){
    for (int i=0;i<N;i++){
        if (arry[i]==f){
            printf(" founded  in the index °°°%d°°°  \n",i);
            return i;
        }else{
            printf("not found!!! in index %d \n",i);
        }
    }return -1;
} 
int main(){
    int size;
    printf("enter the size of attay : \n");
    scanf("%d",&size);
    int arry[size];
    printf (" enter the value of arry: \n");
    for (int i=0;i<size;i++){
        printf(" in  the indes %d : ",i);
        scanf("%d",&arry[i]);
    }int f;
    printf(" what is the value you want to search on ??\n");
    scanf("%d",&f);int the_index;
    the_index=IMPLEMENT_LINEAR_SEARCH(arry,size,f);
    return 0 ;
}