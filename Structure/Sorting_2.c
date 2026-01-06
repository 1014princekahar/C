#include <stdio.h>
#include <string.h>

struct student {
    int roll_no;
    char name[100];
} s[5];

int main() {
    int i, j;
char str[100];
    for (i = 0; i < 5; i++) {
        printf("Enter Student %d Roll No : ", i + 1);
        scanf("%d", &s[i].roll_no);
        getchar();
        
        printf("Enter Student %d Name : ", i + 1);
        fgets(s[i].name, sizeof(s[i].name), stdin);
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5 - i - 1; j++) {
            if (s[j].roll_no > s[j + 1].roll_no) {
                int temp = s[j].roll_no;
                s[j].roll_no = s[j + 1].roll_no;
                s[j + 1].roll_no = temp;
                strcpy(str, s[j].name);
                strcpy(s[j].name , s[j + 1 ].name);
                strcpy( s[j + 1 ].name , str);
            }
        }
    }

    printf("\nSorted List\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d: Roll No: %d, Name: %s\n", i + 1, s[i].roll_no, s[i].name);
    }

    return 0;
}