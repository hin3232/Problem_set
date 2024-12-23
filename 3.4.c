#include<stdio.h>
int main(){

 int l;
 
    printf("the langh of array ???\n ");
    scanf("%d",&l);
int t[l];
    printf (" enter the matrix \n ");
    for (int i = 0;i<l;i++){
        scanf("%d",&t[i]);
    }
     printf ("\n°°° Inverse matrix °°°\n");
for (int i=l-1;i>=0;i--){
    printf ("%d \n ",t[i]);
}return 0;
}