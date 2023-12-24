#ifndef function4_h
#define function4_h

#include <stdio.h>
#include "common.h"

/* 세부 기능 1: 학생 재원생 목록 출력 */
void printStudentList() {
    printf("\n[재원생 목록]\n");
    for (int i = 0; i < NUM_students; ++i) {
        printf("이름: %s\t 학년: %s\t 학교: %s\t 연락처: %s\n",
            student_Infor[i].name, student_Infor[i].grade,
            student_Infor[i].school, student_Infor[i].contact);
    }
}

/* 세부 기능 2: 학원 월별 수입 계산 */
int calculateTotalIncome() {
    int totalIncome = 0;
    for (int i = 0; i < NUM_students; ++i) {
        totalIncome += student_Infor[i].paymentAmount;
    }
    return totalIncome;
}

/* 세부 기능 3: 내역 조회 */
void viewDetails() {
    FILE* file;
    errno_t err= fopen_s(&file,"payment_history.txt", "w+");
    if (file == NULL) {
        perror("Error opening file");
        return;
    }

    printf("\n[납부 내역 조회]\n");

    // 학생별 납부 내역을 파일에 쓰기
    for (int i = 0; i < NUM_students; ++i) {
        fprintf(file, "이름: %s\t납부 금액: %d\t납부 일자: %s\n", student_Infor[i].name, student_Infor[i].paymentAmount, student_Infor[i].paymentDate);
    }

    fclose(file);

    printf("납부 내역이 파일로 저장되었습니다.\n");
}

/* 학원 정보 조회 기능 */
void academy_Information_Management() {
    int choice;
    int totalIncome = calculateTotalIncome();

    printf(" 학원 정보를 조회합니다.\n");
    printf("(1) 학생 재원생 목록 출력\n");
    printf("(2) 학원 월별 수입 계산\n");
    printf("(3) 내역 조회\n");
    printf("원하는 기능을 선택하세요: ");
    scanf_s("%d", &choice);

    switch (choice) {
    case 1:
        printStudentList();
        break;
    case 2:
        printf("\n[월별 수입]\n총 수입: %d\n", totalIncome);
        break;
    case 3:
        viewDetails();
        break;
    default:
        printf("1~3 사이의 숫자를 입력해주세요.\n");
        break;
    }
}

#endif