#include<stdio.h>
int main(){
int arry[]={1,5,7,9};
int* p=arry;

for (int i=1;i<=4;i++){
printf(" element %d : %d\n", i,*p);
p++;
}return 0;
}