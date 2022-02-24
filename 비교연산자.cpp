#include <stdio.h>
//비교 연산자 
int main()
{
	int a = 1; 
	int b = 2; 
	
	printf("a와 b를 비교:%d\n",a>b);
	printf("a와 b를 비교:%d",a<b);
	printf("a와 b를 비교:%d",a!=b);//!=는 다르면 참(1)이 나옴 
	return 0;
}
