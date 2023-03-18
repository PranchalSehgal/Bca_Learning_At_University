//Write a C code to find the maximum element in each row of the 3 X 3 matrix

int main()
{
  int main() {
int matrix[3][3] = {{13, 4, 789}, {1, 66, 80}, {19, 176, 8}};
int i, j, max;

for (i = 0; i < 3; i++) {
    max = matrix[i][0];
    for (j = 1; j < 3; j++) {
        if (matrix[i][j] > max) {
            max = matrix[i][j];
        }
    }
    printf("Maximum element in row %d is %d\n", i + 1, max);
}
  return 0;
}
