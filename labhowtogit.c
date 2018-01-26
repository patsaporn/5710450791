#include <stdio.h>
void main()
{
    int hour, min;
    printf("Enter hour: ");
    scanf("%d", &hour);
    printf("Enter minute: ");
    scanf("%d", &min);
    printf("Time is %0.2d:%0.2d", hour, min);
}