#include <stdio.h>

main()
{
    int c, n1, n2, n3;

        n1 = 0;
        n2 = 0;
        n3 = 0;
    while ((c = getchar()) != EOF)
    {
        if(c == ' ')++n1;
        if(c == '\t')++n2;
        if(c == '\n')++n3;
    }
    printf("\n%d\n", n1);
    printf("%d\n", n2);
    printf("%d\n", n3);
}
