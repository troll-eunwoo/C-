//���� �޴�
#include <stdio.h>

void find_PW();
void find_ID();

int main()
{	
	int service;						// ����ڰ� ��û�� ���� ��ȣ ����

	do
	{
		printf("\n <<< 1. ID ã�� 2. PW ã�� 3. �����ϱ� >>> \n");
		printf(" ���ϴ� ���� ��ȣ�� �Է��ϼ���(1~3) ");
		scanf("%d", &service);

		switch (service)
		{
			case 1: find_ID(); break;	// ���̵� ã�� ���� ����
			case 2: find_PW();			// ��й�ȣ ã�� ���� ����
		}
	} while (service != 3);				// 3. �����ϱ⸦ �������� �ʴ� �� ��� �ݺ��ϱ�

	return 0;
}

// ���̵� ã�� ���� �Լ�
void find_ID()
{
	static int count_ID = 0;			// �� �Լ��� ȣ�� Ƚ�� ����

	count_ID++;							// find_ID �Լ��� ȣ��� ������ 1�� ����
	printf("\n �� %dȸ° ID ã�� ��û�Դϴ�. \n", count_ID);
}

// ��й�ȣ ã�� ���� �Լ�
void find_PW()
{
	int count_PW = 0;					// �ڵ�(����) ����

	count_PW++; 
	printf("\n �� %dȸ° ��й�ȣ ã�� ��û�Դϴ�. \n", count_PW);
}
