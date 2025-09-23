#include <stdio.h>
#include <string.h>


//Check whether each char is vowel or not => Create a function to perform this
//where we will provide each char as an argument. The function will return 1 or 0 based on
//the cond that is satisfied over there.
//check_vowel(char ch) => 1 - Vowel or 0 - Not a vowel

int check_vowel(char ch) {

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
     ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') return 1;
    // return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
    //  ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    
    return 0;
}

int main() {
    char str[100]; 
    scanf("%s", str);
    fgets(str, sizeof(str), stdin);
    //str, its value is nothing but the address of the 1st element character array


    //Initialise a char pointer to the address of 1st char of the string 
    char* ptr=str;
    int vowel_count=0;

    //Traverse the string 
    //We should loop over the char array until we reach
    //the '\0' -> Termination Character (EO String)
    //while loop suits for this implementation. 

    while (*ptr != '\0') {
        if (check_vowel(*ptr)) vowel_count++;    //If it is vowel, increment vowel_count value
        ptr++; //(ptr+1)
    }

    printf("%d", vowel_count);
    return 0;

}