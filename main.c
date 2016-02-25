
#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, D, x1, x2;
    printf("Input a, b, c\n");
    scanf("%f %f %f", &a, &b, &c);
    D = (b * b) - (4 * a * c);
    D = sqrt(D);

return 0;
}