#ifndef function5_h
#define function5_h

#include <stdio.h>
#include "common.h"
#include "function5.h"

/* �п��� �Ҵ� ��� 

    - ���α׷� �����ڰ� �Ŵ� 1�� ��� ����
    - ��� ���� �� �� �л��� �� �п��� ���� �����ϴ� �ݾ׿� ����
    
 */

void allocateAcademyTuition() {

    printf("�п��� �Ҵ��մϴ�.\n");

    // ��� �л����� ���κ� �п��� �߰�
    for (int i = 0; i < NUM_students; ++i) {
        float currentAmount = student_Infor[i].paymentAmount;
        currentAmount += student_Infor[i].paymentAmount;
        student_Infor[i].paymentAmount = currentAmount;
    }

    if (NUM_students == 0) {
        printf("��ϵ� �л��� �����ϴ�. �п��� �Ҵ��� ������ �� �����ϴ�. \n");
        return;
    }
    printf("�п��� ��� �л����� �Ҵ�Ǿ����ϴ�.\n");
}

#endif
