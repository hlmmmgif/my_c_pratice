#include <stdlib.h>
#include <stdio.h>

int main()
{
    // int x = 5 - 22;
    // printf("%d\n",x);
    // getchar();
    // return 0;
    // int x = 3 % 2;//%表示可求余数，只能用于整数，不能用于浮点数
    // printf("%d\n",x);
    // int a = 10;
    // a++;
    // printf("%d\n",a);//a++或者++a都是让a自增1，区别是第一种a先自增后使用，
    //第二种是先使用后自增，-同理
    //移位运算符：左移时在右边补零，向左移几位，乘2的几次方
    //右移时左边补符号位，符号位时是几就补几，右移相当于除法，-1右移后仍然为-1
    //位操作符：按位与&：对应位上有一，结果就是一。按位或|:对应位上有一，结果就是一。按位异或^:同0异1。按位取反~：取相反值
    // int num = -2;
    // int n =  num >> 1;
    // printf("n = %d\n",n);
    // printf("num = %d\n",num);
    // getchar();
    // return 0;
   
    // int a = 11;
    // int b = 12;
    // printf("%d\n",a > b);//0
    // printf("%d\n",a < b);//1
    // printf("%d\n", a>=b);
    // getchar();
    // return 0;
    int a = 1;
    int b = 2;
    int c = (a > b , a = b + 10, b = a + 1); //逗号表达式，从左向右一次执行，整个表达式劫结果是最后一个表达式的结果
    printf("%d\n",c);
    printf("%d\n",10%-3);  //负数求模（即取余数），结果正负号由第一个运算数的正负号决定
    printf("%d\n",-10%-3);
    getchar();
    return 0;
  



    // // int a;
    // // int b;

    // // scanf("%d%d",&a,&b);
    // // printf("%d,%d",a,b);
    // // getchar();


    // // return 0;
    // char name[11];//只能输10个字符，要留一个给\0
    // scanf("%s",name);//scanf里面有什么就要输入什么，如a=%d，输入时要输入如a = 10
    // printf("%s\n",name);
    // getchar();
    // return 0;








    // system("chcp 65001 > nul");
    // int score = 0;
    // printf("请输入成绩：");
    // scanf("%d",&score);//从键盘获取一个数据，写到变量score里面,取地址符号&，d表整数
    // printf("%d\n",score);
    // getchar();
    // getchar(); 
    // return 0;
    
    // int main()
// {
   
//    printf("Change\nWorld\n");
//    printf("by yourself");
//    printf("There are %d apples,%d bananas\n",3,9);//%d为占位符，%s代入字符串
//    printf("%5d\n",123);//不足5位，前面加空格
//    printf("%5d\n",12345);
//    printf("%5d\n",123456);//超过5位，是几位输出几位,加负号左对齐，默认右对齐

//    printf("Number is %.2f\n",0.5);
//    printf("%6.2f\n",0.5);//6代表数据宽度为6，包含小数点，小数位数为2
//    getchar();
//    return 0;
   

   
   
   
   
    // // int a =10;//常量不变
    // float f = 12.5f;
    // // int a = f;
    // int a = (int)f;//()括号内为强制转换成什么类型
    // //强转只是改变类型不改变值，强转有可能丢失数据
    // //什么情况下需要强转？最好是大类型给小类型
    // int s = 32768;//数据溢出32768
    // short c = s;
    // printf("%d\n",c);
    // return 0;
}