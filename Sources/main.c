#include <stdio.h>
#include <stdlib.h>

#include "common.h"
#include "function1.h"
#include "function3.h"


/* ��ɿ� ���� �Լ� ȣ�� */
void recordPayment();
void tuition_unpaidStudent();
void student_Information_Management();
void academy_Information_Management();

#define MAX_students 100
#define MAX_namelength 100


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

void tuition_unpaidStudent() {

}

void academy_Information_Management() {

}
