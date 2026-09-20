#include <stdio.h>
#include <stdlib.h>
//怎么去求指针+1（无论是几级指针）后到底加几个字节：  去掉* 求sizeof
//1找习题做 2函数指针 3函数指针数组 4查一下const 结合指针学习
int main()
{
    int a = 10;int b = 20;int c = 30;
    int *arr[] = {&a,&b,&c};
    //表示什么 表示&arr[1]
    printf("%d\n",*(arr + 1));
    //表示什么  表示arr[1](里面的内容即b的地址)
    printf("%d\n",**(arr + 1));
    system("pause");
    return 0;
}
//用指针存储字符串：char *pc = "boge" 指针里面存储字符b的地址，访问时找到b后再找到后面的oge进行访问
//arr + 1 加的是4个字节（前提是整形数组）     &arr + 1加的是整个数组的字节大小（前提是整形数组）
//指针数组：是存放指针的数组，每个元素都是指针（类似于整型数组，即存放整形数据的数组）
//数组指针（int (*p）[5]    (*p)表示p是一个指针，此时这个指针指向的是长度为5的数组，该数组是int类型的数组)：是指向数组的指针（&arr获取数组的地址）
// pulPty = pulArray与pulPtr = &pulArray[0]等价（即数组名：表示数组首元素的地址）
//arr指的是数组首元素的地址，而&arr是整个数组的地址    *(p + i)与p[i]等价
//为了避免int len = sizeof(arr)/sizeof(arr[0])前面的arr退化为指针，尽量定义好数组后紧接着求数组的长度
//二级指针：主要作用于一级指针的地址（int **p2）在解引用操作中，一个星号表示解引用1次

// int main()
// {
//     int arr[] = {1,2,3,4,5,6,7,8,9,10};
//     int *p = &arr[0];
//     int *p1 = &arr[1];
//     printf("%p\n",p);
//     printf("%p\n",arr[0]);
//     printf("%p\n",p + 1);
//     printf("%p\n",arr[1]);
// //指针加1加几个字节，取决于指针类型，如果是int类型的指针加4个字节
// //对于解引用来说，当前指针是什么类型的指针决定了你的访问能力，如果是int*类型的，解引用就访问4个字节，*char类型访问一个字节
// //大小端字节序：大端序：高位（数字位数高的）字节存储在内存的低地址处 小端序：低位字节存储在内存的低地址处
// //野指针：指针指向位置不可知（随机，不正确，没有准确指向内存）
//     system("pause");
//     return 0;
// }
//怎么表示一个变量的地址 &a 怎么存一个变量的地址 指针变量
// int main()
// {
//     char c = 'a';
//     char * pc = &c;
//     printf("%c\n",*pc);
//     //加*号这个操作叫做解引用：访问当前指针变量pc所存储的地址表示的内存当中的数据
//     //指针大小取决于编译器是32位（4字节）还是64位（8字节）的
//     //32（系统最大2^32字节4GB），64（最大2^64字节）位下int类型都是4个字节
//     short sh = 10;
//     short* ps = &sh;
// }
// int main()
// 
//     int i = 1;
//     while (i <= 10)
//     {
//         printf("%d\n", i);
//         i++;
//     }
//     system("pause");
//     return 0;

// // 

// int main()
// {
//     int i = 1;
//     int ret = 1;
//     while (i <= 5)
//     {
//         ret = ret * i;
//         i++;
//     }
//     printf("%d\n", ret);
//     system("pause");
//     return 0;
// }
//for循环表达式1用于循环变量的初始化，表达式2用于循环结束条件的判断，表达式3用于循环变量的调整
// 
// int main()
// {
//     int sum = 0;
//     for (int i = 1; i <= 100; i++)
//     {
//         if (i % 2 == 0)
//         {
//             sum += i;//sum = sum + i;
//         }
//     }
//     printf("%d\n", sum);
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int i , j;
//     for (i = 1; i <= 9; i++)
//     {
//         for(j = 1; j <= i; j++)
//         {
//             printf("%d * %d = %d ", i,j,i*j);
//         }
//         printf("\n");
//     }
//     system("pause");
//     return 0;
// }
// int main()
// {   
//     int a = 24;
//     int b = 18;
//     int c = a % b;
//     int d = a % b/c;
//     while (c != 0)
//     {
//         a = b;
//         b = c;
//         c = a % b;

//     }
//     printf("%d\n",d);
//     system("pause");
//     return 0;
// }
// int main()
// {
//     int times = 0;
//     for (int i = 9; i <= 100; i += 10)
//     {
//         for (int j = 90; j <= 100;j++)
//         {
//             for (int k = 0; k <= 10; k++)
//             {
//                 while (i % 9 == k || j % 9 ==k)
//                 {
//                     times++;
//                 }
//             }

//         }
//     }
//     printf("%d\n", times++);
//     system("pause");
//     return 0;
// }
// int arr[5] = {1, 2, 3, 4, 5};
// int len = sizeof(arr) / sizeof(arr[0]);
// void Print(int arr[],int len)
// {
//     for (int i = 0; i < len; i++)
//     {
//         printf("%d\n", arr[i]);
//     }
// }
// // int Reverse(int arr[], int len)
// {
//     int i = 0;
//     int j = len - 1;
//     while (i < j)
//     {
//         int tmp = arr[i];
//         arr[i] = arr[j];
//         arr[j] = tmp;
//         i++;
//         j--;
//     }
// }
// int main()
// {
//     Print(arr, len);
//     Reverse(arr, len);
//     printf("\n");
//     Print(arr, len);
//     system("pause");
//     return 0;
// }
//数组传参的重要特性：函数的实参是数组，形参也是可以写成数组形式，形参如果是一维数组，数组大小可忽略
//数组传参，形参是不会创建新的数组的（即形参操作的数组和实参的数组是同一个数组）本质传递数组首地址
// void set_arr(int arr[], int val, int len)
// {
//     for (int i = 0; i < len; i++)
//     {
//         arr[i] = val;
//     }
// }
// int main()
// {
//     int arr[5] = {0};
//     int len = sizeof(arr) / sizeof(arr[0]);
//     set_arr(arr, -1, len);
//     Print(arr, len);
//     system("pause");
//     return 0;
// }
//明确目的输入两个升序的序列，合并成一个有序序列并输出
// int main()
// {
//     int n;int m;
//     scanf("%d %d", &n, &m);
//     int arr1[n];int arr2[m];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr1[i]);
//         printf("%d ", arr1[i]);
//     }
//     printf("\n");
//     for (int i = 0; i < m; i++)
//     {
//         scanf("%d", &arr2[i]);
//         printf("%d ", arr2[i]);
//     }
//     int j = 0;int k = 0;
//     while (j < n && k < m)
//     {
//         if(arr1[j] < arr2[k])
//         {
//             printf("%d", &arr1[j]);
//             j++;
//         }
//         else
//         {
//             printf("%d", &arr2[k]);
//             k++;
//         }
//     }
//     if (j < n)
//     {
//         printf("%d", arr1[j]);
//         j++;
//     }
//     if (k < m)
//     {
//         printf("%d", arr2[k]);
//         k++;
//     }
    
// //首先保证2个数组都有元素i < n && j < m 2每次下标i和j比较，谁小打印谁 3

    
//     return 0;
// }
//static静态局部变量(运行程序时被创建，结束程序时销毁)
//extern int g_val(跨.c文件使用全局变量) 全局变量加上static，会改变其作用域，只能在当前的.c文件使用
//extern Add（引入函数）加上static也只能在当前的.c文件使用
//递归定义：一个起始条件，一个递推公式（递归必要条件：1将原问题划分为子问题，子问题与原问题解法相同 2递归出口）
// int add(int n)
// {
//     if (n == 1 || n == 2)
//     {
//         return 1; 
//     }
//     else
//     {
//         return add(n-1) + add(n-2);
//     }
// }
// int Pow(int n,int k)
// {
//     if (k == 0)
//     {
//         return 1;
//     }
//     if (k != 0)
//     {
//         return n * Pow(n, k -1 );
//     }
// }
// int main()
// {
//     int n,k;
//     scanf("%d%d",&n,&k);
//     int ret = Pow(n,k);
//     printf("%d\n", ret);
//     system("pause");
//     return 0;
// }
