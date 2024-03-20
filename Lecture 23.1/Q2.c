#include <stdio.h>

struct Student {
  int roll_no;
  char name[50];
  float chem_marks;
  float maths_marks;
  float phy_marks;
};

void calculatePercentage(struct Student s[], int n) {
  for (int i = 0; i < n; i++) {
    float total_marks = s[i].chem_marks + s[i].maths_marks + s[i].phy_marks;
    float percentage = (total_marks / 300) * 100;
    printf("\nStudent: %s\nRoll No: %d\nChemistry Marks: %.f\nMathematics "
           "Marks: %.f\nPhysics Marks: %.f\nPercentage: %.f%%\n",
           s[i].name, s[i].roll_no, s[i].chem_marks, s[i].maths_marks,
           s[i].phy_marks, percentage);
  }
}

int main() {
  struct Student students[5];

  printf("Enter details of 5 students:\n");
  for (int i = 0; i < 5; i++) {
    printf("\nStudent %d:\n", i + 1);
    printf("Enter Roll No: ");
    scanf("%d", &students[i].roll_no);
    printf("Enter Name: ");
    scanf("%s", students[i].name);
    printf("Enter Chemistry Marks (out of 100): ");
    scanf("%f", &students[i].chem_marks);
    printf("Enter Mathematics Marks (out of 100): ");
    scanf("%f", &students[i].maths_marks);
    printf("Enter Physics Marks (out of 100): ");
    scanf("%f", &students[i].phy_marks);
  }

  printf("\nGenerating Mark Sheets...\n");
  calculatePercentage(students, 5);

  return 0;
}
