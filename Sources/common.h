#ifndef common_h
#define common_h

#include <time.h>

#define MAX_students 100
#define MAX_namelength 100

/* 배열 선언 */
extern char student_Infor[MAX_students][6][MAX_namelength];  //다차원 배열 사용
extern int NUM_students;
extern time_t startDate;

#endif