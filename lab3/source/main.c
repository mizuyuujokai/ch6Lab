#include<stdio.h>
#include<stdlib.h>
#include<liy.h>

int main() {
	int i;
	student stu[3] = {{"1093602","電子一乙","王曉明",61,71,81},
					  {"1093603","電子一乙","李忠華",92,82,72},
					  {"1093604","電子一乙","張大成",73,63,83}
	};
	student *ps;
	ps = stu;
	printf("\n");
	printf("===================================\n");
	printf("學號 班級\t姓名\t 國文 英文 數學\n");
	printf("===================================\n");

	for (i = 0; i < 3; i++) {
		printf("%6s %-10s %-8s %4d %4d %4d\n", (ps + i)->num, (ps + i)->classes, (ps + i)->name,
		(ps + i)->score[0], (ps + i)->score[1], (ps + i)->score[2]);
	}

	printf("\t呼叫函式前\t");
	sub(ps);
	printf("\n\t呼叫函式後\t\n");

	for (i = 0; i < 3; i++) {
		printf("%6s %-10s %-8s %4d %4d %4d\n", (ps + i)->num, (ps + i)->classes, (ps + i)->name,
			(ps + i)->score[0], (ps + i)->score[1], (ps + i)->score[2]);
	}

	printf("\n");
	system("pause");
	return 0;
}