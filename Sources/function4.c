#ifndef function4_h
#define function4_h

#include <stdio.h>
#include "common.h"

/* ���� ��� 1: �л� ����� ��� ��� */
void printStudentList() {
    printf("\n[����� ���]\n");
    for (int i = 0; i < NUM_students; ++i) {
        printf("�̸�: %s\t �г�: %s\t �б�: %s\t ����ó: %s\n",
            student_Infor[i].name, student_Infor[i].grade,
            student_Infor[i].school, student_Infor[i].contact);
    }
}

/* ���� ��� 2: �п� ���� ���� ��� */
int calculateTotalIncome() {
    int totalIncome = 0;
    for (int i = 0; i < NUM_students; ++i) {
        totalIncome += student_Infor[i].paymentAmount;
    }
    return totalIncome;
}

/* ���� ��� 3: ���� ��ȸ */
void viewDetails() {
    FILE* file;
    errno_t err= fopen_s(&file,"payment_history.txt", "w+");
    if (file == NULL) {
        perror("Error opening file");
        return;
    }

    printf("\n[���� ���� ��ȸ]\n");

    // �л��� ���� ������ ���Ͽ� ����
    for (int i = 0; i < NUM_students; ++i) {
        fprintf(file, "�̸�: %s\t���� �ݾ�: %d\t���� ����: %s\n", student_Infor[i].name, student_Infor[i].paymentAmount, student_Infor[i].paymentDate);
    }

    fclose(file);

    printf("���� ������ ���Ϸ� ����Ǿ����ϴ�.\n");
}

/* �п� ���� ��ȸ ��� */
void academy_Information_Management() {
    int choice;
    int totalIncome = calculateTotalIncome();

    printf(" �п� ������ ��ȸ�մϴ�.\n");
    printf("(1) �л� ����� ��� ���\n");
    printf("(2) �п� ���� ���� ���\n");
    printf("(3) ���� ��ȸ\n");
    printf("���ϴ� ����� �����ϼ���: ");
    scanf_s("%d", &choice);

    switch (choice) {
    case 1:
        printStudentList();
        break;
    case 2:
        printf("\n[���� ����]\n�� ����: %d\n", totalIncome);
        break;
    case 3:
        viewDetails();
        break;
    default:
        printf("1~3 ������ ���ڸ� �Է����ּ���.\n");
        break;
    }
}

#endif