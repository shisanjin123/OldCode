#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// void print(char *s)
// {
//     printf("%s", s);
// }
// int main()
// {
//     char *p, *q;
//     char str[] = "Hello,World";
//     q = p = str;
//     p++;
//     print(q);
//     print(p);
// }

// void fun(char *c, int d)
// {
//     *c = *c + 1;
//     d = d + 1;
//     printf("%c,%c,", *c, d);
// }
// int main()
// {
//     char a = 'A', b = 'a';
//     fun(&b, a);
//     printf("%c,%c\n", a, b);
// }

// void f(int *x, int *y)
// {
//     int t;
//     t = *x;
//     *x = *y;
//     *y = t;
// }
// int main()
// {
//     int a[8] = {1, 2, 3, 4, 5, 6, 7, 8}, i = 0, *p, *q;
//     p = a;
//     q = &a[7];
//     while (*p != *q && i < 8)
//     {
//         f(p, q);
//         p++;
//         q--;
//         i++;
//     }
//     for (i = 0; i < 8; i++)
//         printf("%d,", a[i]);
// }

// void sum(int *a)
// {
//     a[0] = a[1];
// }
// int main()
// {
//     int aa[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, i;
//     for (i = 2; i >= 0; i--)
//         sum(&aa[i]);
//     printf("%d\n", aa[0]);
// }

int main()
{
    char *str = (char *)malloc(6 * sizeof(char));
    strcpy(str, "hello");
    puts(str);
    free(str);
    return 0;
}