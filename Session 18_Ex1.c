#include <stdio.h>
#include <string.h>

// Khai bao cau truc sinh vien
struct Student {
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    // Khai bao bien tu cau truc va gan gia tri
    struct Student student1;

    // Gan gia tri cho cac thuoc tinh cua student1
    strcpy(student1.name, "Pham Thanh Tung");
    student1.age = 18;
    strcpy(student1.phoneNumber, "0123456789");

    // In thong tin sinh vien ra man hinh
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("Phone Number: %s\n", student1.phoneNumber);

    return 0;
}

