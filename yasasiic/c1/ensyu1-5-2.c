#include <stdio.h>

/*摂氏-華氏対応表を印字する*/
#define LOWER 0        /* 表の上限 */
#define UPPER 300      /* 下限 */
#define STEP 20        /* ステップ・サイズ */

main(){
    int fahr;

    for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
