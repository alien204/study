#include <stdio.h>

struct students
{
    char name[10];
    int rollno;
    int marks;
    char grade;
}s[1];


int main()
{
    int n,i,x;
    printf("Enter number of students : ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        printf("\nEnter detail %d",i+1);
        printf("\nName : ");
        scanf("%s",s[i].name);
        printf("Roll number : ");
        scanf("%d",&s[i].rollno);
        printf("Marks : ");
        scanf("%d",&s[i].marks);

        if(s[i].marks>=80)
        s[i].grade = 'A';
        else if(s[i].marks>=60)
        s[i].grade = 'B';
        else if(s[i].marks>=50)
        s[i].grade = 'C';
        else if(s[i].marks>=40)
        s[i].grade = 'D';
        else if(s[i].marks<40)
        s[i].grade = 'F';
    }
    
    printf("\nEnter student details to search for : ");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(x==s[i].rollno)
        {
            printf("Name : %s",s[i].name);
            printf("\nRoll number : %d",s[i].rollno);
            printf("\nMarks : %d",s[i].marks);
            printf("\nGrade : %c\n",s[i].grade);
        }
        else
            printf("Invalid roll number!!\n");
            break;
    }
}