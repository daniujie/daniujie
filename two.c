#include<stdio.h>

// int main()
// {
//     �ַ����� - ������һ��ͬ���͵�Ԫ��
//     �ַ����ڽ�β��λ��������һ��\0���ַ�
//     \0���ַ����Ľ�����־
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
    //��һ���ַ����ĳ���
    //��ӡ�ַ���

    char arr1 [] = "abc";
    char arr2 [] = {'a','b','c','\0'};

    // int len = strlen("abc");//string length
    // printf("%d\n",len);

    printf("%d\n",strlen(arr1));
    printf("%d\n",strlen(arr2));

    return 0;
}