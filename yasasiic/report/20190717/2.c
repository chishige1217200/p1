/*
  ニュートン法による方程式の解法

  コンパイル方法：gcc -lm newton-method-1.c
*/

#include <stdio.h>  /*printfを利用するのに必要*/
#include <math.h>   /*各種算術関数のために必要*/

/* f(x) = 0 の x を求める問題となる関数 */
double f(double x)
{
    return x * x * x - 2 * x - 5;
}

/* f の一次導関数*/
double f1(double x)
{
    return 3 * x * x - 2;
}

/* ニュートン法の繰り返し関数 */
double newton(double xk)
{
    return xk - (f(xk) / f1(xk));
}

main()
{

    /* 各種初期値設定 */
    int n = 0;            /* 繰り返し回数の初期値 */
    double delta = 3E-15; /* 許容誤差3E-15 */

    double xk = 0;        /* 初期値 */

    /* 開始メッセージを表示 */
    printf("Newton method program start.\n");

    /* fabs(x) … x の絶対値を求める関数*/
    while(fabs(f(xk)) > delta){ /* 収束条件：f(x) がdelta以下になる */
        n = n + 1;
        xk = newton(xk);
        printf("k:%d xk:%f f(xk):%f f'(xk):%f\n", n, xk, f(xk), f1(xk));
    }

    /* 終了メッセージを表示 */
    printf("done.\n");
}
