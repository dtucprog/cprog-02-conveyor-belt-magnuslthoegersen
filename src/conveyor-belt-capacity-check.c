#include <stdio.h>

int MOTOR_CAPACITY = 12;

int main() {
    int motorCount, totalPackageWeight;
    printf("How many motors are carrying the packages?\n");
    scanf("%d", &motorCount);
    printf("%d\n", motorCount);
    printf("How many kg of packages do we expect?\n");
    scanf("%d\n", &totalPackageWeight);
    printf("%d\n", totalPackageWeight);
    if (totalPackageWeight > motorCount * MOTOR_CAPACITY){
        printf("No. The conveyor belt cannot carry the packages.");
    } else{
        printf("Yes! The conveyor belt can carry the packages.");
    }


}
