#include <stdio.h>
/* getchar() != EOFという式の値が0か1であることを確認するプログラム */
int main()
{
    while(printf("getchar() != EOF : %d\n", getchar() != EOF));
}

