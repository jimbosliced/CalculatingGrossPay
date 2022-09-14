#include <stdio.h>
#include <stdlib.h>


int main()
{

    double work_hours = 0;
    double gross_pay = 0;
    double taxes = 0;
    double net_pay = 0;


    printf("Enter the number of hours you worked this week: ");
    scanf("%lf", &work_hours);

    printf("You worked: %.2lf", work_hours);

    if (work_hours <= 40)
        gross_pay = 12 * work_hours;
    else
    {
        gross_pay = (40*12 + (work_hours - 40)*18);
    }

    printf("\nYour gross pay including over time is: $%.2lf", gross_pay);


    if (gross_pay <= 300){
        taxes = 0.15*gross_pay;
    }
    else if(gross_pay > 300 && gross_pay <= 450) {
        taxes = ((0.15*300) + (0.2 * (gross_pay - 300)));
    }
    else if (gross_pay > 450) {
        taxes = (0.15*300 + 0.2*150 + (gross_pay-450)*0.25);
    }

    net_pay = gross_pay - taxes;

    printf("\nYour gross pay is %.2lf", gross_pay);
    printf("\nYour taxes are %.2lf", taxes);
    printf("\nYour net pay is %.2lf", net_pay);






    return 0;
}
