//�迭 ��� �ּڰ� ���ϱ� 

#include <stdio.h>
#define SIZE 5

// �Լ��� ���� ����
int find_min(int arr[]);
void print_arr(int arr[]);

// main �Լ��� ����
int main()
{
	int f[SIZE] = {3, 0, -30, -20, -1}; // �迭�� ����� ���ÿ� �ʱ�ȭ�ϱ�
 	int min;

	// �ּڰ� ���ϱ�
	min = find_min(f);

	// �迭 ���� ����ϱ�
	printf("��� �� ���:");
	print_arr(f);

	// �ּڰ� ����ϱ�
	printf("\n���� ���� ��� ��: %d \n", min);

	return 0;
}

// �迭�� �ּڰ��� ���ϴ� �Լ�
int find_min(int arr[])
{
	int i, min;

	min = arr[0];
	for (i=1; i<SIZE; i++)
	{
		if (arr[i] > min)
			min = arr[i];
	}
	
	return min;
}

// �迭�� ���Ҹ� ����ϴ� �Լ�
void print_arr(int arr[])
{
	int i;

	for (i=0; i<SIZE; i++)
		printf("%4d", arr[i]);
}
