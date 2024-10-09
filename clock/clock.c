#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>

int main()
{
    int second = 0;
    int minute = 0;
    int hour = 0;
    while(1)
    {
        system ("cls");
        printf ("%02d : %02d : %02d", hour, minute, second);
        fflush (stdout);
        second++;
        if (second == 60)
        {
            second = 0;
            minute++;
        }
        if (minute == 60)
        {
            minute = 0;
            hour++;
        }
        if (hour == 24)
        {
            hour = 0;
            minute = 0;
            second = 0;
        }
        sleep(1);
    }
    return 0;
}