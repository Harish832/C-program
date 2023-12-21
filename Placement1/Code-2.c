#include <stdio.h>
int main() {
    int num=1000;
    int year=num/365;
    int week=year*52;
    int rem_week=(num%365)/7;
    int rem_days=num%365;
    printf("Number of complete years: %d\n", year);
    printf("Number of weeks: %d\n", week);
    printf("Number of remaining weeks: %d\n", rem_week);
    printf("Number of remaining Days: %d", rem_days);
}