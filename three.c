#include <stdio.h>
#define MAX 10000

int main()
{
    //1.  ���泣��

    // 3.14 //������
    //10 //����
    //'a' //�ַ�
    //"abcd"  //�ַ���


    //2.   const���εĳ�����
    // const int num = 10; //num���ǳ����� --���г����ԣ����ܱ��ı�����Ըı䣩 
    // printf("%d\n",num);

    // int arr [10] = {0}; //10��Ԫ��

    // const int n = 10;
    // int arr2[n] = {0}; //n�Ǳ����ģ����ﲻ��

    //3.  #define ����ı�ʶ������
    //int n = MAX;
    //printf("%d\n",n); 

    //4.  ö�ٳ���
    //����һһ�оٵĳ���

    //�Ա�
    enum Sex 
    {
        //����ö�����͵ı�����δ������ȡֵ
        //ö�ٳ���
        MALE = 3, //����ֵ
        FEMALE,
        SECRET
    }; 

    enum Sex s = MALE;
    printf("%d\n",MALE);
    printf("%d\n",FEMALE);
    printf("%d\n",SECRET);

    

    return 0;
}