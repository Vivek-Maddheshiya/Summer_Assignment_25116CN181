#include <stdio.h>
int main() {
    int num, original, rev = 0, digit;
    printf("Enter number: ");
    scanf("%d", &num);
    
    original = num;
    num = num < 0 ? -num : num;
    
    while(num > 0) {
        digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }
    
    if(original == rev)
        printf("%d is a Palindrome\n", original);
    else
        printf("%d is NOT a Palindrome\n", original);
    return 0;
}