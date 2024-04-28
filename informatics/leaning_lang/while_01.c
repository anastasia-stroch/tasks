#include <stdio.h>

// https://informatics.msk.ru/mod/statements/view.php?id=249#1
void square()
{
    int N;
    int count = 1;
    int sq = 1;

    scanf("%d", &N);
    while (sq <= N)
    {
        printf("%d\n", sq);
        count++;
        sq = count * count;
    }
}

// https://informatics.msk.ru/mod/statements/view.php?id=249&chapterid=3058#1
void divider()
{
    int number;
    int divider = 2;
    
    scanf("%d", &number);
    while (divider * divider <= number && number % divider != 0)
    {
        divider++;
    }
    
    if (divider * divider > number)
        printf("%d", number);
    else
        printf("%d", divider);
}

// https://informatics.msk.ru/mod/statements/view.php?id=249&chapterid=3059#1
void degree()
{
    int N;
    int number = 2;
    int sq = 1;

    scanf("%d", &N);
    if (N > 0)
    {
        printf("%d ", sq);
    }
    while (sq * number <= N)
    {
        sq = sq * number;
        printf("%d ", sq);
    }
}

// https://informatics.msk.ru/mod/statements/view.php?id=249&chapterid=3060#1
void equal_degree()
{
    int N;
    int degree;
    int number = 2;
    int sq = 1;

    scanf("%d", &N);
    while (sq * number < N)
    {
        sq = sq * number;
        degree = sq;
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

// https://informatics.msk.ru/mod/statements/view.php?id=249&chapterid=3061#1
void equal_degree()
{
    int N;
    int count = 0;
    int number = 2;
    int sq = 1;

    scanf("%d", &N);
    while (sq * number < N)
    {
        sq = sq * number;
        count = count + 1;
    }
    if (sq != N)
    {
        printf("%d", count + 1);
    }
    else
    {
        printf("%d", count);
    }
}

// https://informatics.msk.ru/mod/statements/view.php?id=249&chapterid=3062#1
void morning_jog()
{
    float x;
    int count = 1;
    int y;

    scanf("%e", &x);
    scanf("%d", &y);
    while (y - x > 0)
    {
        x = x * 1.1;
        count = count + 1;
    }
    printf("%d", count);
}
