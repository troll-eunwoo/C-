//���� 2�� ��Һ� ���α׷�
#include <stdio.h> 

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d",&a);
    scanf("%d",&b);
    if(a>b)
    {
    	printf("%d��/�� %d���� ũ��",a,b);
	}
	else if(a<b)
    {
    	printf("%d��/�� %d���� �۴�",a,b);
	}
	else 
	{
		printf("�Ѵ� %d�� ������",a);
	}
}
