#include<stdio.h>

// int main()
// {
//     字符数组 - 数组是一组同类型的元素
//     字符串在结尾的位置隐藏了一个\0的字符
//     \0是字符串的结束标志
//     char arr [] = "hello";

//     char arr1 [] = "abc";
//     char arr2 [] = {'a','b','c','\0'};
//     printf("%s\n",arr1);
//     printf("%s\n",arr2);

//     return 0;
// }

#include <string.h>

int main()
{
    //求一下字符串的长度
    //打印字符串

    char arr1 [] = "abc";
    char arr2 [] = {'a','b','c','\0'};

    // int len = strlen("abc");//string length
    // printf("%d\n",len);

    printf("%d\n",strlen(arr1));
    printf("%d\n",strlen(arr2));

    return 0;
}