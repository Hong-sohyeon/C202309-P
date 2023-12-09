#ifndef function1_h		// 헤더파일 중복 포함 및 컴파일 에러 방지
#define function1_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "common.h"
#include "function1.h"

/* 학원비 납부 기능 */
void recordPayment() {
	char studentName[MAX_namelength];
	float paidAmount;
	char paymentDate[MAX_namelength];

	/* step1 학원비 납부한 학생 이름 입력 */
	printf("학생 이름을 입력하세요: ");
	scanf_s("%s", studentName, sizeof(studentName));

	/* step2 학생 이름 찾아서 해당 학생의 납부 정보 입력 */
	for (int i = 0; i < NUM_students; ++i) {
		if (strcmp(student_Infor[i][0], studentName) == 0) {
			printf("납부해야 하는 금액 : %.2f \n", atof(student_Infor[i][4]));
			printf("납부한 금액을 입력하세요 : ");
			scanf_s("%f", &paidAmount);
			printf("납부 일자를 입력하세요(YYYYMMDD): ");
			scanf_s("%s", paymentDate, sizeof(paymentDate));

			/* step3 학생 정보 업데이트 */
			strcpy_s(student_Infor[i][3], sizeof(student_Infor[i][3]), paymentDate);
			
			float remainingAmount = atof(student_Infor[i][4]) - paidAmount;
			snprintf(student_Infor[i][4], MAX_namelength, "%.2f", remainingAmount);

			printf("납부가 정상적으로 처리되었습니다. \n");

			return;
		}
	}
	printf("일치하는 학생이 없습니다. 다시 입력해주세요. \n");
}

#endif
