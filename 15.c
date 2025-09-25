#include <stdio.h>

int main()
{
    int posNums, negNums, num;

    for (int i = 0; i < 20; i++)
    {
        scanf("%d", &num);
        if (num > 0)
        {
            posNums += num;
        }
        else
        {
            negNums += num;
        }
    }

    printf("Positius: %d\n", posNums);
    printf("Negatius: %d", negNums);

    return 0;
}