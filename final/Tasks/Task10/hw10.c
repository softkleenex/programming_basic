// 학번: 2019114739
// 이름: 이상재

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 5

typedef struct {
    int id;             // 학번
    char name[20];      // 이름
    int mid;            // 중간고사 점수 (100점 만점, 30%)
    int final;          // 기말고사 점수 (100점 만점, 40%)
    int hw1;            // 과제1 점수 (30점 만점)
    int hw2;            // 과제2 점수 (30점 만점)
    int attendance;     // 출석 점수 (10점)
} STUDENT;

typedef struct {
    int id;             // 학번
    char name[20];      // 이름
    double mid;         // 중간고사 반영 점수 (30%)
    double final;       // 기말고사 반영 점수 (40%)
    double hw;          // 과제 점수 반영 (평균)
    int attendance;     // 출석 점수 (100% 반영)
    double total;       // 총점
    char grade[3];      // 학점
} STUDENT_SCORE;

// 함수 선언
int readStudentsFromFile(STUDENT students[], const char* filename);
void printStudents(STUDENT students[], int count);
void calculateScores(STUDENT students[], STUDENT_SCORE scores[], int count);
void printStudentScores(STUDENT_SCORE scores[], int count);

int main()
{
    STUDENT students[MAX_SIZE];
    STUDENT_SCORE student_scores[MAX_SIZE];

    // 구조체 배열 메모리 초기화
    memset(students, 0, sizeof(students));
    memset(student_scores, 0, sizeof(student_scores));

    // 파일 읽기
    int count = readStudentsFromFile(students, "students.txt");

    // 학생 정보 출력
    printStudents(students, count);

    // 점수 계산
    calculateScores(students, student_scores, count);

    // 성적 출력
    printStudentScores(student_scores, count);

    return 0;
}

// 파일에서 학생 정보 읽기
int readStudentsFromFile(STUDENT students[], const char* filename)
{
    FILE* f;
    int count = 0;

    if ((f = fopen(filename, "r")) == NULL)
    {
        printf("파일이 열리지 않습니다.\n");
        exit(1);
    }

    while (count < MAX_SIZE &&
           fscanf(f, "%d %s %d %d %d %d %d",
                  &students[count].id,
                  students[count].name,
                  &students[count].mid,
                  &students[count].final,
                  &students[count].hw1,
                  &students[count].hw2,
                  &students[count].attendance) == 7)
    {
        count++;
    }

    fclose(f);
    return count;
}

// 학생 정보 출력
void printStudents(STUDENT students[], int count)
{
    printf("[SCORES OF STUDENTS]\n");
    printf("%7s %10s %5s %5s %5s %5s %10s\n",
           "ID", "NAME", "MID", "FINAL", "HW1", "HW2", "ATTENDANCE");
    printf("-------------------------------------------------------\n");

    for (int i = 0; i < count; i++)
    {
        printf("%7d %10s %5d %5d %5d %5d %10d\n",
               students[i].id,
               students[i].name,
               students[i].mid,
               students[i].final,
               students[i].hw1,
               students[i].hw2,
               students[i].attendance);
    }
    printf("-------------------------------------------------------\n\n");
}

// 점수 계산 및 학점 부여
void calculateScores(STUDENT students[], STUDENT_SCORE scores[], int count)
{
    for (int i = 0; i < count; i++)
    {
        // 학번, 이름 복사
        scores[i].id = students[i].id;
        strcpy(scores[i].name, students[i].name);

        // 중간고사 반영 점수 (30%)
        scores[i].mid = students[i].mid * 0.3;

        // 기말고사 반영 점수 (40%)
        scores[i].final = students[i].final * 0.4;

        // 과제 점수 반영 (두 과제 평균)
        scores[i].hw = (students[i].hw1 + students[i].hw2) / 2.0;

        // 출석 점수 (100% 반영)
        scores[i].attendance = students[i].attendance;

        // 총점 계산
        scores[i].total = scores[i].mid + scores[i].final + scores[i].hw + scores[i].attendance;

        // 학점 계산 (소수점 둘째자리 반올림 후 판정)
        double total = scores[i].total;

        if (total >= 95)
            strcpy(scores[i].grade, "A+");
        else if (total >= 90)
            strcpy(scores[i].grade, "A0");
        else if (total >= 85)
            strcpy(scores[i].grade, "B+");
        else if (total >= 80)
            strcpy(scores[i].grade, "B0");
        else if (total >= 75)
            strcpy(scores[i].grade, "C+");
        else if (total >= 70)
            strcpy(scores[i].grade, "C0");
        else if (total >= 65)
            strcpy(scores[i].grade, "D+");
        else if (total >= 60)
            strcpy(scores[i].grade, "D0");
        else
            strcpy(scores[i].grade, "F");
    }
}

// 성적 출력
void printStudentScores(STUDENT_SCORE scores[], int count)
{
    printf("[CREDITS OF STUDENTS]\n");
    printf("%7s %10s %5s %5s %4s %10s %5s %5s\n",
           "ID", "NAME", "MID", "FINAL", "HW", "ATTENDANCE", "TOTAL", "SCORE");
    printf("--------------------------------------------------------------\n");

    for (int i = 0; i < count; i++)
    {
        printf("%7d %10s %5.1f %5.1f %5.1f %10d %5.1f %5s\n",
               scores[i].id,
               scores[i].name,
               scores[i].mid,
               scores[i].final,
               scores[i].hw,
               scores[i].attendance,
               scores[i].total,
               scores[i].grade);
    }
    printf("--------------------------------------------------------------\n");
}
