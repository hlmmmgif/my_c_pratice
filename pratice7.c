#include<stdio.h>
#include<stdlib.h>
int main()
{
    int N;int fac =1;
    scanf("%d",&N);
    for (int i =1;i <= N;i++)
    {
        fac*=i;
    }
        
    printf("%d\n",fac);
    system("pause");
    return 0;
}
// #include <stdio.h>

// int main() {
//     char ch;

//     printf("Enter an alphabet character: \n");
//     // Using %c to read a single character
//     scanf(" %c", &ch);

//     switch (ch) {
//         case 'a':
//         case 'A':
//         case 'e':
//         case 'E':
//         case 'i':
//         case 'I':
//         case 'o':
//         case 'O':
//         case 'u':
//         case 'U':
//             printf("%c is a Vowel.\n", ch);
//             break;
//小写字母和大写字母元音的语句是并排排列的，之间没有 break 这样的分隔符。例如，如果输入是 'a' ，那么代码会执行位于 'U' 下的那段代码（即第一个带有 break 的语句）。
//         default:
//             printf("%c is a Consonant.\n", ch);
//     }

//     return 0;
// }
//=================标准答案======================
// int main()
// {
//     char alp;
//     printf("Please enter an alphabet:");
//     scanf("%c",&alp);
//     switch(alp)
//     {
//         case 'a':
//         printf("The alphabet is a vowel");
//         break;
//         case 'e':
//         printf("The alphabet is a vowel");
//         break;
//         case 'i':
//         printf("The alphabet is a vowel");
//         break;
//         case 'o':
//         printf("The alphabet is a vowel");
//         break;
//         case 'u':
//         printf("The alphabet is a vowel");
//         break;
//         case 'A':
//         printf("The alphabet is a vowel");
//         break;
//         case 'E':
//         printf("The alphabet is a vowel");
//         break;
//         case 'I':
//         printf("The alphabet is a vowel");
//         break;
//         case 'O':
//         printf("The alphabet is a vowel");
//         break;
//         case 'U':
//         printf("The alphabet is a vowel");
//         break;
//         default:
//             printf("The alphabet is not a vowel");
//     }
//     system("pause");
//     return 0;
// }
// int main()
// {
//     int num =2;
//     printf("--- Multiplication Table for 2 ---\n");
//     for(int i =1;i <=10;i++)
//     {
//         printf("%d x %d = %d\n",num,i,(num * i));
//     }
//     system("pause");
//     return 0;
// }
// int main()
// {
//     int sum = 0;
//     int i = 0;
//     while(i < 20)
//     {
//         i+=2;
//         sum += i;
//     }
//     printf("Sum of even numbers = %d",sum);
//     system("pause");
//     return 0;
// }


// #include<string.h>
// int main(){
//   char word[] = "MrFlySandgithubio";
//   int i,j;
//   char temp;
//   for(i = 0; word[i] != '\0'; i++){
//     for(j = 0; word[j + 1] != '\0'; j++){
//       printf("%d", word[j] > word[j + 1]);
//       if(word[j] > word[j + 1]){
//         temp = word[j];
//         word[j] = word[j + 1];
//         word[j + 1] = temp;
//       }
//       printf("%c ", word[j]);
//     }
//   }
//   system("pause");
//   return 0;
// }  
// int allocate_memory(int **p)//练习21：使用双指针的函数
// {
//     **p = 99;
// }
// int main()
// {
//     printf("data_ptr address before call: (nil)\n");
//     int num;
//     int *ptr1 = &num;
//     int **ptr2 = &ptr1;
//     allocate_memory(ptr2);
//     printf("data_ptr address after call: %p\n",*ptr1);
//     printf("Value accessed via data_ptr: %d\n",**ptr2);
//     system("pause");
//     return 0;
// }
// int main()//练习20：双指针介绍
// {
//     int num = 77;
//     int *ptr1 = &num;
//     int **ptr2 = &ptr1;
//     printf("Original value (num): %d\n",num);
//     printf("Value via *ptr1: %d\n",*ptr1);
//     printf("Value via **ptr2: %d\n",**ptr2);

//     printf("Address of num: %p\n",&num);
//     printf("Value stored in ptr1: %p\n",ptr1);
//     printf("Address of ptr1: %p\n",&ptr1);
//     printf("Value stored in ptr2: %p\n",ptr2);
//     system("pause");
//     return 0;
// }
// int main() {
//     char *message = "C Pointers";//训练14
//     char *p;

//     printf("Printing characters:\n");

//     // Loop using the pointer
//     for (p = message; *p != '\0'; p++) {
//         printf("%c\n", *p);
//     }
//     system("pause");
//     return 0;
// }
// int count_vowels(const char *s) {//练习13
//     int count = 0;
//     const char *p = s;

//     while (*p != '\0') {//以后记住要遍历数组有两种方法，一个是（int i = 0；i < len ;i++) 另一种则是这种
//         char c = *p;

//         // Check if the current character is a vowel (case-insensitive)
//         if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
//             c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
//             count++;
//         }
//         p++; // Move to the next character
//     }
//     return count;
// }

// int main() {
//     char sentence[] = "The quick brown fox Jumps over the lazy dog";
//     int vowels = count_vowels(sentence);

//     printf("Sentence: %s\n", sentence);
//     printf("Total number of vowels: %d\n", vowels); // Output: 11

//     return 0;
// }
// int sum_array(int *numbers,int len)
// {
//     int *p = numbers;
//     for (int i = 0; i < len ; i++)
//     {
        
//     }
// }
// int main()
// {
//     int numbers[] = {10, 5, 8, 2, 15};
//     int len = sizeof(numbers)/sizeof(numbers[0]);

//     system("pause");
//     return 0;
// }
// //===============正确的代码
// #include <stdio.h>

// // Function takes the array base address and size
// int sum_array(int *arr_ptr, int size) {
//     int sum = 0;
//     for (int i = 0; i < size; i++) {
//         // Access the element using pointer arithmetic and dereference
//         sum += *(arr_ptr + i);
//     }
//     return sum;
// }

// int main() {
//     int numbers[] = {10, 5, 8, 2, 15};
//     int size = 5;

//     // Pass the array name (which is the base address)
//     int total = sum_array(numbers, size);

//     printf("The sum of array elements is: %d\n", total); // Output: 40

//     return 0;
// }
// int main()
// {
//     int arr[5] = {1, 2, 3, 4, 5};
//     int other_var = 10;
//     int arr = &other_var;
// }
// int main()
// {
//     int data[5] = {1, 3, 5, 7, 9};
//     int *ptr = data;
//     printf("Array element at index 2 (Value should be 5):\n");
//     printf("1. Subscript notation: %d\n",data[2]);
//     printf("2. Pointer notation (arr + 2): %d\n",*(data + 2));
//     printf("3. Pointer notation (ptr + 2): %d\n",*(ptr + 2));
//     system("pause");
//     return 0;
// }
// int main() {
//     int arr[] = {10, 20, 30, 40, 50};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int *p = arr; // p now points to arr[0]

//     printf("Array elements using pointer arithmetic:\n");

//     for (int i = 0; i < size; i++) {
//         printf("Element %d: %d\n", i, *(p + i));
//         // Alternative: printf("Element %d: %d\n", i, *p); p++;
//     }
//     system("pause");
//     return 0;
// }
// void increment_value(int *p)
// {
//     (*p)++;
// }

// int main()
// {
//     int count = 10;
//     int *p = &count;
//     printf("Before function call, count = %d\n",count);
//     increment_value(p);
//     printf("After function call, count = %d\n",count);
//     system("pause");
//     return 0;
// }
// int main()
// {
//     int a = 10;
//     float b = 20.5f;
//     int *p_a = &a;
//     printf("Address of integer variable 'a': %p\n",&a);
//     printf("Address of float variable 'b': %p\n",&b);
//     printf("Address stored IN pointer 'p_a': %p\n",p_a);
//     printf("Address of pointer variable 'p_a' itself: %p\n",&p_a);
//     system("pause");
//     return 0;
// }
// int custom_strlen(char *myString)
// {
//     int count = 0;
//     while(*myString != '\0')
//     {
//         *myString++;
//         count++;
//     }
//     *myString ='\0';
//     return count;
// }
// int main()
// {

//     char myString[] = "Hello World!";
//     int count = custom_strlen(myString);
//     printf("The string is: %s\n",myString);
//     printf("Length using custom_strlen: %d\n",count);
//     system("pause");
//     return 0;
// }
// char custom_strcpy(char source,char destination)
// {
//     char *ptr = &source;
//     destination = *ptr;
//     return destination;
// }
// int main()
// {
//     char source[] = "Pointer Mastery";
//     char destination[50]; // Ensure destination buffer is large enough
//     printf("Source: %s\n",source);
//     printf("Destination:%s\n",destination);
//     custon_strcpy(source,destination);
//     printf("Source: %s\n",source);
//     printf("Destination:%s\n",destination);
//     system("pause");
//     return 0;
// }
// int square_value(int sv)
// {
//     return (sv)^2;
// }
// int main()
// {
//     int svb_number = 5;
//     int *sv = &svb_number;
//     int sva_number = square_value(*sv);
//     *sv = sva_number;
//     printf("Original value of sv_number: %d\n",svb_number);
//     printf("Value of sv_number after function call: %d\n",*sv);
//     system("pause");
//     return 0;
// }
// int main()
// {
//     int data = 100;
//     int *data_ptr = &data;
//     printf("Initial value of data: %d\n",data);
//     *data_ptr = 250;

//     printf("New value of data (modified via pointer): %d\n",*data_ptr);
//     system("pause");
//     return 0;
// }
// int main()
// {
//     int num = 42;
//     int *ptr = &num;
//     printf("%d\n",num);
//     printf("%d\n",&num);
//     printf("%d\n",ptr);
//     printf("%d\n",*ptr);
//     system("pause");
//     return 0;

// }