#ifndef function5_h
#define function5_h

#include <stdio.h>
#include "common.h"
#include "function5.h"

void allocateAcademyTuition() {

    printf("학원비를 할당합니다.\n");

    // 모든 학생에게 학원비 추가
    for (int i = 0; i < NUM_students; ++i) {
        float currentAmount = student_Infor[i].paymentAmount;
        currentAmount += student_Infor[i].paymentAmount;
        student_Infor[i].paymentAmount = currentAmount;
    }

    printf("학원비가 모든 학생에게 할당되었습니다.\n");
}

#endif
