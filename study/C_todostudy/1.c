#include <stdio.h>
// int main(
// {
//     int x = 5, a = 0, b = 0
//     if (x = a + b)
//         printf("* * * *\n")
//     else
//         printf("# # # #\n");
// }

// int main()
// {
//     int k = 6, n = 0;
//     while (k > 0)
//     {
//         switch (--k)
//         {
//         case 1:
//             n += k;
//         case 2:
//         case 3:
//             n += k;
//         default:
//             break;
//         }
//         k--;
//     }
//     printf("%d\n", n);
// }

// #define MIN(x,y) (x)<(y)?(x):(y)
// int main() {
//     int i = 10, j = 15, k;
//     k = 10 * MIN(i,j);
//     printf("%d", k);
// }

// int f(int x) {
//     int y ;
//     if(x == 0 || x == 1) return (3);
//     else y = x * x - f(x - 2);
//     return y;
// }
// int main() {
//     printf("%d\n", f(3));
// }


//97.(1)
// int fun(int x, int y)
// {
//     static int m = 0, i = 2;
//     i += m + 1;
//     m = i + x + y;
//     return m;
// }
// main()
// {
//     int j = 1, m =1, k;
//     k = fun(j,m);
//     printf("%3d", k);
//     k = fun(j,m);
//     printf("%3d", k);
// }

//97.(2)
// int fun(int n ) {
//     static int s = 1;
//     s*= n;
//     return s;
// }
// main() {
//     int i , s= 0;
//     for(i = 1; i<=4; i++)
//     s+=fun(i);
//     printf("%d\n", s);
// }


//98.(1)
