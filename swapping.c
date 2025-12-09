#include <stdio.h>


int swap(int *a, int *b){
    int p,x;
    
    p=*a;
    x=*b;
    *a=x;
    *b=p;
    return 1;
}


int main() 
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    swap(&a, &b);
    
    printf("%d", a);
    printf("\n");
    printf("%d", b);
    
    return 0;
}
