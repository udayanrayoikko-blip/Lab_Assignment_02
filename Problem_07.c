#include <stdio.h>
int main ()
{
    int N, digit, reverse;
    printf("Enter digit: ");
    scanf("%d", &N);
    while (N>0)
    {
        digit= N%10;
        reverse = (reverse * 10) + digit;
        N = N/10;
    }
    printf("%d", reverse);
    return 0;
}


