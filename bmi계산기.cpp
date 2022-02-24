//BMI 계산
#include <stdio.h>

int main()
{
	float key=0;
	float mommugea=0;
	float bmi=0;
	
	printf("몸무게를 입력해라잉");
	scanf("%lf",&mommugea);

	printf("키를 입력해라잉");
	scanf("%lf",&key);
	
	bmi=mommugea/key*key;
	
	printf("님의 BMI지수는 %lf",bmi);
	
	return 0;
}

