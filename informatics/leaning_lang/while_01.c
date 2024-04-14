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
