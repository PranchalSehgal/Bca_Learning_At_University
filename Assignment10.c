//Write a C code to find the type of array
//If all elements in the array are odd it is known as "ODD ARRAY"
//if all elements in the array are even it is known as "EVEN ARRAY"
//if both even and odd available it is known as MIXED array


int findType(int *array, int n) //complete this function
{
  int oddCount = 0;
    int evenCount = 0;

    for(int i = 0; i < n; i++) {
        if(array[i] % 2 == 0) {
            evenCount++;
        }
        else {
            oddCount++;
        }
    }

    if(evenCount == n) {
        printf("EVEN ARRAY\n");
    }
    else if(oddCount == n) {
        printf("ODD ARRAY\n");
    }
    else {
        printf("MIXED ARRAY\n");
    }
}
int main()
{
  int array1[] = {1,3,5,7,9};
    int array2[] = {2,4,6,8,10};
    int array3[] = {1,2,3,4,5,6};

    findType(array1, 5);
    findType(array2, 5);
    findType(array3, 6);
  return 0;
}
