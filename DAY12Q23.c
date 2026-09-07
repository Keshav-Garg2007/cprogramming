// Write a program to calculate library fine based on late days as follows: 
// First 5 days late: 2/day 
// Next 5 days late: 4/day 
// Next 20 days days late: 6/day 
// More than 30 days: Membership Cancelled.

#include <stdio.h>

int main(){
    int latedays;
    printf("Enter the no. of late days:");
    scanf("%d", &latedays);
    if (latedays <= 5) {
        printf("Library fine: %d\n", latedays * 2);
    } else if (latedays <= 10) {
        printf("Library fine: %d\n", 10 + (latedays - 5) * 4);
    } else if (latedays <= 30) {
        printf("Library fine: %d\n", 30 + (latedays - 10) * 6);
    } else {
        printf("Membership Cancelled.\n");
    }
    return 0;
}