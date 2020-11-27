#include<stdio.h>
typedef struct _studen {
	char num[7];
	char classes[20];
	char name[20];
	int score[3];

}student;

void sub(student *p) {
	for (int i = 0; i < 3; i++) {
		(p + i)->score[0] += 10;
		(p + i)->score[1] += 10;
		(p + i)->score[3] += 10;
	}
}
