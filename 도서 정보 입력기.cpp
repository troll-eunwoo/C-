//���� ���� �Է±�
#include <stdio.h>
#include <stdlib.h>// malloc, free, exit �Լ��� ���� ��� ����

struct book_info
{
	int year;		// ���ǳ⵵
	char title[12];	// ������	
};
typedef struct book_info BOOK;	

int main()
{
 	BOOK *books;		// ���� ������ ������ ���� �迭�� ����ų ������
	int size, i;		// ������ �Է¹��� ���� �Ǽ� 
 	
	do					// ���� �Ǽ� �Է�(1�̻��� �� �Է¹ޱ�)
	{
		printf("������ �Է��� ���� �Ǽ� : "); scanf("%d", &size); 
		if (size <= 0)
			printf("���� : �Ǽ��� �߸� �Է��Ͽ����ϴ�. �ٽ� �Է��ϼ��� ");
	} while (size <= 0);

 	// ���� �Ǽ���ŭ ������ ������ ������ �Ҵ�ޱ�
	books = (BOOK*) malloc(sizeof(BOOK)*size); // ����ü �迭�� ���� ���� �Ҵ�
	if (books == NULL)
	{
		puts("���� : �޸� �Ҵ� ���з� ���α׷��� �����մϴ�.");
		exit(1);		// ���α׷� ���� �ߴ�
	 }
 
 	// size���� ���� ���� �Է�
	for (i=0; i<size; i++)
	{
  		printf("%d) ���� �̸� : ", i+1); 
		fflush(stdin);	// �Է¿� ���� ���� 
		gets(books[i].title); 
	
  		printf("   ���ǳ⵵ : "); 
		scanf("%d", &(books[i].year));
	}
	
 	// size���� ���� ���� ���	
	printf("\n >> ���� ���� ��� << \n");
	printf("\n ���� ������ ���ǳ⵵  ");
	printf("\n =====================\n");
 	for (i=0; i<size; i++)
	{
  		printf("%3d %-12s %4d\n", i+1, books[i].title, books[i].year);
 	}
	printf(" =====================\n");

	free(books); // ����ü �迭�� ���� ���� �Ҵ� ������ ����

 	return 0;
}

