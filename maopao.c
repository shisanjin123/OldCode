#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a[10], i, j, t;
    printf("put 10 numbers: \n");
    for (i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    printf("\n");

    for (j = 0; j < 9; j++)
        for (i = 0; i < 9 - j; i++)
            if (a[i] > a[i + 1])
            {
                t = a[i];
                a[i] = a[i+1];
                a[i+1] = t;
            }
    printf("the sorced numbers: \n");
    for (i = 0; i < 10; i++)
    {
        printf("%d", a[i]);
        printf("\n");
    }
        
    return 0;
}
