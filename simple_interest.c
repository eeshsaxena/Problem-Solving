#5
//Add issue number(5 in this case) then continue with your code and click commmit changes
  
#include <stdio.h>
int main() {
    float principal, rate, time, simpleInterest;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest (in percentage): ");
    scanf("%f", &rate);

    printf("Enter the time period (in years): ");
    scanf("%f", &time);

    simpleInterest = (principal * rate * time) / 100.0;

    printf("Simple Interest = %f\n", simpleInterest);

    return 0;
}
