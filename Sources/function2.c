#ifndef function2_h
#define function2_h

#include <stdio.h>
#include "common.h"
#include "function2.h"

void tuition_unpaidStudent() {
    printf("\n�̳� �л� ���\n");

    time_t currentTime;
    time(&currentTime);

    int unpaidCount = 0;

    for (int i = 0; i < NUM_students; ++i) {
        if (atof(student_Infor[i][4]) > 0) {  // ������ �κ�
            printf("�̸�: %s\t", student_Infor[i][0]);
            printf("�̳� �ݾ�: %.2f \n\n", atof(student_Infor[i][4]));
            unpaidCount++;
        }
    }

    if (unpaidCount == 0) {
        printf("�̳� �л��� �����ϴ�. \n");
    }
}

#endif