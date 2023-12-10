#ifndef common_h
#define common_h

#include <time.h>

#define MAX_students 100
#define MAX_namelength 100

typedef struct {
    char name[MAX_namelength];
    char grade[MAX_namelength];
    char school[MAX_namelength];
    char contact[MAX_namelength];
    float paymentAmount;
    char paymentDate[MAX_namelength];
    time_t startDate;
}STUDENT;

/* 배열 선언 */
STUDENT student_Infor[MAX_students];  //다차원 배열 사용
extern int NUM_students;
extern float academyTuition;

#endif