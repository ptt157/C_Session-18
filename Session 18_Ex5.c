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
    // Khai bao mang sinh vien voi do dai 50 va co san 5 phan tu
    struct Student students[50] = {
        {1, "Alice", 20, "0123456789"},
        {2, "Bob", 21, "0987654321"},
        {3, "Charlie", 19, "0112233445"},
        {4, "David", 22, "0223344556"},
        {5, "Eve", 20, "0334455667"}
    };

    int idToEdit;
    printf("Enter the ID of the student to edit: ");
    scanf("%d", &idToEdit);

    // Tim sinh vien theo id
    int found = 0;
    for (int i = 0; i < 5; i++) {
        if (students[i].id == idToEdit) {
            found = 1;
            printf("Editing information for student ID %d:\n", idToEdit);

            // Chinh sua thong tin name va age
            printf("Enter new name: ");
            getchar(); // Loai bo ky tu xuong dong con lai
            fgets(students[i].name, sizeof(students[i].name), stdin);
            students[i].name[strcspn(students[i].name, "\n")] = 0; // Xoa ky tu xuong dong

            printf("Enter new age: ");
            scanf("%d", &students[i].age);

            break;
        }
    }

    if (!found) {
        printf("Student with ID %d not found.\n", idToEdit);
    }

    // In thong tin toan bo sinh vien
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

