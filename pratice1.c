#include <stdio.h>
#include <stdlib.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     if (n % 2 != 0)
//     {
//         printf("%d is 奇数\n",n);
    
//     }
//     else
//     {
//         printf("%d is 偶数\n",n);
//     system("pause");
//     return 0;}
// }
// int main()
// {
//     int age;
//     scanf("%d",&age);
//     if (age >= 18)
//     {
//         printf("成年\n");
//     }
//     else
//     {
//         printf("未成年\n");

//     }
//     return 0;
// }
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     if (n >= 10)
//     {
//         printf("n >= 10\n");
//     }
//     else if(n >= 5 && n < 10)
//     {
//         printf("n >= 5 && n < 10\n");
//     }
//     else
//     {
//         printf("n < 5\n");
//     }
//     system("pause");
//     return 0;
// }


//!逻辑取反符号运算符，&&逻辑与运算符（只有两个为真，整个表达式才为真,任一为假,不执行第二个表达式,即短路与），
//非0为真，0为假
// int main()
// {
//     int n = 0;
//     if (!n)
//     {
//         printf("n为假\n");
//     }
//     else
//     {
//         printf("n为真\n");
//     }
//     printf("%d\n",!n);
//     system("pause");
//     return 0;
// }
// int main()
// {
//     int mouth;
//     scanf("%d",&mouth);
//     if (mouth <= 5 && mouth >= 3)//不能使用连续两个不等式
//     {
//         printf("春天\n");
//     }
//     else
//     {
//         printf("不是春天\n");
//     }
//     system("pause");
//     return 0;
// }
// //||逻辑或运算符(任一为真,结果为真,短路或,第一个为真,不执行后面的表达式)

int main()
{
    int a;
    scanf("%d",&a);
    switch (a)//switch里最好是整形表达式 
    {
        case 1:
            printf("匹配到了1\n");
            break;//除了特殊情况,每一个case语句都要加break,否则会继续执行下面的case语句
        case 2:
            printf("匹配到了2\n");
            break;
        case 3:
            printf("匹配到了3\n");
            break;
        default:
            printf("谁也没匹配到\n");
            break;
    }
    system("pause");
    return 0;
}