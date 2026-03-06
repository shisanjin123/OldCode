#include <stdio.h>
#include <math.h>
#include <string.h>
// int main()
// {
//     struct sc
//     {
//         char a[13];
//         double b;
//     } ks;

//     printf("%d\n", sizeof(ks));
//     return 0;
// }

// int main()
// {
//     char s[] = "1234567890", *p = s, i = 0;
//     while (*p)
//     {
//         /* code */
//         if (i % 2 == 0)
//             *p = '*';
//         p++;
//         i++;
//     }

//     printf("%s\n", s);
// }

// int main()
// {
//     union emp
//     {
//         struct
//         {
//             int x;
//             int y;
//         } stc;
//         int a;
//         int b;
//     } u;
//     u.a = 1;
//     u.b = 2;
//     u.stc.x = u.a + u.b;
//     u.stc.y = u.a + u.b;
//     printf("%d,%d\n", u.stc.x, u.stc.y);
// }

// int main()
// {
//     union
//     {
//         /* data */
//         short int x;
//         long y;
//         unsigned char ch1;
//     } w;
//     w.y = 0x12345678;
//     printf("%x\n", w.y);
//     printf("%x\n", w.x);
//     printf("%x\n", w.ch1);
// }

// int main()
// {
//     struct emp
//     {
//         union
//         {
//             int x;
//             int y;
//         } u;
//         int a;
//         int b;
//     } s;
//     s.a = 1;
//     s.b = 2;
//     s.u.x = s.a + s.b;
//     s.u.y = s.a * s.b;
//     printf("%d,%d\n", s.u.x, s.u.y);
// }

// int main(int argc, char const *argv[])
// {
//     int x = 1, y = 2, z = 3;
//     if (x > y)
//         if (y < z)
//             printf("%d", ++z);
//         else
//             printf("%d", ++y);
//     printf("%d\n", x++);
//     printf("%d", x);
//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     int n;
//     scanf("%d", &n);
//     if (n++ < 10)
//         printf("%d\n", n);
//     else
//         printf("%d\n", n--);
//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     int a, b, c, d, y;
//     if (a < b)
//         if (c == d)
//             y = 0;
//         else
//             y = 1;

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     char grade;
//     scanf("%c", &grade);
//     printf("Your score: ");
//     switch (grade)
//     {
//     case 'A':
//         printf("85~100\n");
//         break;
//     case 'B':
//         printf("70~84\n");
//         break;
//     case 'C':
//         printf("60~69\n");
//         break;
//     case 'D':
//         printf("<60\n");
//         break;
//     default:
//         printf("enter data error!\n");
//     }
//     return 0;
// }

// 输入一个百分制成绩，90upA，80~89B，70~79C，60~69D，60downE
// int main(int argc, char const *argv[])
// {
//     int grade;
//     printf("your score: ");
//     scanf("%d", &grade);
//     switch (grade / 10)
//     {
//     case 10:
//     case 9:
//         printf("A\n");
//         break;
//     case 8:
//         printf("B\n");
//         break;
//     case 7:
//         printf("C\n");
//         break;
//     case 6:
//         printf("D\n");
//         break;
//     case 5:
//         printf("E\n");
//         break;
//     default:
//         printf("error!\n");
//         break;
//     }
//     return 0;
// }

// 输入整型x，判断2 to x内的数是素数还是非素数 并输出（用while循环实现，，用函数调用）
// int su(int n)
// {
//     int j=2;
//     while(j<=n-1) {
//         if(n%j==0) break;
//         j++;
//     }
//     if(j==n) return 1;
//     else return 0;
// }
// int main(int argc, char const *argv[])
// {
//     int x, i=2, y;
//     scanf("%d", &x);
//     while (i<=x)
//     {
//         y=su(i);
//         if (y==1)
//         {
//             printf("%d yes");
//         }else printf("%d no");

//     }

//     return 0;
// }

// 输出所有的水仙花数，三位整数，每一位的立方和等于该数。
//  int main(int argc, char const *argv[])
//  {
//      int x,a,b,c,i;
//     //  scanf("%d",&x);
//      for ( i = 100; i <= 999; i++)
//      {
//          a=i/100;
//          b=i/10%10;
//          c=i%10;
//          if (a*a*a+b*b*b+c*c*c==i)
//          {
//              printf("%d is daffodil number\n", i);
//          }

//     }

//     return 0;
// }

// 书麒
//  int main()
//  {
//      int x, a, b, c, d;
//      scanf("%d,&x");
//      a = x / 100;
//      b = x / 10 % 10;
//      c = x % 10;
//      d = a * a * a + b * b * b + c * c * c;
//      while (x >= 100 && x <= 999)
//      {
//          if (x == d)
//          {
//              printf("%d is 水仙花数\n", x);
//          }
//          x++;
//      }
//  }

// int main(int argc, char const *argv[])
// {
//     //1-2+3-4+5...+99-100
//     int i =1, sum = 0, f=1;
//     while (i<=100)
//     {
//         sum = sum +i*f;
//         i++;
//         f=-f;
//     }
//     printf("sum=%d\n", sum);
//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     int n=9;
//     while(n>6) {
//         n--;
//         printf("%d",n);
//     }
//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     int x,y;
//     for(int x=0, y=10;(y>0)&&(x<4); x++, y--) {
//         printf("x=%d, y=%d\n",x,y);
//     }
//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     int a, i;
//     a=0;
//     for(i=1; i<5;i++) {
//         switch (i)
//         {
//         case 0:
//         case 3: a+=2;
//         case 1:
//         case 2: a+=3;
//         default: a+=5;
//         }
//         printf("%d\n",a);
//     }
//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     int i, j, x=0;
//     for ( i = 0; i < 2; i++)
//     {
//         x++;
//         for ( j = 0; j <=3; j++)
//         {
//             if (j%2) continue;
//             x++;
//         }
//         x++;
//     }
//     printf("x=%d\n", x);
//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     int y=9;
//     for ( ; y>0; y--) {
//         if (y%3==0)
//         {
//             printf("%d", --y);
//         }

//     }

//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     int i = 0;
//     for (i = 0; i <= 40; i++)
//     {
//         if (i++ % 5 == 0)
//             if (++i % 8 == 0)
//                 printf("%d", i);
//     }
//     printf("\n");
//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     int k = 5;
//     while (--k)
//         printf("%d", k -= 3);
//     printf("\n");
//     return 0;
// }

// int main(int argc, char const *argv[])
// {

//     int i = 5;
//     do
//     {
//         if (i % 3 == 1)
//             if (i % 5 == 2)
//             {
//                 printf("%d", i);
//                 break;
//             }
//     } while (i != 0);
//     printf("\n");
//     return 0;
// }

// 8 17
// int main(int argc, char const *argv[])
// {
//     int i = 1, s = 3;
//     do
//     {
//         s += i++;
//         if (s % 7 == 0)
//         {
//             continue;
//         }
//         else
//             ++i;

//     } while (s < 15);
//     printf("%d", i);
//     return 0;
// }

// 2 5 8 11 14
// int main(int argc, char const *argv[])
// {
//     int i = 1;
//     while (i <= 15)
//         if (++i % 3 != 2)
//             continue;
//         else
//             printf("%d,", i);
//     printf("\n");
//     return 0;
// }

// 学生成绩，统计并输出最高和最低成绩，当输入负数时结束循环
// int main(int argc, char const *argv[])
// {
//     float x, max, min, aver, sum = 0.0;
//     int n = 0;
//     scanf("%f", &x);
//     max = x;
//     min = x;
//     while (x >= 0)
//     {
//         if (x > max)
//             max = x;
//         if (x < min)
//             min = x;
//         sum = ;
//         n++;
//         scanf("%f", &x); // ?
//     }
//     aver = ;
//     printf("\nmax=%f\nmin=%f\naverager=%f\n", max, min, aver);
//     return 0;
// }

// 求1-1/2+1/3-1/4+1/5-1/6+1/7……
// int main(int argc, char const *argv[])
// {
//     float sum = 0;
//     int i = 1, f = 1;
//     for (i = 1; i < 8; i++)
//     {
//         sum += f * (1.0 / i);
//         f = -f;
//         // i++;
//         // printf("%d\n", x);
//     }
//     printf("%f", sum);

//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     int i, n, m = -1;
//     double j, sum = 0.0, k = 0.0;
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++)
//     {
//         m = -m;
//         j = m / (k + 1);
//         sum = sum + j;
//         k++;
//     }
//     printf("%4f\n", sum);
//     return 0;
// }

// 计算1-2/3+3/5-4/7+……的前n项和
// int main(int argc, char const *argv[])
// {
//     int i, n;
//     float sum = 0, flag = 1, k = 1.0;;
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++)
//     {
//         sum = sum + flag * (k / (2 * i - 1));
//         flag = -flag;
//     }
//     printf("%f", sum);
//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     int n, i;
//     double s = 1;
//     scanf("%d", &n);
//     for ( i = 1; i <= n; i++)
//     {
//         s *= i;
//     }
//     printf("s=%4lf\n", s);
//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     int n = 5;
//     do
//     {
//         switch (n % 2)
//         {
//         case 0:
//             n--;
//             break;
//         case 1:
//             n--;
//             continue;
//         }
//         n--;
//         printf("%2d", n);
//     } while (n > 0);

//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     int i, j, m = 55;
//     for (i = 1; i <= 3; i++)
//         for (j = 3; j <= i; j++)
//             m = m % j;
//     printf("%d\n", m);
//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     int i, j, n = 0;
//     for (i = 0; i < 2; i++)
//     {
//         n++;
//         for (j = 0; j <= 3; j++)
//         {
//             if (j % 2)
//                 continue;
//             n++;
//         }
//         n++;
//     }
//     printf("n=%d\n", n);
//     return 0;
// }

// 5
// int main(int argc, char const *argv[])
// {
//     int a = 5;
//     do
//     {
//         printf("%2d\n", a--);
//     } while (!a);

//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     int x;
//     for (x = 3; x < 6; x++)
//         printf((x % 2) ? "**%d" : "##%d\n", x);
//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     int i, j;
//     for (i = 1; i <= 4; i++)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     int i, j, k, n;
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++)
//     {
//         for ( k = 1; k < i; k++)
//         {
//             printf(" ");
//         }

//         for (j = n; j >= i; j--)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     int i, j, k, n;
//     // scanf("%d", &n);
//     for (i = 4; i >= 1; i--)
//     {
//         for (k = 4 - i; k > 0; k--)
//         {
//             printf(" ");
//         }

//         for (j = 1; j <= i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     int i, j, k, n;
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++)
//     {
//         for (j = n - i; j > 0; j--)
//         {
//             printf(" ");
//         }
//         for (k = 1; k <= 2 * i - 1; k++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     float x = 234.5678, y;
//     y = (int)(x * 100 + 0.5);
//     printf("%.2f", y/100);
//     return 0;
// }

// 求1!+2!+3!+……+n!
// int allin(int x)
// {
//     int j, s = 1;
//     for (j = 1; j <= x; j++)
//     {
//         s *= j;
//     }
//     return s;
// }
// int main(int argc, char const *argv[])
// {
//     int i, n;
//     double sum = 0;
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++)
//     {
//         // allin(i);
//         sum = sum + allin(i);
//     }
//     printf("sum=%lf\n", sum);

//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     int x = 123;
//     printf("%x", x);
//     return 0;
// }

// double Fun1(double x)
// {
//     double a, b;
//     if (a < 1)
//         b = a;
//     else if (a >= 1 && a < 10)
//         b = 2 * a - 1;
//     else
//         b = 2 * a - 11;

//     return b;
// }

// double main(int argc, char const *argv[])
// {
//     double x, y;
//     scanf("%lf", &x);
//     y = Fun1(x);
//     printf("%lf", y);
//     return 0;
// }

// double Fun1(double x) {
//     if(x<1) return x;
//     if(x>=1 && x<10) return 2 * x - 1;
//     if(x>=10) return 2 * x - 11;
// }
// int main(int argc, char const *argv[])
// {
//     double x, res;
//     scanf("%d", &x);
//     res = Fun1(x);
//     printf("%f\n", res);
//     return 0;
// }

// int main() {
//     int n, max, min;
//     float sum = 0.0, average;
//     int count = 10;

//     printf("请输入十个数：\n");

//     // 输入第一个数
//     scanf("%d", &n);
//     max = min = n;  // 初始化最大值和最小值

//     // 输入剩下的九个数
//     for (int i = 1; i < count; i++) {
//         scanf("%d", &n);
//         if (n > max) {
//             max = n;  // 更新最大值
//         }
//         if (n < min) {
//             min = n;  // 更新最小值
//         }
//         sum += n;    // 累加总和
//     }

//     sum += min;  // 加上第一个数

//     average = sum / count;

//     printf("最大值: %d\n", max);
//     printf("最小值: %d\n", min);
//     printf("平均值: %.2f\n", average);

//     return 0;
// }

// float jiec(int x)
// {
//     int i;
//     float s = 1;
//     for (i = 0; i <= x; i++)
//     {
//         s = s * i;
//     }
//     return 1 / s;
// }

// int main(int argc, char const *argv[])
// {
//     int n, j;
//     float sum = 0.0;
//     scanf("%d", &n);
//     for(j = 1; j <= n; j++)
//         sum = sum + jiec(j);
//         printf("sum=%f\n", sum);
//     return 0;
// }

// // 200~300, 末位数字是6，又能被3整除的数，符合条件的数输出
// int main(int argc, char const *argv[])
// {
//     int i;
//     for (i = 200; i <= 300; i++)
//     {
//         if (i % 10 == 6 && i % 3 == 0)
//         {
//             printf("%d", i);
//         }
//     }

//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     int a, b;
//     printf("%d", (a=5,b=2,a>b?a++:b++,a+b));    
//     return 0;
// }


