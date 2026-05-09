#include <stdio.h>
#include <math.h>
//Info: Ekam Kooner, 91729749, ekooner@student.ubc.ca, L2A

int main(void)
{
    double AB, BC;
    double theta1, theta2;
    double x, y;

    printf("Enter the length of AB:\n");
    scanf("%lf", &AB);

    printf("Enter the length of BC:\n");
    scanf("%lf", &BC);

    printf("Enter the angle theta1 in radians:\n");
    scanf("%lf", &theta1);

    printf("Enter the angle theta2 in radians:\n");
    scanf("%lf", &theta2);

    x = AB * cos(theta1) + BC * cos(theta2);
    y = AB * sin(theta1) + BC * sin(theta2);

    printf("(%.6f, %.6f)\n", x, y);

    return 0;
}
