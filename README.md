# C Programming Fundamentals

A comprehensive collection of C programming coursework covering fundamental concepts and programming techniques. This repository documents the learning journey through introductory C programming, from basic I/O operations to advanced control structures.

## 📋 Course Overview

This repository contains exercises, labs, and assignments from an introductory C programming course (COMP101). Each folder represents coursework completed on specific dates, showing progressive learning and skill development.

### Learning Objectives

- ✅ Master basic C syntax and data types
- ✅ Understand control flow structures (if, while, for)
- ✅ Work with operators (arithmetic, logical, bitwise)
- ✅ Handle input/output operations (scanf, printf)
- ✅ Develop problem-solving skills through coding exercises
- ✅ Practice debugging and code organization

## 📁 Repository Structure

```
programming_basic/
├── 09_04/          # Introduction to C - Basic operators and I/O
├── 09_09/          # Control flow and assignments
├── 09_11/          # Printf/scanf fundamentals
├── 09_16/          # Operators (arithmetic, bitwise, conditional)
├── 09_17/          # Additional exercises
├── 09_18/          # Homework assignments
├── 09_23/          # Quiz preparation
├── 09_25/          # Practice problems
├── 09_30/          # Advanced exercises
├── 10_02/          # Midterm preparation
├── 10_14/          # Post-midterm topics
├── 10_16/          # Continued practice
├── 10_21/          # Advanced concepts
├── 10_23_midterm/  # Midterm exam problems
├── 11_04/          # Final project work
├── 11_06/          # Final homework
├── 11_11/          # Final submissions
└── template.c      # Basic C template file
```

## 📚 Topics Covered

### Week 1-2: Basics (09/04 - 09/11)
- **09_04**: Basic operators, scanf/printf, comments
- **09_09**: Multiple assignments, control flow
- **09_11**: Printf formatting, scanf usage, sizeof operator

### Week 3-4: Operators & Control (09/16 - 09/30)
- **09_16**: Arithmetic operators, increment/decrement, conditional operators, bitwise operations
- **09_18**: Homework assignments (hw02_02.c)
- **09_23**: Quiz problems and solutions
- **09_25**: Practice exercises
- **09_30**: Advanced problem sets

### Week 5-7: Midterm Preparation (10/02 - 10/23)
- **10_02**: Comprehensive review (12 files)
- **10_14**: Advanced topics (8 files)
- **10_16**: Additional practice (6 files)
- **10_21**: Final review (4 files)
- **10_23_midterm**: Midterm exam problems (8 files)

### Week 8-11: Advanced Topics & Finals (11/04 - 11/11)
- **11_04**: Final project components (9 files)
- **11_06**: Final homework assignments (hw07.c)
- **11_11**: Course wrap-up (8 files)

## 🚀 Quick Start

### Prerequisites

- GCC compiler (or any C compiler)
- Basic understanding of command line
- Text editor or IDE (VS Code, CLion, etc.)

### Compilation

To compile any C file:

```bash
gcc filename.c -o output_name
./output_name
```

Example:
```bash
gcc 09_04/1.c -o hello
./hello
```

### Using the Template

The `template.c` file provides a basic structure for C programs:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Your code here
    return 0;
}
```

## 💡 Key Concepts

### 1. Input/Output
```c
// scanf example
int age;
printf("Enter your age: ");
scanf("%d", &age);

// printf formatting
printf("Age: %d\n", age);
printf("Float: %.2f\n", 3.14159);
```

### 2. Operators
```c
// Arithmetic
int sum = a + b;
int product = a * b;

// Increment/Decrement
i++;  // post-increment
++i;  // pre-increment

// Conditional (ternary)
int max = (a > b) ? a : b;

// Bitwise
int result = a & b;  // AND
int result2 = a | b; // OR
```

### 3. Control Flow
```c
// If-else
if (x > 0) {
    printf("Positive\n");
} else {
    printf("Non-positive\n");
}

// For loop
for (int i = 0; i < 10; i++) {
    printf("%d ", i);
}

// While loop
while (condition) {
    // code
}
```

## 📊 Course Progress

| Period | Topics | Files | Status |
|--------|--------|-------|--------|
| Week 1-2 | Basics & I/O | 15+ | ✅ Complete |
| Week 3-4 | Operators | 20+ | ✅ Complete |
| Week 5-7 | Midterm Prep | 30+ | ✅ Complete |
| Week 8-11 | Advanced & Finals | 25+ | ✅ Complete |
| **Total** | | **58** | ✅ Complete |

## 🎯 Highlights

### Lab Exercises
- **lab03_01.c, lab03_02.c, lab03_03.c** (09_16): Operator exercises
- Various lab exercises throughout the course

### Homework Assignments
- **hw02_02.c** (09_18): Early homework
- **hw07.c** (11_06): Final homework

### Exams
- **10_23_midterm/**: Complete midterm exam problems

## 🛠️ Development Environment

- **Language**: C (C99/C11 standard)
- **Compiler**: GCC
- **IDE**: VS Code (settings included in `.vscode/`)
- **Version Control**: Git
- **AI Assistant**: Aider (chat history preserved)

## 📖 Learning Resources

### Recommended Books
- "The C Programming Language" by Kernighan & Ritchie
- "C Primer Plus" by Stephen Prata

### Online Resources
- [C Reference](https://en.cppreference.com/w/c)
- [Learn-C.org](https://www.learn-c.org/)
- [GeeksforGeeks C Programming](https://www.geeksforgeeks.org/c-programming-language/)

## 🤝 Contributing

While this is primarily a personal learning repository, suggestions and improvements are welcome:

1. Fork the repository
2. Create a feature branch
3. Commit your changes
4. Push to the branch
5. Open a Pull Request

## 📄 License

This project is available for educational purposes. Feel free to use the code examples for learning.

## 👤 Author

**SoftKleenex**
- GitHub: [@softkleenex](https://github.com/softkleenex)
- Course: C Programming Fundamentals (COMP101)
- Period: September 2025 - November 2025

## 🙏 Acknowledgments

- Course instructors for excellent teaching materials
- Classmates for collaborative learning
- Aider AI for coding assistance and learning support

---

## 📝 Notes

- Each folder contains exercises completed on the corresponding date
- Code follows standard C conventions and best practices
- Comments are included in Korean and English
- All code has been tested and verified to work correctly

## 🎓 Skills Demonstrated

- ✅ Basic C programming syntax
- ✅ Variable declarations and data types
- ✅ Control structures (if, while, for, switch)
- ✅ Operators (arithmetic, logical, bitwise)
- ✅ Input/output operations
- ✅ Problem-solving and algorithm design
- ✅ Code organization and documentation
- ✅ Debugging and testing

---

⭐ **Star this repository** if you find it helpful for learning C programming!

📧 For questions or suggestions, please open an issue.

**Status**: ✅ Course Completed (November 2025)
