#include <stdio.h>
#define MAX 10000

int main()
{
    //1.  字面常量

    // 3.14 //浮点型
    //10 //整型
    //'a' //字符
    //"abcd"  //字符串


    //2.   const修饰的常变量
    // const int num = 10; //num就是常变量 --具有常属性（不能被改变的属性改变） 
    // printf("%d\n",num);

    // int arr [10] = {0}; //10个元素

    // const int n = 10;
    // int arr2[n] = {0}; //n是变量的，这里不行

    //3.  #define 定义的标识符常量
    //int n = MAX;
    //printf("%d\n",n); 

    //4.  枚举常量
    //可以一一列举的常量

    //性别
    enum Sex 
    {
        //这种枚举类型的变量的未来可能取值
        //枚举常量
        MALE = 3, //赋初值
        FEMALE,
        SECRET
    }; 

    enum Sex s = MALE;
    printf("%d\n",MALE);
    printf("%d\n",FEMALE);
    printf("%d\n",SECRET);

    

    return 0;
}