//Can you help your digital design faculty in correcting the assignment on number conversions by writing a program to convert a decimal number to its binary equivalent using a while loop.
//Example, lets say input is 7, output should be 111

int main()
{
  int decimalnumber, remainder, binarynumber = 0, base = 1;
  
printf("Enter a decimal number: ");
scanf("%d", &decimalnumber);

while (decimalnumber > 0)
{
    remainder = decimalnumber % 2;
    binarynumber += remainder * base;
    base *= 10;
    decimalnumber /= 2;
}
printf("The binary equivalent is: %d", binarynumber);
  return 0;
}
