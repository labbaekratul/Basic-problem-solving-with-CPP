#include <stdio.h>


int main() {
    int a, b;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter a : ");
    scanf("%d", &b);

    int temp = a;
    a = b;
    b = temp;

        printf("The value of a is %d\n", a);
        printf("The value of b is %d\n", b);

}