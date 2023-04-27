//Write a C code to find the frequency of each letter in the name
//Sample Input: Raman
//Output: R - 1
//.       a = 2
//.       m = 1
//.       n = 1

#include <stdio.h>
#include <string.h>
#define ALPHABET_SIZE 26

int main()
{
  char name[100];
    int letter_frequency[ALPHABET_SIZE] = {0};
    int i, len;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    len = strlen(name);

    for (i = 0; i < len; i++) {
        if (name[i] >= 'a' && name[i] <= 'z') {
            letter_frequency[name[i] - 'a']++;
        } else if (name[i] >= 'A' && name[i] <= 'Z') {
            letter_frequency[name[i] - 'A']++;
        }
    }

    printf("Letter Frequency in name:\n");

    for (i = 0; i < ALPHABET_SIZE; i++) {
        if (letter_frequency[i] > 0) {
            printf("%c: %d\n", 'a' + i, letter_frequency[i]);
        }
    }
  
  return 0;
}
