#include <stdio.h>
// int main()
// {

//     struct Student
//     {
//         long int num;
//         char name[20];
//         char sex;
//         char addr[30];
//     } a = {10101, "Li Lin", 'M', "123 Beijing Road"};

//     //printf("NO.:%ld\nname:%s\nsex:%c\naddress:%s\n", a.num, a.name, a.sex, a.addr);

//     scanf("%ld", &a.num);
//     printf("%p", &a);
//     return 0;
// }

int main() {
    struct Student
    {
        /* data */
        int num;
        char name[20];
        float score;
    };
    
    struct Student student1={001, "shisanjin", 99.9};

    printf("student's num: %d\nname: %s\nscore: %f", student1.num, student1.name, student1.score);
    return 0;
}