#ifndef function5_h
#define function5_h

#include <stdio.h>
#include "common.h"
#include "function5.h"

void allocateAcademyTuition() {

    printf("�п��� �Ҵ��մϴ�.\n");

    // ��� �л����� �п��� �߰�
    for (int i = 0; i < NUM_students; ++i) {
        float currentAmount = student_Infor[i].paymentAmount;
        currentAmount += student_Infor[i].paymentAmount;
        student_Infor[i].paymentAmount = currentAmount;
    }

    printf("�п��� ��� �л����� �Ҵ�Ǿ����ϴ�.\n");
}

#endif
