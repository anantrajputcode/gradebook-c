#include <stdio.h>
int main()
{
    int choice = 0;
    int new_student;
    int pre_def = 5;
    char name[10][50] = {"Anant", "pushkar", "Tanish", "Arun", "Ritika"};
    int marks[10][3] = {{95, 92, 91}, {78,86,76}, {76, 45, 53}, {78, 89, 94}, {98, 90, 85}};
    int roll[10] = {1, 2, 3, 4, 5};
    int total[10] = {0};
    float percent[10];
    char grade[10];
    int total_stud;
    int password = 243005, p;
    int try= 0;
    while(try != 5)
    {printf("Enter the password to log in:-");
    scanf("%d", &p);
    if (p == password)
    {

    while(choice != 4)
    {
        printf("Student Result Management System\n");
        printf("---------------------------------\n");
        printf("1. View Pre-fed Student Results\n");
        printf("2. Add New Students and View All Results\n");
        printf("3. Search student using Roll no.\n");
        printf("4. Exit\n");


        printf("Enter your choice: ");
        scanf("%d", &choice);
        if(choice == 2)
        {
            printf("\nEnter number of new students to add: ");
            scanf("%d", &new_student);
            total_stud = pre_def + new_student;
            for (int i = pre_def; i < total_stud; i++)
            {
                printf("\nEnter Roll No. of student %d: ", i + 1);
                scanf("%d", &roll[i]);
                printf("Enter name of student %d: ", i + 1);
                scanf("%s", name[i]);
                total[i] = 0;
                printf("Enter marks of 3 subjects: ");
                for (int j = 0; j < 3; j++) {
                    scanf("%d", &marks[i][j]);
                    total[i] += marks[i][j];
                }      
            }

        }
        else if(choice == 1)
        {
            total_stud = pre_def;

        }
        else if (choice == 3)
        {
            int r;
            printf("Enter Roll no. of the student:-");
            scanf("%d",&r);
            int check;
            if (new_student == 0)
            {
                check = pre_def;
            }
            else
            {
                check = pre_def + new_student;
            }

            for (int i = 0; i < check; i++)
        {   
            total[i] = 0;
            for(int j = 0; j < 3; j++)
            {
            total[i] += marks[i][j]; 
            }
            percent[i] = total[i] * 100.0 / 300.0;
        
            if (percent[i] >= 90)
                grade[i] = 'A';
            else if (percent[i] >= 80)
                grade[i] = 'B';
            else if (percent[i] >= 70)
                grade[i] = 'C';
            else
                grade[i] = 'F';
            
        }
            if (r <= check)
            {
                printf("\n\n\n\n\n\n\n--- Student Details ---\n");
                printf("\nRoll\tName\t\tTotal\t\tPercent\t\tGrade\n");
                printf("%d\t%s\t\t%d\t\t%.2f%%\t\t%c\n", roll[r-1], name[r-1], total[r-1], percent[r-1], grade[r-1]);
                printf("\n\n\n\n\n");
                continue;
            }
            else
            {
                printf("\n\n\n\n\n--------No Record found.---------\n\n\n\n\n");
                continue;
            }
        }
        else if(choice == 4)
        {
            printf("Exited the menu succesfully.");
            try = 5;
            break;
        }
        else
        {
            printf("Invalid Response.\n");
            try = 5;
            continue;
        }

        
        for (int i = 0; i < total_stud; i++)
        {   
            total[i] = 0;
            for(int j = 0; j < 3; j++)
            {
            total[i] += marks[i][j]; 
            }
            percent[i] = total[i] * 100.0 / 300.0;
        
            if (percent[i] >= 90)
                grade[i] = 'A';
            else if (percent[i] >= 80)
                grade[i] = 'B';
            else if (percent[i] >= 70)
                grade[i] = 'C';
            else
                grade[i] = 'F'; 
        }
        printf("\n--- Student Result List ---\n");
        printf("Roll\tName\t\tTotal\t\tPercent\t\tGrade\n");
        for (int i = 0; i < total_stud; i++) 
        {
            printf("%d\t%s\t\t%d\t\t%.2f%%\t\t%c\n", roll[i], name[i], total[i], percent[i], grade[i]);
        }
        try = 5;
    }
    }
    else
    {   
        if (try<4)
        {
        printf("Incorrect password.Try Again.\n");
        try++;
        }
        else
        {
            printf("No more chances left. Forced log out has been initialised.\n");
            try = 5;
        }
    }
    }
    return 0;
}