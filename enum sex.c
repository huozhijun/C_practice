
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
	printf("%d\n",sex);//用%d输出是1 %f输出是0.00000? 为何？
                       //很可能是因为 enum 本身就是常量，用浮点数的来输出会有错
 
    return 0;
}
