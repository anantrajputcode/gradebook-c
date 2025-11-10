# Student Result Management System

[![Language](https://img.shields.io/badge/language-C-blue)](https://www.gnu.org/software/gcc/) [![License](https://img.shields.io/badge/license-MIT-green)](LICENSE)

*Author: Anant Rajput*

A secure, console-based C application for managing and viewing student academic results with password protection and automatic grade calculation.

---

## Table of Contents

* [Features](#features)
* [How the System Works](#how-the-system-works)
* [Grading System](#grading-system)
* [Prerequisites](#prerequisites)
* [Compilation](#compilation)
* [Usage](#usage)
* [Default Credentials](#default-credentials)
* [Pre-loaded Data](#pre-loaded-data)
* [Example Workflow](#example-workflow)
* [Security Features](#security-features)
* [Code Structure](#code-structure)
* [Limitations](#limitations)
* [Possible Enhancements](#possible-enhancements)
* [Contributing](#contributing)
* [License](#license)

---

## Features

* **Password Protection**: Secure login system with attempt limits
* **Pre-loaded Database**: Contains 5 student records by default
* **Dynamic Student Management**: Add new student records on the fly
* **Automatic Calculations**: Computes total marks, percentage, and grades
* **Search Functionality**: Quick lookup by roll number
* **User-Friendly Menu**: Clear navigation and formatted output
* **Input Validation**: Prevents invalid operations and data entry

---

## How the System Works

The system manages student academic data through a **menu-driven interface**:

1. **Authentication**: User must enter correct password (max 5 attempts)
2. **Menu Navigation**: Choose from 4 operations
3. **Data Processing**: System automatically calculates totals, percentages, and assigns grades
4. **Result Display**: Formatted tables showing student performance

Each student record contains:
* Roll Number
* Name
* Marks in 3 subjects
* Total marks (out of 300)
* Percentage
* Grade (A/B/C/F)

---

## Grading System

The system uses the following grading criteria:

| Percentage Range | Grade |
|------------------|-------|
| ≥ 90%           | A     |
| 80% - 89%       | B     |
| 70% - 79%       | C     |
| < 70%           | F     |

**Formula**: `Percentage = (Total Marks / 300) × 100`

---

## Prerequisites

* **C Compiler**: GCC or any standard C compiler
* **Operating System**: Windows, Linux, or macOS
* Basic understanding of console applications

---

## Compilation

```bash
gcc student_result_system.c -o student_result_system
```

Or with specific flags:

```bash
gcc -std=c99 student_result_system.c -o student_result_system -Wall
```

---

## Usage

1. Run the compiled program:

```bash
./student_result_system
```

2. Enter the password when prompted (default: `12345`)

3. Choose from the menu options:
   * **Option 1**: View pre-fed student results (5 students)
   * **Option 2**: Add new students and view all results
   * **Option 3**: Search for a specific student by roll number
   * **Option 4**: Exit the program

---

## Default Credentials

* **Password**: `12345`
* **Maximum Login Attempts**: 5

---

## Pre-loaded Data

The system comes with 5 pre-configured student records:

| Roll No. | Name    | Subject 1 | Subject 2 | Subject 3 | Total | Percentage | Grade |
|----------|---------|-----------|-----------|-----------|-------|------------|-------|
| 1        | Anant   | 95        | 92        | 91        | 278   | 92.67%     | A     |
| 2        | pushkar | 78        | 86        | 76        | 240   | 80.00%     | B     |
| 3        | Tanish  | 76        | 45        | 53        | 174   | 58.00%     | F     |
| 4        | Arun    | 78        | 89        | 94        | 261   | 87.00%     | B     |
| 5        | Ritika  | 98        | 90        | 85        | 273   | 91.00%     | A     |

---

## Example Workflow

### Login Process
```
Enter the password to log in: 12345

Student Result Management System
---------------------------------
1. View Pre-fed Student Results
2. Add New Students and View All Results
3. Search student using Roll no.
4. Exit
Enter your choice: 
```

### Adding a New Student
```
Enter your choice: 2

Enter number of new students to add: 1

Enter Roll No. of student 6: 6
Enter name of student 6: Priya
Enter marks of 3 subjects: 88 92 85

--- Student Result List ---
Roll    Name            Total           Percent         Grade
1       Anant           278             92.67%          A
2       pushkar         240             80.00%          B
3       Tanish          174             58.00%          F
4       Arun            261             87.00%          B
5       Ritika          273             91.00%          A
6       Priya           265             88.33%          B
```

### Searching for a Student
```
Enter your choice: 3
Enter Roll no. of the student: 4

--- Student Details ---
Roll    Name            Total           Percent         Grade
4       Arun            261             87.00%          B
```

### Failed Login Attempt
```
Enter the password to log in: 11111
Incorrect password. Try Again.

Enter the password to log in: 12345
[System unlocked]
```

---

## Security Features

* **Password Authentication**: Required before accessing any functionality
* **Attempt Limiting**: Maximum 5 login attempts before forced logout
* **Session Control**: Automatic exit on invalid operations
* **Access Control**: All operations require successful authentication

---

## Code Structure

1. **Authentication Module**: Password verification with attempt tracking
2. **Data Structures**: Arrays for storing student information
   * `name[10][50]` - Student names
   * `marks[10][3]` - Subject marks
   * `roll[10]` - Roll numbers
   * `total[10]` - Total marks
   * `percent[10]` - Percentages
   * `grade[10]` - Assigned grades
3. **Menu System**: Switch-case based operation selection
4. **Calculation Engine**: Automatic grade computation
5. **Display Functions**: Formatted output tables

---

## Limitations

* **Maximum Capacity**: 10 students total (5 pre-loaded + 5 new)
* **Fixed Subjects**: Only 3 subjects per student
* **Name Length**: Maximum 50 characters
* **Non-Persistent Storage**: Data lost after program termination
* **Integer Marks Only**: No decimal point support
* **Roll Number Dependencies**: Assumes sequential roll numbers for search

---

## Possible Enhancements

* **File-Based Storage**: Save and load data from files (CSV/text)
* **Dynamic Arrays**: Support unlimited number of students
* **Edit/Delete Operations**: Modify or remove existing records
* **Subject Flexibility**: Variable number of subjects per student
* **Password Encryption**: Hash-based password security
* **Detailed Reports**: Generate PDF/text reports
* **Statistics Dashboard**: Class average, highest/lowest scores
* **Subject-wise Analysis**: Individual subject performance tracking
* **Backup System**: Automatic data backup functionality
* **Multi-user Support**: Different access levels (admin/teacher/student)

---

## Contributing

Feel free to **fork this repository** and submit pull requests for improvements or bug fixes. Suggestions for enhancements are always welcome!

---

## License

This project is open-source under the [MIT License](LICENSE).