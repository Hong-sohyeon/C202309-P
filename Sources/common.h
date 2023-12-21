#ifndef common_h
#define common_h

#include <time.h>

#define MAX_students 100       // 최대 학생 수 정의
#define MAX_namelength 100     // 이름 최대 길이 정의

typedef struct {
    char name[MAX_students];
    char grade[MAX_students];
    char school[MAX_students];
    char contact[MAX_students];
    int paymentAmount;
    char paymentDate[MAX_students];
}STUDENT;

/* 배열 선언 */
STUDENT student_Infor[MAX_students];  //다차원 배열 사용
extern int NUM_students;
extern float academyTuition;

#endif