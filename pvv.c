#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 100 // Maximum length of each string

int main() {
    int n;
    scanf("%d", &n);

    char s[n][MAX_LENGTH]; // Array of strings

    // Read strings
    for(int i = 0; i < n; i++) {
        scanf("%s", s[i]);
    }

    // Check each string
    for(int i = 0; i < n; i++) {
        int has_upper = 0;
        int has_lower = 0;

        // Check each character in the string
        for(int j = 0; j < strlen(s[i]); j++) {
            if (isupper(s[i][j])) {
                has_upper = 1;
            } else if (islower(s[i][j])) {
                has_lower = 1;
            }
        }

        if (has_upper && has_lower) {
            printf("yes\n");
        } else {
            printf("no\n");
        }
    }

    return 0;
}
