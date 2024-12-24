#include <stdio.h>
int main(){
    char s1[100],s2[100];
    int i=0,j=0;
    printf("Enter the first string: ");
    fgets(s1,sizeof(s1),stdin);
    printf("Enter the second string: ");
    fgets(s2,sizeof(s2),stdin);
    while(s1[i]!='\0'){
        i++;
    }
    if (s1[i-1]=='\n'){
        s1[i-1]='\0';
        i--;
    }
   
    while(s2[j]!='\0'){
        s1[i]=s2[j];
        i++;
        j++;
    }
    s1[i]='\0';
     printf("The concatenated string is: %s", s1);
     return 0;
}