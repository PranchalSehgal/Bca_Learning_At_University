//A number is said to be valid if it is divisible by 8. Write a program that allows the user to keep entering numbers as long as the input is valid and also displays a count of the valid numbers. Use a while loop to complete the task

int main() 
{
  int num, count = 0;
printf("Enter a number divisible by 8: ");
scanf("%d", &num);

while (num % 8 == 0) 
  {
  count++;
  printf("Valid number.\n Enter another number divisible by 8: ");
  scanf("%d", &num);
  }

printf("Invalid Number.\n Number of valid numbers entered: %d", count);
return 0;
}
