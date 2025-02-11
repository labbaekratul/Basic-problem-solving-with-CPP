#include <iostream>
#include<cstdio>


int factorial(int x) {
    int fact = 1;
    for (int i = 2;i<=x;i++) {
        fact = fact * i;
    }
    return fact;
}

int combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {

    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n-i; j++)
        {
            printf(" ");
        }
        
        
        for (int j = 0; j <= i; j++)
        {
            int icj = combination(i, j);
            printf("%d ", icj);
        }
        printf("\n");
        }
    

    return 0;
}