#ifndef function2_h
#define function2_h

#include <stdio.h>
#include "common.h"
#include "function2.h"

/* 미납 학생 관리 기능 */
void tuition_unpaidStudent() {

    int unpaidCount = 0;

    printf("\n[미납 학생 목록]\n");

    for (int i = 0; i < NUM_students; ++i) {
        if (student_Infor[i].currentAmount[i] > 0) {
            printf("이름: %s\t", student_Infor[i].name);
            printf("미납 금액: %d \n\n", student_Infor[i].currentAmount[i]);
            unpaidCount++;
        }
    }

    if (unpaidCount == 0) {
        printf("미납 학생이 없습니다. \n");
    }
}

#endif