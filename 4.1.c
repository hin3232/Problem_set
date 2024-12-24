#include<stdio.h>
#include<string.h>
int main(){
    char s[100];int l;
    printf("Enter a string: ");
    fgets(s,sizeof(s),stdin);
    l=strlen(s);
    if (s[l-1] =='\n'){
        s[l-1] ='\0';
        l--;
    }
     printf("The length of the string is: %d\n", l);
     return 0;
    
}