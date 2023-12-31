#include <stdio.h>
#include <stdlib.h>

#include "common.h"
#include "function1.h"
#include "function2.h"
#include "function3.h"
#include "function4.h"
#include "function5.h"
#include "file_in.h"

/* 기능에 대한 함수 호출 */
void recordPayment();
void tuition_unpaidStudent();
void student_Information_Management();
void academy_Information_Management();
void allocateAcademyTuition();

#define MAX_students 100
#define MAX_namelength 100

int main() {
    int choice;

    /*학생 정보 불러오기(파일 입력)*/
    loadStudentsFromFile();

    do {
        /* 사용자 디스플레이 */
        printf("\n □□□□□□□ 학원비 관리 시스템 □□□□□□□\n\n");
        printf("\t (1) 학원비 납부 \n");
        printf("\t (2) 미납 학생 관리 \n");
        printf("\t (3) 학생 정보 관리 \n");
        printf("\t (4) 학원 정보 관리 \n");
        printf("\t (5) 학원비 할당(1일) \n");
        printf("\t (6) 프로그램 종료 \n\n");
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
            allocateAcademyTuition();
            break;
        case 6:
            printf(" 프로그램을 종료합니다. \n");
            break;
        default:
            printf("1~5까지의 숫자를 입력해주세요 :) ");
        }

    } while (choice != 6);

    // 프로그램 종료 전에 학생 정보를 파일에 저장
    saveStudentsToFile();

    return 0;
}