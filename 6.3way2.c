#include <stdio.h>
#include<string.h>
int LENGTH(char*s){
    int l=0;
while (*s!='\0'){
    l++;
    s++;
}return l;
}
int main(){
    char s[100];
    printf("enter string:\n");
    fgets(s,sizeof(s),stdin);
    if (s[strlen(s)-1]=='\n'){
        s[strlen(s)-1]='\0';
    }
    printf("Length of the string:%d", LENGTH(s));
return 0;
}