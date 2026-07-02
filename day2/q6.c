#include <stdio.h>
int main() {
    int num, rev = 0, digit;
    printf("Enter number: ");
    scanf("%d", &num);
    
    int temp = num;
    while(temp != 0) {
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp /= 10;
    }
    printf("Reversed = %d\n", rev);
    return 0;
}