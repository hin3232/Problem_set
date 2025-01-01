#include<stdio.h>
#include<ctype.h>

int main() {
    char c;
    int count = 0;int  inword = 0;
    FILE* file = fopen("hh.txt", "r");
    if (file == NULL) {
        return 1; 
    }
    printf("File opened successfully.\n");

    while ((c = fgetc(file)) != EOF) {
        if (isalnum(c)) {
            if (inword == 0) { 
                inword = 1;
                count++;      
        } } else {
            inword = 0;  
        }
   }
    fclose(file);
    printf("Number of words in the file: %d\n", count);
    printf("End of process\n");

    return 0;
}
