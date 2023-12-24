#include "file_in.h"
#include <stdio.h>

void loadStudentsFromFile() {
    FILE* file;
    errno_t err = fopen_s(&file, "students.txt", "r+");
    if (file == NULL) {
        perror("Error opening file");
        return;
    }

    // 파일에서 학생 정보 읽어오기
    while (fscanf_s(file, "%s %s %s %s %d",
        student_Infor[NUM_students].name,
        student_Infor[NUM_students].grade,
        student_Infor[NUM_students].school,
        student_Infor[NUM_students].contact,
        &student_Infor[NUM_students].paymentAmount) != EOF) {

        // 학생 정보 불러오기 성공 시 학생 수 증가
        NUM_students++;
    }

    fclose(file);
}

void saveStudentsToFile() {
    FILE* file;
    errno_t err = fopen_s(&file, "students.txt", "w+");
    if (file == NULL) {
        perror("Error opening file");
        return;
    }

    // 파일에 학생 정보 쓰기
    for (int i = 0; i < NUM_students; ++i) {
        fprintf(file, "%s %s %s %s %d\n",
            student_Infor[i].name,
            student_Infor[i].grade,
            student_Infor[i].school,
            student_Infor[i].contact,
            student_Infor[i].paymentAmount);
    }

    fclose(file);
}