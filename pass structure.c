#include <stdio.h>

// Define structure
struct Student {
    char name[50];
    int age;
    float marks;
};

// Function to display structure data using pointer
void display(struct Student *s) {
    printf("\n--- Student Details ---\n");
    printf("Name  : %s\n", s->name);
    printf("Age   : %d\n", s->age);
    printf("Marks : %.2f\n", s->marks);
}

// Function to update marks using pointer
void updateMarks(struct Student *s, float newMarks) {
    s->marks = newMarks;
}

int main() {
    struct Student st;

    // Input student details
    printf("Enter name: ");
    gets(st.name);  // unsafe, use fgets in real code

    printf("Enter age: ");
    scanf("%d", &st.age);

    printf("Enter marks: ");
    scanf("%f", &st.marks);

    // Display using pointer
    display(&st);

    // Update marks
    updateMarks(&st, 95.5);
    printf("\nAfter updating marks:\n");
    display(&st);

    return 0;
}