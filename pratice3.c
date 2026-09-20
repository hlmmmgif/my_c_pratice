#include <stdio.h>
#include <stdlib.h>
// int main()
// {
//     int i = 1;
//     for (int i = 1;i <= 100;i++)
//     {
//         if (i % 5 == 0 && i % 6 == 0)
//         {
//             printf("%d\n",i);
//             break;
//         }
//     }
    
//     system("pause");
//     return 0;
// }


// {
//     int arr[5] = {0};
//     for (int i = 1;i < 5; i++)
//     {
//         scanf("%d\n",&arr[i]);
//     }



    // int arr[5] = {1,2,3,4,5};//长度为5的整形数组，每个元素是4个字节，地址间隔也是4
    // int brr[5] = {1,2};//局部初始化
    // int crr[] = {1,2};//根据元素数变换，下标从0开始
    // for (int i = 0;i < 5; i++)
    // {
    //     printf("%d\n",arr[i]);
    // }
    // printf("%d\n",arr[0]);
    // printf("%d\n",arr[1]);
    // printf("%d\n",arr[2]);
    // printf("%d\n",arr[3]);
    // printf("%d\n",arr[4]);
    // printf("%d\n",arr[5]);//越界访问
//     system("pause");
//     return 0;
//
// int main()//逆置数组
// {
//     int arr[5] = { 1,2,3,4,5};
//     int len = sizeof(arr) / sizeof(arr[0]);

//     int i = 0;
//     int j = len - 1;

//     for (int i = 0; i < len; i++)
//     {
//         printf("%d",arr[i]);
//     }

//     printf("\n");

//     while (i < j)
//     {
//         int tmp = arr[i];
//         arr[i] = arr[j];
//         arr[j] = tmp;
//         i++;
//         j--;
//     }


//     for (int i = 0; i < len; i++)
//     {
//         printf("%d",arr[i]);
//     }


//     system("pause");
//     return 0;
// }
int main()
{
    int arr[5] = {1,2,3,4,5};
    int len = sizeof(arr)/ sizeof(arr[0]);
    for (int i = 0; i < len; i++)
    {
        arr[i] = arr[i] * 2;
        printf("%d\n", arr[i]);
    }

    system("pause");
    return 0;

}