#include <stdio.h>
#include <stdlib.h>

/* ��ɿ� ���� �Լ� ȣ�� */
void recordPayment();
void tuition_unpaidStudent();
void student_Information_Management();
void academy_Information_Management();

#define MAX_students 100
#define MAX_namelength 100

/* �迭 ���� */
char student_Infor[MAX_students][5][MAX_namelength];  //������ �迭 ���
int NUM_students = 0;


int main() {
	int choice;

	do {
		/* ����� ���÷��� */
		printf("\n �������� �п��� ���� �ý��� ��������\n\n");
		printf("\t (1) �п��� ���� \n");
		printf("\t (2) �̳� �л� ���� \n");
		printf("\t (3) �л� ���� ���� \n");
		printf("\t (4) �п� ���� ���� \n");
		printf("\t (5) ���α׷� ���� \n\n");
		printf(" �����������������������������������\n");
		printf("�����ϰ��� �ϴ� ����� ��ȣ�� �Է��ϼ��� :");
		scanf_s("%d", &choice);

		/* ��� ���� */
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
			printf(" ���α׷��� �����մϴ�. \n");
			break;
		default:
			printf("1~5������ ���ڸ� �Է����ּ��� :) ");
		}
		
	} while (choice != 5);
	
	return 0;
}


/* ��ɺ� �Լ� ���� */

void recordPayment() {

}

void tuition_unpaidStudent() {

}

/* 3. �л� ���� ���/���� ��� */
void student_Information_Management() {
	int choice;
	char modifying_Infor[MAX_namelength];


	printf(" �л� ������ ���/���� �մϴ�.\n");
	
	printf("(1) �л� ���� ���\n");
	printf("(2) �л� ���� ����\n");
	printf(" ���ϴ� ����� �����ϼ��� \n");

	scanf_s("%d", &choice);

	switch (choice) {
	/* �л� ���� ��� */
	case 1:
		printf(" ���ο� �л� ������ �Է��ϼ���: \n");
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
	}

}

void academy_Information_Management() {

}
