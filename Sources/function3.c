#ifndef function3_h
#define function3_h

#include <stdio.h>

#include "common.h"
#include "function3.h"
#include "file_in.h"

void student_Information_Management() {
    int choice;
    char modifying_Infor[MAX_namelength];
    char searchStudent[MAX_namelength];

    printf(">>학생 정보 관리<<\n");

    printf("(1) 학생 정보 등록\n");
    printf("(2) 학생 정보 수정\n");
    printf("(3) 학생 정보 조회\n");

    printf(" 원하는 기능을 선택하세요 \n");

    scanf_s("%d", &choice);

    switch (choice) {
        /* 학생 정보 등록 */
    case 1:
        printf(" 새로운 학생 정보를 입력하세요 \n");

        // 학생 이름 입력
        printf("학생 이름 : ");
        scanf_s("%s", student_Infor[NUM_students].name, MAX_namelength);

        // 학생 학년 입력
        printf("학생 학년: ");
        scanf_s("%s", student_Infor[NUM_students].grade, MAX_namelength);

        // 학생 학교 입력
        printf("학생 학교: ");
        scanf_s("%s", student_Infor[NUM_students].school, MAX_namelength);

        // 학생 연락처 입력
        printf("학생 연락처: ");
        scanf_s("%s", student_Infor[NUM_students].contact, MAX_namelength);

        // 납부 금액 입력
        printf("납부 금액: ");
        scanf_s("%d", &student_Infor[NUM_students].paymentAmount);
        student_Infor[NUM_students].currentAmount[NUM_students] = student_Infor[NUM_students].paymentAmount;

        // 파일에 학생 정보 저장
        saveStudentsToFile();

        NUM_students++;
        printf("학생 정보가 등록되었습니다. 현재 학생 수 : %d \n", NUM_students);
        break;

        /* 학생 정보 수정 */
    case 2:
        printf(" 수정할 학생의 이름을 입력하세요: ");
        scanf_s("%s", modifying_Infor, sizeof(modifying_Infor));

        int studentFound = 0;

        for (int i = 0; i < NUM_students; ++i) {
            if (strcmp(student_Infor[i].name, modifying_Infor) == 0) {
                // 학생 이름 입력
                printf("학생 이름: ");
                scanf_s("%s", student_Infor[i].name, MAX_namelength);

                // 학생 학년 입력
                printf("학생 학년: ");
                scanf_s("%s", student_Infor[i].grade, MAX_namelength);

                // 학생 학교 입력
                printf("학생 학교: ");
                scanf_s("%s", student_Infor[i].school, MAX_namelength);

                // 학생 연락처 입력
                printf("학생 연락처: ");
                scanf_s("%s", student_Infor[i].contact, MAX_namelength);

                // 납부 금액 입력
                printf("납부 금액: ");
                scanf_s("%d", &student_Infor[i].paymentAmount);

                printf("정상적으로 수정되었습니다.");
                studentFound = 1;
                break;
            }
        }
        if (!studentFound) {
            printf("일치하는 학생이 없습니다. 다시 입력해주세요.\n");
        }
        // 파일에 학생 정보 저장
        saveStudentsToFile();
        break;

        /* 학생 정보 조회 */
    case 3:
        printf("조회할 학생의 이름을 입력하세요: ");
        scanf_s("%s", searchStudent, sizeof(searchStudent));

        /*일치하는 학생 찾기*/
        for (int i = 0; i < NUM_students; ++i) {
            if (strcmp(student_Infor[i].name, searchStudent) == 0) {
                printf("[[[[학생정보]]]]\n");
                printf("이름: %s\n", student_Infor[i].name);
                printf("학년: %s\n", student_Infor[i].grade);
                printf("학교: %s\n", student_Infor[i].school);
                printf("연락처: %s\n", student_Infor[i].contact);
                printf("납부 금액: %d\n", student_Infor[i].paymentAmount);
                break;
            }
            else {
                printf("일치하는 학생이 없습니다. 다시 입력해주세요.");
                continue;
            }
        }
        break;

    default:
        printf("1~3 사이의 숫자를 입력해주세요. \n");
    }

}
#endif