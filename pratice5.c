#include <stdio.h>
#include <stdlib.h>

// 二维数组例如0，1为行，0，1，2为列
// 如何创建二维数组实例： int arr[2][3]表示一个2行3列的二维数组

// int main()
// {
//     int arr[2][3] = {0}; // 完全初始化

//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }

//     printf("\n");

//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }

//     // printf("%d\n", arr[0][2]);
//     // printf("%d\n", arr[1][0]);
//     // printf("%d\n", arr[1][2]);

//     // int arr2[2][3] = {{1,2,3},{4,5,6}}; // 指定行和列初始化
//     // int arr2[][3] = {{1,2,3},{4,5,6}};  // C语言中可以省略行不能省略列，通过行和列结合进行访问

//     system("pause");
//     return 0;
// }
// int main()
// {
//     int arr[3][3] = {{1,2,3}, {4,5,6},{7,8,9}};
//     for (int i = 0;i < 3 ; i++)
//     {
//         for (int j = 0 ; j < 3 ; j++)
//         {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
//     for (int i = 0;i < 3 ; i++)
//     {
//         for (int j = i +1 ; j < 3 ; j++)
//         {
//             int tmp = arr[i][j];
//             arr[i][j] = arr[j][i];
//             arr[j][i] = tmp;
            
//         }
//     }
//     printf("===========================\n");
   
//     for (int i = 0;i < 3 ; i++)
//     {
//         for (int j = 0 ; j < 3 ; j++)
//         {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
    
    
//     system("pause");
//     return 0;
// }

//库函数：printf() scanf()
//自定义函数ret_typefun_name(形式参数){}ret_type是函数返回类型，fun_names是函数名，括号中放的是形式参数，{}括起来的是函数体


// int add(int a,int b)
// {
//     printf("add函数确实被调用了");
//     int ret = a + b;
//         return ret;
// }
// //int fac(int n);可作为函数的声明，告诉编译器fac函数的存在，方便在main函数中调用fac函数
// int fac(int n)
// {
//     int ret = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         ret *= i;

//     }
//     return ret;
// }
// int main()
// {
//     int x = 5;
//     int ret = fac(x);
//     printf("%d",ret);
//     system("pause");
//     return 0;
// }
// int is_leap_year(int year)
// {
//     if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//    {
//     return 1;
//    }
//    else
//    {
//     return 0;
//    }
// }
// int main()
// {
//     for (int year = 2000; year <= 2026; year++)
//     {
//         int ret = is_leap_year(year);
//         if (ret == 1)
//         {
//             printf("%d是闰年\n", year);
//         }
//         else if(ret == 0)
//         {
//             printf("%d不是闰年\n",year);
//         }
//     }


//     system("pause");
//     return 0;
// }


 


    
