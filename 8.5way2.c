#include<stdio.h>
int main(){
    FILE*file1,*file2;
    char c;
    file1=fopen("hh.txt","r");
    file2=fopen("hh2.txt","w");
    if (file1==NULL||file2==NULL){
        return 1;
    }
    while((c=fgetc(file1))!=EOF){
        fputc(c,file2);
    }
    fclose(file1);fclose(file2);
    printf("End of process\n");
    return 0;
}