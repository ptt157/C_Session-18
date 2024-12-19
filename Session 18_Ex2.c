#include <stdio.h>
#include <string.h>

// Khai bao cau truc sinh vien
struct Student {
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    // Khai bao bien tu cau truc
    struct Student student1;

    // Yeu cau nguoi dung nhap thong tin
    printf("Enter name: ");
    fgets(student1.name, sizeof(student1.name), stdin);
    student1.name[strcspn(student1.name, "\n")] = 0; // Xoa ky tu xuong dong

    printf("Enter age: ");
    scanf("%d", &student1.age);

    printf("Enter phone number: ");
    scanf("%s", student1.phoneNumber);

    // In thong tin sinh vien ra man hinh
    printf("\nStudent Information:\n");
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("Phone Number: %s\n", student1.phoneNumber);

    return 0;
}

