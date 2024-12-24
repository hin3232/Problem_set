#include<stdio.h>
#include<string.h>
int pal(char s[]){
    int b=0,end=strlen(s)-1;
    while(b<end){
        if (s[b]!=s[end]){
            return 0;
        }
        end--;b++;

    }
    return 1;
}
int main(){
    char s[100];
    printf("Enter a string : \n");
    fgets(s,sizeof(s),stdin);
    s[strcspn(s,"\n")]='\0';
    if (pal(s)==1){
        printf("the string is a palindrome \n ");
    }
    else {
        printf("The string is not a palindrome\n");
    }
    return 0;

}