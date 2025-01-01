#include<stdio.h>
#include <string.h>
struct student
{int mark[5];
char name[50];
};
int main(){
    struct student s[5];
   
    for (int i=0;i<5;i++){
         printf("Enter details for student %d\n", i + 1); 
         getchar(); 
          printf("Enter name: ");
          fgets(s[i].name,sizeof(s[i].name),stdin);
          s[i].name[strcspn(s[i].name,"\n")]='\0';
          printf("Enter marks for 5 subjects: ");
          int sum=0;
          for(int j=0;j<5;j++){
            scanf("%d",&s[i].mark[j]);
            sum =sum+s[i].mark[j];
          }
          float ad;
          ad =sum/5.0;
          printf(" name of student: %s Total Marks: %d, Average Marks: %.2f\n",s[i].name,sum, ad);
    }
return 0;
}
