
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
enum Sex
{
    male,female,secret
};
int main()
{
	enum Sex sex = male;
	sex = female;
	printf("%d\n",sex);//��%d�����1 %f�����0.00000? Ϊ�Σ�
                       //�ܿ�������Ϊ enum ������ǳ������ø���������������д�
 
    return 0;
}
