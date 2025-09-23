#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Time
{
    int day;
    int hour;
    int min;
    int sec;

};

int Convert(struct Time *t, int seconds){

    t->day = seconds/86400;
    seconds = seconds%86400;
    t->hour = seconds/3600;
    seconds = seconds%3600;
    t->min = seconds/60;
    t->sec = seconds%60;

    return 0;
}

int main(){

    struct Time time;
    int seconds;
    for (int  i = 0; i < 10; i++)
    {    
        printf("Enter The Number: ");
        scanf("%d", &seconds);
        Convert(&time,seconds);
        printf("Days: %d\n", time.day);
        printf("Hours: %d\n", time.hour);
        printf("Minutes: %d\n", time.min);
        printf("Seconds: %d\n", time.sec);
    }


    



    return 0;
}
