// Print all enum names and integer values using a loop.
/*
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2
*/
#include <stdio.h>
enum TrafficLight { RED, YELLOW, GREEN };
int main() {
    for (enum TrafficLight light = RED; light <= GREEN; light++) {
        switch (light) {
            case RED:
                printf("RED=%d\n", light);
                break;
            case YELLOW:
                printf("YELLOW=%d\n", light);
                break;
            case GREEN:
                printf("GREEN=%d\n", light);
                break;
        }
    }
    return 0;
}