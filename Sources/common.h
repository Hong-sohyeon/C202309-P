#ifndef common_h
#define common_h

#include <time.h>

#define MAX_students 100
#define MAX_namelength 100

/* �迭 ���� */
extern char student_Infor[MAX_students][6][MAX_namelength];  //������ �迭 ���
extern int NUM_students;
extern time_t startDate;

#endif