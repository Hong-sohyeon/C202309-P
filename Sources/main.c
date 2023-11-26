#include <stdio.h>
#include <stdlib.h>

/* 기능에 대한 함수 호출 */
void recordPayment();
void tuition_unpaidStudent();
void student_Information_Management();
void academy_Information_Management();

#define MAX_students 100
#define MAX_namelength 100

/* 배열 선언 */
char student_Infor[MAX_students][5][MAX_namelength];  //다차원 배열 사용
int NUM_students = 0;


int main() {
	int choice;

	do {
		/* 사용자 디스플레이 */
		printf("\n □□□□□□□ 학원비 관리 시스템 □□□□□□□\n\n");
		printf("\t (1) 학원비 납부 \n");
		printf("\t (2) 미납 학생 관리 \n");
		printf("\t (3) 학생 정보 관리 \n");
		printf("\t (4) 학원 정보 관리 \n");
		printf("\t (5) 프로그램 종료 \n\n");
		printf(" □□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□\n");
		printf("실행하고자 하는 기능의 번호를 입력하세요 :");
		scanf_s("%d", &choice);

		/* 기능 선택 */
		switch (choice) {
		case 1:
			recordPayment();
			break;
		case 2:
			tuition_unpaidStudent();
			break;
		case 3:
			student_Information_Management();
			break;
		case 4:
			academy_Information_Management();
			break;
		case 5:
			printf(" 프로그램을 종료합니다. \n");
			break;
		default:
			printf("1~5까지의 숫자를 입력해주세요 :) ");
		}
		
	} while (choice != 5);
	
	return 0;
}


/* 기능별 함수 선언 */

void recordPayment() {

}

void tuition_unpaidStudent() {

}

/* 3. 학생 정보 등록/수정 기능 */
void student_Information_Management() {
	int choice;
	char modifying_Infor[MAX_namelength];


	printf(" 학생 정보를 등록/수정 합니다.\n");
	
	printf("(1) 학생 정보 등록\n");
	printf("(2) 학생 정보 수정\n");
	printf(" 원하는 기능을 선택하세요 \n");

	scanf_s("%d", &choice);

	switch (choice) {
	/* 학생 정보 등록 */
	case 1:
		printf(" 새로운 학생 정보를 입력하세요: \n");
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
	}

}

void academy_Information_Management() {

}
