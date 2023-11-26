#include <stdio.h>
#include <stdlib.h>

/* 기능에 대한 함수 호출 */
void recordPayment();
void unpaidStudent();
void student_Information_Management();
void academy_Information_Management();


int main() {
	int choice;

	do {
		/* 사용자 디스플레이 */
		printf("\n □□□□□ 학원비 관리 시스템 □□□□□");
		printf("\t (1) 학원비 납부 ");
		printf("\t (2) 미납 학생 관리 ");
		printf("\t (3) 학생 정보 관리 ");
		printf("\t (4) 학원 정보 관리 ");
		printf("\t (5) 종료 ");
		printf("\t □□□□□□□□□□□□□□□□□□□□");
		printf("실행하고자 하는 기능번호를 입력하세요 :");
		scanf_s("%d", &choice);

		
	}
}
