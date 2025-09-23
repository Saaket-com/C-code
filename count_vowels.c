#include <stdio.h>
#include <string.h>




int check_vowel(char ch) {

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
     ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') return 1;
    
    
    return 0;
}

int main() {
    char str[100]; 
    scanf("%s", str);
    fgets(str, sizeof(str), stdin);
  
    char* ptr=str;
    int vowel_count=0;

 . 

    while (*ptr != '\0') {
        if (check_vowel(*ptr)) vowel_count++;    
        ptr++;
    }

    printf("%d", vowel_count);
    return 0;


}
