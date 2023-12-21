#ifndef function5_h
#define function5_h

#include <stdio.h>
#include "common.h"
#include "function5.h"

/* 학원비 할당 기능 

    - 프로그램 관리자가 매달 1일 기능 시행
    - 기능 시행 시 각 학생의 월 학원비를 현재 내야하는 금액에 더함
    
 */

void allocateAcademyTuition() {

    printf("학원비를 할당합니다.\n");

    // 모든 학생에게 개인별 학원비 추가
    for (int i = 0; i < NUM_students; ++i) {
        float currentAmount = student_Infor[i].paymentAmount;
        currentAmount += student_Infor[i].paymentAmount;
        student_Infor[i].paymentAmount = currentAmount;
    }

    if (NUM_students == 0) {
        printf("등록된 학생이 없습니다. 학원비 할당을 진행할 수 없습니다. \n");
        return;
    }
    printf("학원비가 모든 학생에게 할당되었습니다.\n");
}

#endif
