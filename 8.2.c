#include<stdio.h>
int main(){
    FILE*file=fopen("hh.txt","r");
    char c;
    if (file==NULL){return 1;}
while((c=fgetc(file))!=EOF){
    putchar(c);
}fclose(file);
  printf(" End of process");
    return 0;
}
