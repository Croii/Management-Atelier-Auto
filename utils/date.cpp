#include "../include/date/date.h"

int getCurrentYear()
{
    // get the current system time
    time_t systemTime = time(0);
    tm *ltm = localtime(&systemTime);
    // ltm->year stores the years elapsed since 1900
    return 1900 + ltm->tm_year;
}