#include <stdio.h>
#include <string.h>

void resetString();
char string1[20], string2[20], demoString1[20], demoString2[20];

int main() {
    // Obtains a string max 20 char from user
    printf("Enter the first string (max 10 character): ");
    gets(string1);

    // Obtains another string max 20 char from user
    printf("Enter the second string (max 10 character): ");
    gets(string2);
    
    resetString();

    // Combines the value from both string and save in string 1
    strcat(demoString1, demoString2);
    printf("Result of strcat is ");
    puts(demoString1);

    resetString();

    // Copies the value from string 2 to string 2 by overwriting
    printf("Result of strcpy is ");
    strcpy(demoString1, demoString2);
    puts(demoString1);

    resetString();

    // Returns a value based on difference of ASCII (>0 - s1 > s2, =0 - s1 = s2, <0 - s1 < s2)
    int n = strcmp(demoString1, demoString2);
    printf("The result of strcmp is %d", n);
    if (n > 0) {
        printf(" (s1 > s2)\n");
    } else if (n == 0) {
        printf(" (s1 == s2)\n");
    } else if (n < 0) {
        printf(" (s1 < s2)\n");
    }

    // Calculate the length of a string
    printf("The result of strlen is s1 = %d / s2 = %d\n", strlen(demoString1), strlen(demoString2));

    resetString();

    printf("The result of strchr is %d", strchr(demoString1, 'l'));
    

    return 0;
}

// This functions return the demoString to its default value for usage testing
void resetString() {
    strcpy(demoString1, string1);
    strcpy(demoString2, string2);
    return;
}