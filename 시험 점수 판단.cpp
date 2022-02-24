//시험 점수 등급
#include <stdio.h> 

int main()
{
	int a = 0;
	scanf("%d",&a);
	
	if(a>100)
	{
	printf("부정행위다 짜쉭아"); 
	}
    else if(a>80)
	{
	printf("%d점이구나! 합격!",a); 
	}
    else if(a>50)
	{
	printf("%d점! 합격....",a); 
	}
	else
	{
	
	printf("재시험이다 짜쉭",a);
	}
	
}
