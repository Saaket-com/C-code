#include <stdio.h>



struct Data
{
    int num1;
    int num2;
    int op; 
};


int calculator(struct Data data){
    float result;
    if (data.op == 1)
    {
        result = data.num1 + data.num2;
        printf("%d\n",(int)result);
    }
    else if (data.op == 2)

    {
        result = data.num1 - data.num2;
        printf("%d\n", (int)result);
    }
    else if (data.op == 3)
    {
        result = data.num1 * data.num2;
        printf("%d\n",(int)result);
    }
    else if (data.op == 4)
    {
        if (data.num2 != 0)
        {
            result = (float)data.num1 / (float)data.num2;
            printf("%.2f\n",(float)result);
        }
        else
        {
            printf("Zero Division Error\n");
        }
        
    }
    
    
}
int main() 
    {
    struct Data data;

    scanf("%d", &data.num1);
    scanf("%d", &data.num2);
    scanf(" %d", &data.op);

    calculator(data);

    return 0;
}
