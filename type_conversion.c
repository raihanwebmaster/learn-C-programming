#include<stdio.h>

int main(){
    int number = 10;
    double realNumber = number;
    printf("%d, %lf", number, realNumber);

    double realNumber1 = 30.5;
    printf("%d\n", (int)realNumber1);
    return 0;
}
