#ifndef common_h
#define common_h

#include <time.h>

#define MAX_students 100       // �ִ� �л� �� ����
#define MAX_namelength 100     // �̸� �ִ� ���� ����

typedef struct {
    char name[MAX_students];
    char grade[MAX_students];
    char school[MAX_students];
    char contact[MAX_students];
    int paymentAmount;
    char paymentDate[MAX_students];
}STUDENT;

/* �迭 ���� */
STUDENT student_Infor[MAX_students];  //������ �迭 ���
extern int NUM_students;
extern float academyTuition;

#endif