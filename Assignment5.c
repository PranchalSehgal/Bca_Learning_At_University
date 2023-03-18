//Task is to find out passed as well as failed students.
//Given the score of 'N' students in the class, write a program to compute the maximum score. Use array to store the marks of the students and assume that the maximum number of students
// in a class is 50. Assume that -1 is used to indicate a student who is absent for the exam. Assume that a student should secure a minimum of 50 marks to pass the exam.

int main()
{
  int N, marks[50], i, max = 0;

printf("Enter the number of students: ");
scanf("%d", &N);

printf("Enter the scores of the students: ");
for(i=0; i<N; i++) {
    scanf("%d", &marks[i]);
    if(marks[i] > max && marks[i] >= 50 && marks[i] != -1) {
        max = marks[i];
    }
}
printf("The maximum score is %d", max);
  return 0;
}
