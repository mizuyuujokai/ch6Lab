#include<stdio.h>
#include<stdlib.h>
#include<liy.h>

int main() {
	int i;
	student stu[3] = {{"1093602","�q�l�@�A","�����",61,71,81},
					  {"1093603","�q�l�@�A","������",92,82,72},
					  {"1093604","�q�l�@�A","�i�j��",73,63,83}
	};
	student *ps;
	ps = stu;
	printf("\n");
	printf("===================================\n");
	printf("�Ǹ� �Z��\t�m�W\t ��� �^�� �ƾ�\n");
	printf("===================================\n");

	for (i = 0; i < 3; i++) {
		printf("%6s %-10s %-8s %4d %4d %4d\n", (ps + i)->num, (ps + i)->classes, (ps + i)->name,
		(ps + i)->score[0], (ps + i)->score[1], (ps + i)->score[2]);
	}

	printf("\t�I�s�禡�e\t");
	sub(ps);
	printf("\n\t�I�s�禡��\t\n");

	for (i = 0; i < 3; i++) {
		printf("%6s %-10s %-8s %4d %4d %4d\n", (ps + i)->num, (ps + i)->classes, (ps + i)->name,
			(ps + i)->score[0], (ps + i)->score[1], (ps + i)->score[2]);
	}

	printf("\n");
	system("pause");
	return 0;
}