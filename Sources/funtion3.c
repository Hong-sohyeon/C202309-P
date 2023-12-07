#include <stdio.h>
#include "function3.h"


void student_Information_Management() {
	int choice;
	char modifying_Infor[MAX_namelength];
	char searchStudent[MAX_namelength];


	printf(" 학생 정보를 등록/수정 합니다.\n");

	printf("(1) 학생 정보 등록\n");
	printf("(2) 학생 정보 수정\n");
	printf("(3) 학생 정보 조회\n");

	printf(" 원하는 기능을 선택하세요 \n");

	scanf_s("%d", &choice);

	switch (choice) {
		/* 학생 정보 등록 */
	case 1:
		printf(" 새로운 학생 정보를 입력하세요 \n");
		printf(" 학생 이름: ");
		scanf_s("%s", student_Infor[NUM_students][0], sizeof(student_Infor[NUM_students][0]));
		printf(" 학생 학년: ");
		scanf_s("%s", student_Infor[NUM_students][1], sizeof(student_Infor[NUM_students][1]));
		printf(" 학생 학교: ");
		scanf_s("%s", student_Infor[NUM_students][2], sizeof(student_Infor[NUM_students][2]));
		printf(" 학생 연락처: ");
		scanf_s("%s", student_Infor[NUM_students][3], sizeof(student_Infor[NUM_students][3]));
		printf(" 납부 금액: ");
		scanf_s("%s", student_Infor[NUM_students][4], sizeof(student_Infor[NUM_students][4]));

		NUM_students++;

		break;
		/* 학생 정보 수정 */
	case 2:
		printf(" 수정할 학생의 이름을 입력하세요: ");
		scanf_s("%s", modifying_Infor, sizeof(modifying_Infor));

		for (int i = 0; i < NUM_students; ++i) {
			if (strcmp(student_Infor[i][0], modifying_Infor) == 0) {
				printf(" 학생 이름: ");
				scanf_s("%s", student_Infor[NUM_students][0], sizeof(student_Infor[NUM_students][0]));
				printf(" 학생 학년: ");
				scanf_s("%s", student_Infor[NUM_students][1], sizeof(student_Infor[NUM_students][1]));
				printf(" 학생 학교: ");
				scanf_s("%s", student_Infor[NUM_students][2], sizeof(student_Infor[NUM_students][2]));
				printf(" 학생 연락처: ");
				scanf_s("%s", student_Infor[NUM_students][3], sizeof(student_Infor[NUM_students][3]));
				printf(" 납부 금액: ");
				scanf_s("%s", student_Infor[NUM_students][4], sizeof(student_Infor[NUM_students][4]));

				printf("정상적으로 수정되었습니다.");
				break;
			}
			else {
				printf("일치하는 학생이 없습니다. 다시 입력해주세요.");
				continue;
			}

		}
		break;

		/* 학생 정보 조회 */
	case 3:
		printf("조회할 학생의 이름을 입력하세요: ");
		scanf_s("%s", searchStudent, sizeof(searchStudent));

		/*일치하는 학생 찾기*/
		for (int i = 0; i < NUM_students; ++i) {
			if (strcmp(student_Infor[i][0], searchStudent) == 0) {
				printf("[[[[학생정보]]]]\n");
				printf("이름: %s\n", student_Infor[i][0]);
				printf("학년: %s\n", student_Infor[i][1]);
				printf("학교: %s\n", student_Infor[i][2]);
				printf("연락처: %s\n", student_Infor[i][3]);
				printf("납부 금액: %s\n", student_Infor[i][4]);
				break;
			}
		}
		break;

	default:
		printf("1~3 사이의 숫자를 입력해주세요. \n");
	}

}