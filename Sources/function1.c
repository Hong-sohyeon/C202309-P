#ifndef function1_h		// ������� �ߺ� ���� �� ������ ���� ����
#define function1_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "common.h"
#include "function1.h"

/* �п��� ���� ��� */
void recordPayment() {
	int paidAmount;

	char studentName[MAX_namelength];
	char paymentDate[MAX_namelength];

	/* step1 �п��� ������ �л� �̸� �Է� */
	printf("�л� �̸��� �Է��ϼ���: ");
	scanf_s("%s", studentName, sizeof(studentName));

	/* step2 �л� �̸� ã�Ƽ� �ش� �л��� ���� ���� �Է� */
	for (int i = 0; i < NUM_students; ++i) {
		if (strcmp(student_Infor[i].name, studentName) == 0) {
			printf("�����ؾ� �ϴ� �ݾ� : %d \n", student_Infor[i].currentAmount[i]);
			printf("������ �ݾ��� �Է��ϼ��� : ");
			scanf_s("%d", &paidAmount);
			printf("���� ���ڸ� �Է��ϼ���(YYYYMMDD): ");
			scanf_s("%s", paymentDate, sizeof(paymentDate));

			/* step3 �л� ���� ������Ʈ */
			strcpy_s(student_Infor[i].paymentDate, sizeof(student_Infor[i].paymentDate), paymentDate);

			int calculator = student_Infor[i].currentAmount[i];

			calculator -= paidAmount;
			student_Infor[i].currentAmount[i] = calculator;
			printf("���ΰ� ���������� ó���Ǿ����ϴ�. \n");

			return;
		}
	}
	printf("��ġ�ϴ� �л��� �����ϴ�. �ٽ� �Է����ּ���. \n");
}

#endif
