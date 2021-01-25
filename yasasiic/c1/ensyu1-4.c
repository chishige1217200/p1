#include <stdio.h>
/* fahr = 0.20,・・・,300に対して，華氏-摂氏温度対応表を印字する；浮動小数点版 */
main()
{
    float celsius, fahr;
    int lower, upper, step;

    lower = 0;      /* 温度表の下限 */
    upper = 300;    /* 上限 */
    step = 20;      /* きざみ */

    celsius = lower;
    printf("摂氏と華氏の対応表\n");
    printf("Celsius   Fahr\n");
    while (celsius <= upper){
        fahr = (9.0/5.0) * celsius + 32.0;
        printf("%7.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
