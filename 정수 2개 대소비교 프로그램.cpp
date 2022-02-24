//정수 2개 대소비교 프로그램
#include <stdio.h> 

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d",&a);
    scanf("%d",&b);
    if(a>b)
    {
    	printf("%d이/가 %d보다 크다",a,b);
	}
	else if(a<b)
    {
    	printf("%d이/가 %d보다 작다",a,b);
	}
	else 
	{
		printf("둘다 %d로 같은수",a);
	}
}
