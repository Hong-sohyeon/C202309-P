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

    printf(">>�л� ���� ����<<\n");

    printf("(1) �л� ���� ���\n");
    printf("(2) �л� ���� ����\n");
    printf("(3) �л� ���� ��ȸ\n");

    printf(" ���ϴ� ����� �����ϼ��� \n");

    scanf_s("%d", &choice);

    switch (choice) {
        /* �л� ���� ��� */
    case 1:
        printf(" ���ο� �л� ������ �Է��ϼ��� \n");

        // �л� �̸� �Է�
        printf("�л� �̸� : ");
        scanf_s("%s", student_Infor[NUM_students].name, MAX_namelength);

        // �л� �г� �Է�
        printf("�л� �г�: ");
        scanf_s("%s", student_Infor[NUM_students].grade, MAX_namelength);

        // �л� �б� �Է�
        printf("�л� �б�: ");
        scanf_s("%s", student_Infor[NUM_students].school, MAX_namelength);

        // �л� ����ó �Է�
        printf("�л� ����ó: ");
        scanf_s("%s", student_Infor[NUM_students].contact, MAX_namelength);

        // ���� �ݾ� �Է�
        printf("���� �ݾ�: ");
        scanf_s("%d", &student_Infor[NUM_students].paymentAmount);
        student_Infor[NUM_students].currentAmount[NUM_students] = student_Infor[NUM_students].paymentAmount;

        // ���Ͽ� �л� ���� ����
        saveStudentsToFile();

        NUM_students++;
        printf("�л� ������ ��ϵǾ����ϴ�. ���� �л� �� : %d \n", NUM_students);
        break;

        /* �л� ���� ���� */
    case 2:
        printf(" ������ �л��� �̸��� �Է��ϼ���: ");
        scanf_s("%s", modifying_Infor, sizeof(modifying_Infor));

        int studentFound = 0;

        for (int i = 0; i < NUM_students; ++i) {
            if (strcmp(student_Infor[i].name, modifying_Infor) == 0) {
                // �л� �̸� �Է�
                printf("�л� �̸�: ");
                scanf_s("%s", student_Infor[i].name, MAX_namelength);

                // �л� �г� �Է�
                printf("�л� �г�: ");
                scanf_s("%s", student_Infor[i].grade, MAX_namelength);

                // �л� �б� �Է�
                printf("�л� �б�: ");
                scanf_s("%s", student_Infor[i].school, MAX_namelength);

                // �л� ����ó �Է�
                printf("�л� ����ó: ");
                scanf_s("%s", student_Infor[i].contact, MAX_namelength);

                // ���� �ݾ� �Է�
                printf("���� �ݾ�: ");
                scanf_s("%d", &student_Infor[i].paymentAmount);

                printf("���������� �����Ǿ����ϴ�.");
                studentFound = 1;
                break;
            }
        }
        if (!studentFound) {
            printf("��ġ�ϴ� �л��� �����ϴ�. �ٽ� �Է����ּ���.\n");
        }
        // ���Ͽ� �л� ���� ����
        saveStudentsToFile();
        break;

        /* �л� ���� ��ȸ */
    case 3:
        printf("��ȸ�� �л��� �̸��� �Է��ϼ���: ");
        scanf_s("%s", searchStudent, sizeof(searchStudent));

        /*��ġ�ϴ� �л� ã��*/
        for (int i = 0; i < NUM_students; ++i) {
            if (strcmp(student_Infor[i].name, searchStudent) == 0) {
                printf("[[[[�л�����]]]]\n");
                printf("�̸�: %s\n", student_Infor[i].name);
                printf("�г�: %s\n", student_Infor[i].grade);
                printf("�б�: %s\n", student_Infor[i].school);
                printf("����ó: %s\n", student_Infor[i].contact);
                printf("���� �ݾ�: %d\n", student_Infor[i].paymentAmount);
                break;
            }
            else {
                printf("��ġ�ϴ� �л��� �����ϴ�. �ٽ� �Է����ּ���.");
                continue;
            }
        }
        break;

    default:
        printf("1~3 ������ ���ڸ� �Է����ּ���. \n");
    }

}
#endif