#include <stdio.h>
int main ()
{
    int N, Found = 1;
    printf("Enter number: ");
    scanf("%d", &N);
    for (int i=2; i<N; i++)
    {
        if (N % i == 0)
        {
            Found = 0;
            break ;
        }
    }
    if (Found == 1)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
    return 0;
}




