#include <stdio.h>
#include <string.h>

// Khai bao cau truc sinh vien
struct Student {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    // Khai bao mang sinh vien voi do dai 50 phan tu
    struct Student students[50];

    // Nhap thong tin cho 5 sinh vien
    for (int i = 0; i < 5; i++) {
        students[i].id = i + 1; // Tu dong gan id bat dau tu 1

        printf("Enter information for student %d:\n", students[i].id);

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
        printf("Student %d:\n", students[i].id);
        printf("ID: %d\n", students[i].id);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Phone Number: %s\n", students[i].phoneNumber);
        printf("\n");
    }

    return 0;
}
