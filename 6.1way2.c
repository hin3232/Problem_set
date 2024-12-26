#include<stdio.h>
int main(){
int arry[]={1,5,7,9};
int* p=arry;
int size = sizeof(arry)/sizeof(arry[0]);
for (int i =0;i<size;i++){
    printf(" element %d : %d\n", i+1,*p);
    p++; 
}
return 0;
}
