#include<stdio.h>



int main(){
    char s[100];
    int n=0;
    printf("enter a string:\n");
    fgets(s,sizeof(s),stdin);
    char m;
    printf ("Required character in text:\n");
    scanf(" %c",&m);
    for (int i=0;s[i]!='\0';i++){
        if (s[i]==m){
            n++;
        }
    }
    printf ( "THE FREQUENCY OF A CHARACTER '%c' IN A STRING is %d ",m,n);
    return 0;

}