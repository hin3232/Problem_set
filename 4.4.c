#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
    int V=0,c=0;
    char s [100];
    char v[]="aAeEiIoOuU";
    printf("Enter a string :\n");
    fgets(s,sizeof(s),stdin);
    for (int i=0;s[i]!='\0';i++){
        if (isalpha(s[i])){
            if ( strchr(v , s[i])){
                V++;
            }
            else{
                c++;
            }

        }
    }
   printf("Number of vowels: %d\n", V);
   printf("Number of consonants: %d\n", c);
   return 0;
}