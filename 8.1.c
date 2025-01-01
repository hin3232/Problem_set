#include<stdio.h>
int main(){
    FILE* file= fopen("hh.txt","w");
    if (file==NULL) return 1;
    fprintf(file,"hello.world \n");
    fclose(file);
    printf(" End of process");
    return 0;
}