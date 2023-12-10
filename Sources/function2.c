#ifndef function2_h
#define function2_h

#include <stdio.h>
#include "common.h"
#include "function2.h"

void tuition_unpaidStudent() {
    printf("\n미납 학생 목록\n");

    time_t currentTime;
    time(&currentTime);

    int unpaidCount = 0;

    for (int i = 0; i < NUM_students; ++i) {
        if (atof(student_Infor[i][4]) > 0) {  // 수정된 부분
            printf("이름: %s\t", student_Infor[i][0]);
            printf("미납 금액: %.2f \n\n", atof(student_Infor[i][4]));
            unpaidCount++;
        }
    }

    if (unpaidCount == 0) {
        printf("미납 학생이 없습니다. \n");
    }
}

#endif