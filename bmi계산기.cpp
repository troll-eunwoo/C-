//BMI ���
#include <stdio.h>

int main()
{
	float key=0;
	float mommugea=0;
	float bmi=0;
	
	printf("�����Ը� �Է��ض���");
	scanf("%lf",&mommugea);

	printf("Ű�� �Է��ض���");
	scanf("%lf",&key);
	
	bmi=mommugea/key*key;
	
	printf("���� BMI������ %lf",bmi);
	
	return 0;
}

