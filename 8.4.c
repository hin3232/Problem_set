#include<stdio.h>
int main(){
    FILE*file=fopen("hh.txt","a");
    if (file==NULL){
        return 1;
    }
    fprintf(file, "\n my name is maria \n");
    fclose(file);
     printf("End of process\n");

    return 0;
}
