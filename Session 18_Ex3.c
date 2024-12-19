#include <stdio.h>
#include <string.h>

// Khai bao cau truc sinh vien
struct Student {
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    // Khai bao mang sinh vien voi 5 phan tu
    struct Student students[5];

    // Nhap thong tin cho tung sinh vien
    for (int i = 0; i < 5; i++) {
        printf("Enter information for student %d:\n", i + 1);

        printf("Enter name: ");
        getchar(); // Loai bo ky tu xuong dong con lai
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = 0; // Xoa ky tu xuong dong

        printf("Enter age: ");
        scanf("%d", &students[i].age);

        printf("Enter phone number: ");
        scanf("%s", students[i].phoneNumber);

        printf("\n");
    }

    // In thong tin cac sinh vien
    printf("\nStudent Information:\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Phone Number: %s\n", students[i].phoneNumber);
        printf("\n");
    }

    return 0;
}

