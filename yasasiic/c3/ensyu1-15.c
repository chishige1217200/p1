#include <stdio.h>
float ftoc(float fahr);
main()
{
    float fahr, celsius;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper){
        printf("%3.0f %6.1f\n",fahr,ftoc(fahr));/*ここでは，printf内に処理を任せている．*/
            fahr = fahr + step;
    }
    return 0;
}

float ftoc(float fahr)
{
    float celsius;
    celsius = (5.0/9.0) * (fahr-32.0);
    return celsius;
}
