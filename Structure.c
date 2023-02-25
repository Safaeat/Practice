#include<stdio.h>
struct Student{
  int id;
  char name[20];
  float cgpa;
  int year;
};
int main(){
  struct Student s1;
  printf("Enter your ID:\n");
  scanf("%d", &s1.id);
  printf("Enter your Name:\n");
  scanf("%s", s1.name);
  printf("Enter your cGPA:\n");
  scanf("%f", &s1.cgpa);
  printf("Enter your passing year:\n");
  scanf("%d", &s1.year);
  printf("%s\n ID: %d\n cGPA: %.2f\n Passing year: %d", s1.name, s1.id, s1.cgpa, s1.year);
return 0;
}

