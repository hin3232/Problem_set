#include<stdio.h>
int main(){
    int l,j;
    printf ("Length of the first and second array \n");
    scanf ("%d %d",&l,&j);
    int t[l],h[j],s[l+j];
    printf("the first\n");
    for (int i=0;i<l;i++){
        scanf("%d",&t[i]);
    }
    printf("the secend \n");
    for (int i=0;i<j;i++){
        scanf("%d",&h[i]);
    }
    for(int i=0;i<j;i++){
        s[i]=h[i];
    }
     for(int i=0;i<l;i++){
        s[i+j]=t[i];
    }
    printf("Merged array:\n");
    for (int i=0;i<l+j;i++){
     printf("\n %d",s[i]);
    }
    return 0;
}