#include <stdio.h>

int main() {
    int num, i = 0;
    int a[32];

    printf("Enter a decimal number: ");
    scanf("%d", &num);
    
    do {
        a[i++] = num % 2;
        num /= 2;
    } while (num > 0);


    for (int o = i - 1; o >= 0; o--) {
        printf("%d", a[o]);
    }
    printf("\n");

    return 0;
} 
