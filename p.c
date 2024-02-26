#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); 
    char str[101];
    scanf("%s", str); 
    
    int letters[26]; 
    
    
    for (int i = 0; str[i] != '\0'; i++) {
       
        if (str[i] >= 65 && str[i] <= 97) {
            letters[str[i] - 'A'] = 1; 
        }
        
        else if (str[i] >= 'a' && str[i] <= 'z') {
            letters[str[i] - 'a'] = 1; 
        }
    }
     
    for (int i = 0; i < 26; i++) {
        if (letters[i] == 0) { 
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n"); 
     return 0;
    
}
