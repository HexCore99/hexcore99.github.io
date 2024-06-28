#include <stdio.h>

typedef struct
{
    int hour;
    int minute;
    int second;
} time;

time time_difference(time later_time, time earlier_time)
{
    time diff;

    if (earlier_time.hour > later_time.hour ||
        (earlier_time.hour == later_time.hour && earlier_time.minute > later_time.minute) ||
        (earlier_time.hour == later_time.hour && earlier_time.minute == later_time.minute && earlier_time.second > later_time.second))
    {
        later_time.hour += 24;
    }

    diff.second = later_time.second - earlier_time.second;
    diff.minute = later_time.minute - earlier_time.minute;
    diff.hour = later_time.hour - earlier_time.hour;

    if (diff.second < 0)
    {
        diff.minute--;
        diff.second += 60;
    }
    if (diff.minute < 0)
    {
        diff.hour--;
        diff.minute += 60;
    }

    return diff;
}

int main()
{
    time earlier, later;
    scanf("%d%d%d%d%d%d", &later.hour, &later.minute, &later.second, &earlier.hour, &earlier.minute, &earlier.second);
    time diff = time_difference(later, earlier);
    printf("Time difference: %d:%d:%d\n", diff.hour, diff.minute, diff.second);
}
