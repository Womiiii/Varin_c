#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t now = time(NULL);
    struct tm *t = localtime(&now);

    int hours = t->tm_hour;
    int mins = t->tm_min;
    int secs = t->tm_sec;
    printf("Time: %02d:%02d:%02d\n", hours, mins, secs);

    return 0;}