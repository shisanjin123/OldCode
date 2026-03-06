#include <stdio.h>
int main()
{
    int n = 20;
    int rabbits[n];

    rabbits[0] = 1;
    rabbits[1] = 1;

    for (int i = 2; i < n; i++)
    {
        rabbits[i] = rabbits[i - 1] + rabbits[i - 2];
    }

    for (int i = 0; i < n; i++)
    {
        printf("第%d个月的兔子数量是%d\n", i + 1, rabbits[i]);
    }

    return 0;
}