#include <stdio.h>
#include "function3.h"


void student_Information_Management() {
	int choice;
	char modifying_Infor[MAX_namelength];
	char searchStudent[MAX_namelength];


	printf(" �л� ������ ���/���� �մϴ�.\n");

	printf("(1) �л� ���� ���\n");
	printf("(2) �л� ���� ����\n");
	printf("(3) �л� ���� ��ȸ\n");

	printf(" ���ϴ� ����� �����ϼ��� \n");

	scanf_s("%d", &choice);

	switch (choice) {
		/* �л� ���� ��� */
	case 1:
		printf(" ���ο� �л� ������ �Է��ϼ��� \n");
		printf(" �л� �̸�: ");
		scanf_s("%s", student_Infor[NUM_students][0], sizeof(student_Infor[NUM_students][0]));
		printf(" �л� �г�: ");
		scanf_s("%s", student_Infor[NUM_students][1], sizeof(student_Infor[NUM_students][1]));
		printf(" �л� �б�: ");
		scanf_s("%s", student_Infor[NUM_students][2], sizeof(student_Infor[NUM_students][2]));
		printf(" �л� ����ó: ");
		scanf_s("%s", student_Infor[NUM_students][3], sizeof(student_Infor[NUM_students][3]));
		printf(" ���� �ݾ�: ");
		scanf_s("%s", student_Infor[NUM_students][4], sizeof(student_Infor[NUM_students][4]));

		NUM_students++;

		break;
		/* �л� ���� ���� */
	case 2:
		printf(" ������ �л��� �̸��� �Է��ϼ���: ");
		scanf_s("%s", modifying_Infor, sizeof(modifying_Infor));

		for (int i = 0; i < NUM_students; ++i) {
			if (strcmp(student_Infor[i][0], modifying_Infor) == 0) {
				printf(" �л� �̸�: ");
				scanf_s("%s", student_Infor[NUM_students][0], sizeof(student_Infor[NUM_students][0]));
				printf(" �л� �г�: ");
				scanf_s("%s", student_Infor[NUM_students][1], sizeof(student_Infor[NUM_students][1]));
				printf(" �л� �б�: ");
				scanf_s("%s", student_Infor[NUM_students][2], sizeof(student_Infor[NUM_students][2]));
				printf(" �л� ����ó: ");
				scanf_s("%s", student_Infor[NUM_students][3], sizeof(student_Infor[NUM_students][3]));
				printf(" ���� �ݾ�: ");
				scanf_s("%s", student_Infor[NUM_students][4], sizeof(student_Infor[NUM_students][4]));

				printf("���������� �����Ǿ����ϴ�.");
				break;
			}
			else {
				printf("��ġ�ϴ� �л��� �����ϴ�. �ٽ� �Է����ּ���.");
				continue;
			}

		}
		break;

		/* �л� ���� ��ȸ */
	case 3:
		printf("��ȸ�� �л��� �̸��� �Է��ϼ���: ");
		scanf_s("%s", searchStudent, sizeof(searchStudent));

		/*��ġ�ϴ� �л� ã��*/
		for (int i = 0; i < NUM_students; ++i) {
			if (strcmp(student_Infor[i][0], searchStudent) == 0) {
				printf("[[[[�л�����]]]]\n");
				printf("�̸�: %s\n", student_Infor[i][0]);
				printf("�г�: %s\n", student_Infor[i][1]);
				printf("�б�: %s\n", student_Infor[i][2]);
				printf("����ó: %s\n", student_Infor[i][3]);
				printf("���� �ݾ�: %s\n", student_Infor[i][4]);
				break;
			}
		}
		break;

	default:
		printf("1~3 ������ ���ڸ� �Է����ּ���. \n");
	}

}