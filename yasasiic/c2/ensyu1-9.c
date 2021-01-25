#include <stdio.h>

main()
{
    int c, buf;

    buf = 0;
    while((c = getchar()) != EOF){
        if(c == ' '){
            buf = ' ';
        }
        else{
            if(buf == ' '){
                putchar(buf);
                buf = 0;
            }
            putchar(c);
        }
    }
}
