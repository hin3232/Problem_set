#include <stdio.h>

int main() {
    int i, a, M;

    // إدخال الرقم
    printf("Enter the number: ");
    scanf("%d", &a);

    // طباعة جدول ضرب الرقم a من 1 إلى 10
    for (i = 1; i <= 10; i++) {
        M = i * a;
        printf("%d * %d = %d\n", a, i, M);  // إضافة \n لإنشاء سطر جديد بعد كل عملية ضرب
    }

    return 0;
}
