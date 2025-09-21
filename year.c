#include <stdio.h>
#include <time.h>

int main(){
    time_t timeToday = time(NULL);
    struct tm *time = localtime(&timeToday);
    printf("we ar in the year %d", time->tm_year + 1900);

}