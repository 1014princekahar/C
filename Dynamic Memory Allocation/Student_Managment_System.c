#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("clear");
    int i, nStudents;
    float *marks,sum;

    printf("Enter Number of Students : ");
    scanf("%d", &nStudents);

    marks = (float *)malloc(nStudents * sizeof(float));
    
    for( i = 0 ; i < nStudents ; i++ )
    {
        printf("Enter Student %d Marks : ",i+1);
        scanf("%f",&marks[i]);
    }
    sum = 0;
    for( i = 0 ; i < nStudents ; i++ )
        sum += marks[i];

    printf("Average of %d students marks is %.2f ",nStudents,sum/nStudents);

    return 0;
}