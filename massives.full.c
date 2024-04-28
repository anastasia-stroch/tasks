#include <stdio.h>

int main()
{
    int N;
    int degree;
    int number = 2;
    int sq=1;
    scanf("%d", &N);
    while (sq * number < N)
    {
        sq = sq * number;
        degree=sq;
    }
    if (degree * 2 == N || N == 2 || N == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}