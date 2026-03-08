#include <stdio.h>
#include <stdlib.h>
#include <string.h>
  
  
int main(){ 
  //char str[50];
FILE* fp;
char *str = malloc(50);
printf("Enter a string: ");
fgets(str, 50, stdin);

for (int i = 0; i < strlen(str); i++) {
    str[i] = *str + (i+1);
}

fp = fopen("test.txt","w");
fputs(str,fp);
free(str);


}