#include <stdio.h>

int main(){
    int t , seconds , minutes , hours;
    printf("Enter the time in seconds:\n");
    scanf("%d", &t);
    if(t > 60){
        minutes = t / 60;
        seconds = t % 60;
        if(minutes > 60){
            hours = minutes / 60;
            minutes = minutes % 60;
            printf("The time is: %d hours, %d minutes and %d seconds", hours, minutes, seconds);
        }
        else{
            printf("The time is: %d minutes and %d seconds", minutes, seconds);
        }
    }
    else{
        printf("The time is: %d seconds", t);


    }
    return 0;
}