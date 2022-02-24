//짝수,홀수,양수,음수 판단 프로그램
#include <stdio.h> 

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d",&a);
	if(a%2==0)
	{
	    printf("%d는 짝수",a);
	    if(a<0)
	    {
	    	printf("%d는 음수",a);	
		}
		else 
		{
			printf("%d는 양수",a);
		}
	    
	}
	else
	{
	    printf("%d는 홀수",a);
    	if(a<0)
		{
	    	printf("%d는 음수",a);	
		}
		else
		{  
	    	printf("%d는 양수",a);
		}
			
	    
	}
	
    
}
		
