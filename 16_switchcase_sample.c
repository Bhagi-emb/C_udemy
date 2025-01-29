/*
switch case sample
*/

#include <stdio.h>

int main() {
    enum week {sunday ,monday, tuesday, wednesday, thursday, friday, saturday};
    enum week today;

    printf("enter week sun(0), mon(1), tue(2), wed(3), thu(4), fri(5), sat(6): ");
    scanf("%d", &today);

    switch (today) {
        case sunday :
            printf("today sunday\n");
            break;
        case monday:
            printf("today monday\n");
            break;          
        case tuesday:
            printf("today tuesday\n");
            break;
        case wednesday:
            printf("today wednesday\n");
            break;
        case thursday:
            printf("today thursday\n");
            break;
        case friday:
            printf("today friday\n");
            break;
        case saturday:
            printf("today saturday\n");
            break;
        default:
            printf("invalid input\n");            
    }
    return 0;
}