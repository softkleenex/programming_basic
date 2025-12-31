# 프로그래밍 기초 (C Programming Fundamentals)

2025년 2학기 프로그래밍 기초 과정 학습 자료 및 과제 모음집

[![Language](https://img.shields.io/badge/Language-C-blue.svg)](https://en.cppreference.com/w/c)
[![Course](https://img.shields.io/badge/Course-Complete-success.svg)](https://github.com/softkleenex/programming_basic)

## 📌 프로젝트 개요

C언어 프로그래밍의 기초부터 심화까지 체계적으로 학습한 과정을 정리한 리포지토리입니다.
총 **81개의 C 프로그램**과 **52개의 학습 자료**를 포함하며, 중간고사와 기말고사로 구분된 커리큘럼을 따릅니다.

### 📊 학습 성과

- ✅ **81개** C 프로그램 작성 및 테스트
- ✅ **14주** 체계적 커리큘럼 완수
- ✅ **12개** 실습 과제 완료
- ✅ **10개** 개인 과제 제출
- ✅ 중간고사 & 기말고사 문제 해결

## 📁 리포지토리 구조

```
programming_basic/
├── mid/              # 중간고사 범위 (Week 1-7)
│   ├── class/        # 주차별 수업 예제 (week1~week7)
│   ├── labs/         # 실습 과제 (Lab1~Lab7)
│   ├── task/         # 개인 과제 (Task1~Task6)
│   └── midterm/      # 중간고사 문제
│
├── final/            # 기말고사 범위 (Week 9-14)
│   ├── class/        # 주차별 수업 예제 (week9~week14)
│   ├── labs/         # 실습 과제 (Lab8~Lab12)
│   ├── Tasks/        # 개인 과제 (Task7~Task10)
│   └── finalterm/    # 기말고사 문제
│
└── template.c        # C 프로그램 기본 템플릿
```

## 📚 학습 내용

### 🎯 중간고사 범위 (Mid-term)

| 주차 | 주제 | 내용 |
|-----|------|------|
| Week 1 | **C 프로그래밍 시작** | 개발환경 설정, Hello World, 컴파일 과정 |
| Week 2 | **자료형과 입출력** | 변수, 자료형, scanf/printf, 전처리기 |
| Week 3 | **연산자** | 산술/관계/논리/비트/조건 연산자 |
| Week 4 | **조건문** | if-else, switch-case, 중첩 조건문 |
| Week 5 | **반복문** | for, while, do-while, 중첩 반복문 |
| Week 6 | **배열** | 1차원 배열, 2차원 배열, 배열 초기화 |
| Week 7 | **함수 기초** | 함수 정의/호출, 매개변수, 반환값, 재귀 |

**실습 과제**: Lab 1-7
**개인 과제**: Task 1-6
**평가**: 중간고사 (midterm/)

### 🎯 기말고사 범위 (Final-term)

| 주차 | 주제 | 내용 |
|-----|------|------|
| Week 9 | **포인터 기초 1** | 포인터 개념, 주소 연산자, 역참조 |
| Week 10 | **포인터 기초 2** | 포인터와 배열, 포인터 산술 연산 |
| Week 11 | **문자와 문자열** | 문자 처리, 문자열 함수, 버퍼 관리 |
| Week 12 | **구조체** | 구조체 정의, 멤버 접근, 구조체 배열 |
| Week 13 | **함수와 포인터** | 함수 포인터, 포인터 전달, 동적 할당 |
| Week 14 | **파일 처리** | 파일 입출력, fopen/fclose, 텍스트/바이너리 파일 |
| Week 14+ | **고급 주제** | 동적 메모리, 전처리기, 링크드 리스트 |

**실습 과제**: Lab 8-12
**개인 과제**: Task 7-10
**평가**: 기말고사 (finalterm/)

## 🔨 빌드 및 실행

### 필요 환경
- **컴파일러**: GCC 4.8 이상
- **OS**: macOS, Linux, Windows (MinGW)
- **에디터**: 아무거나 (VS Code, Vim, Nano 등)

### 컴파일 방법

```bash
# 기본 컴파일
gcc filename.c -o output

# 경고 옵션 포함 (권장)
gcc -Wall -Wextra filename.c -o output

# 실행
./output
```

### 예제

```bash
# Lab 파일 컴파일
cd mid/labs/Lab1
gcc lab01.c -o lab01
./lab01

# Task 파일 컴파일
cd final/Tasks/Task10
gcc hw10.c -o hw10
./hw10
```

## 💡 주요 학습 개념

### 1️⃣ 기본 입출력
```c
int age;
printf("나이를 입력하세요: ");
scanf("%d", &age);
printf("당신의 나이는 %d세입니다.\n", age);
```

### 2️⃣ 배열과 반복문
```c
int scores[5] = {90, 85, 88, 92, 87};
int sum = 0;

for (int i = 0; i < 5; i++) {
    sum += scores[i];
}
printf("평균: %.2f\n", sum / 5.0);
```

### 3️⃣ 포인터
```c
int num = 10;
int *ptr = &num;

printf("값: %d\n", *ptr);      // 10
printf("주소: %p\n", ptr);      // 메모리 주소
*ptr = 20;                      // num = 20으로 변경
```

### 4️⃣ 구조체
```c
struct Student {
    char name[50];
    int id;
    float gpa;
};

struct Student s1 = {"홍길동", 2021001, 3.8};
printf("학생: %s (ID: %d, GPA: %.2f)\n", s1.name, s1.id, s1.gpa);
```

### 5️⃣ 파일 처리
```c
FILE *fp = fopen("data.txt", "r");
if (fp != NULL) {
    char buffer[100];
    while (fgets(buffer, 100, fp) != NULL) {
        printf("%s", buffer);
    }
    fclose(fp);
}
```

## 📈 과제 하이라이트

### 중간고사 과제
- **Task 1**: 기본 입출력 프로그램
- **Task 2**: 조건문을 활용한 성적 계산기
- **Task 3**: 반복문 패턴 출력
- **Task 4**: 배열을 이용한 통계 프로그램
- **Task 5**: 함수를 활용한 계산기

### 기말고사 과제
- **Task 7** (`hw07.c`): 로또 번호 생성기 (포인터, 배열)
- **Task 8** (`hw08.c`): 문자열 LED 출력 (문자열 처리)
- **Task 9**: 직원 관리 시스템 (구조체)
- **Task 10** (`hw10.c`): 파일 기반 데이터베이스 (파일 I/O, 구조체)

## 🎓 기술 스택

### Languages & Tools
- **C** (C99/C11 표준)
- **GCC** 컴파일러
- **Git** 버전 관리
- **Markdown** 문서화

### 핵심 개념
- 메모리 관리 (스택, 힙)
- 포인터 및 동적 할당
- 구조체 및 사용자 정의 타입
- 파일 입출력
- 재귀 알고리즘
- 함수 포인터

## 📝 코드 품질

### 코딩 규칙
- ✅ NASA C Style Guide 준수
- ✅ 명확한 변수명 사용
- ✅ 주석을 통한 코드 설명
- ✅ 함수 단위 모듈화
- ✅ 에러 처리 구현

### 테스트
- 모든 프로그램은 다양한 입력으로 테스트 완료
- 경계값 테스트 수행
- 메모리 누수 검증

## 🚀 학습 방법

1. **수업 예제** (`class/`): 이론 학습 후 직접 실습
2. **실습 과제** (`labs/`): 주간 실습으로 개념 강화
3. **개인 과제** (`task/`, `Tasks/`): 종합 문제 해결 능력 배양
4. **시험 대비** (`midterm/`, `finalterm/`): 실전 연습

## 📊 프로젝트 통계

```
Language                Files        Lines        Code       Comments
────────────────────────────────────────────────────────────────────
C                          81        4,500+       3,800+        700+
PDF (학습자료)              52          N/A          N/A          N/A
────────────────────────────────────────────────────────────────────
Total                     133        4,500+       3,800+        700+
```

## 🔗 참고 자료

### 교재 및 문서
- 수업 PDF 자료 52개 포함
- NASA C Style Guide
- C Reference Documentation

### 추천 학습 자료
- [cppreference.com](https://en.cppreference.com/w/c) - C 언어 레퍼런스
- [Learn-C.org](https://www.learn-c.org/) - 인터랙티브 튜토리얼
- [GeeksforGeeks C](https://www.geeksforgeeks.org/c-programming-language/) - 알고리즘 및 예제

## 👨‍💻 Author

**SoftKleenex**
- GitHub: [@softkleenex](https://github.com/softkleenex)
- 과정: 프로그래밍 기초
- 기간: 2025년 2학기

## 📜 License

이 프로젝트는 교육 목적으로 자유롭게 사용 가능합니다.

## ⭐ 기여

포크, 스타, 피드백 환영합니다!

---

**Last Updated**: 2025-12-31
**Status**: ✅ 과정 완료
