#ifndef function2_h
#define function2_h

#include <stdio.h>
#include "common.h"
#include "function2.h"

/* �̳� �л� ���� ��� */
void tuition_unpaidStudent() {
    printf("\n�̳� �л� ���\n");


    int unpaidCount = 0;

    for(int i = 0; i < NUM_students; ++i) {
        if (student_Infor[i].paymentAmount > 0) {
            printf("�̸�: %s\t", student_Infor[i].name);
            printf("�̳� �ݾ�: %d \n\n", student_Infor[i].paymentAmount);
            unpaidCount++;
        }
    }

    if (unpaidCount == 0) {
        printf("�̳� �л��� �����ϴ�. \n");
    }
}

#endif