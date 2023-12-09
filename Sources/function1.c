#ifndef function1_h		// ������� �ߺ� ���� �� ������ ���� ����
#define function1_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "common.h"
#include "function1.h"

/* �п��� ���� ��� */
void recordPayment() {
	char studentName[MAX_namelength];
	float paidAmount;
	char paymentDate[MAX_namelength];

	/* step1 �п��� ������ �л� �̸� �Է� */
	printf("�л� �̸��� �Է��ϼ���: ");
	scanf_s("%s", studentName, sizeof(studentName));

	/* step2 �л� �̸� ã�Ƽ� �ش� �л��� ���� ���� �Է� */
	for (int i = 0; i < NUM_students; ++i) {
		if (strcmp(student_Infor[i][0], studentName) == 0) {
			printf("�����ؾ� �ϴ� �ݾ� : %.2f \n", atof(student_Infor[i][4]));
			printf("������ �ݾ��� �Է��ϼ��� : ");
			scanf_s("%f", &paidAmount);
			printf("���� ���ڸ� �Է��ϼ���(YYYYMMDD): ");
			scanf_s("%s", paymentDate, sizeof(paymentDate));

			/* step3 �л� ���� ������Ʈ */
			strcpy_s(student_Infor[i][3], sizeof(student_Infor[i][3]), paymentDate);
			
			float remainingAmount = atof(student_Infor[i][4]) - paidAmount;
			snprintf(student_Infor[i][4], MAX_namelength, "%.2f", remainingAmount);

			printf("���ΰ� ���������� ó���Ǿ����ϴ�. \n");

			return;
		}
	}
	printf("��ġ�ϴ� �л��� �����ϴ�. �ٽ� �Է����ּ���. \n");
}

#endif
