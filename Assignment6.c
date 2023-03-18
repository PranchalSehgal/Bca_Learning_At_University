//Write a C code to find the number of distinct elements in a sorted array.

int main()
{
  int arr[100], n, i, j, count = 1;

printf("Enter the number of elements in the array: ");
scanf("%d", &n);

printf("Enter the elements of the array in sorted order:\n");
for (i = 0; i < n; i++)
{
    scanf("%d", &arr[i]);
}

for (i = 0; i < n - 1; i++)
{
    if (arr[i] != arr[i+1])
    {
        count++;
    }
}

printf("The number of distinct elements in the array is: %d", count);
  return 0;
}
