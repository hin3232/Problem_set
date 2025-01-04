#include <stdio.h>
void towerOfHanoi(int n ,char from,char to ,char aux){
    if (n==1){
        printf("move disk 1 from %c to %c \n",from,to);
    }else{
        towerOfHanoi(n-1,from,aux,to);
        printf("move disd %d from %c to %c ",n,from ,to);
        towerOfHanoi(n-1,aux,to,from);
    }
}int main() {
int n;
printf("Enter number of disks: ");
scanf("%d", &n);
towerOfHanoi(n, 'A', 'C', 'B');
return 0;
}