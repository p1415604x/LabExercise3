//This is the line causing issue in the conflict branch
//This is the second line causing issue in the <master/*conflict> branch
#include <stdio.h>

int main()
{
    int c;
    printf("2+2=%i\n", c=2+2);
    printf("2-2=%i\n", c=2-2);
    printf("2*2=%i\n", c=2*2);
    printf("2/2=%i\n", c=2/2);
    printf("3%2=%i\n", c=3%2);
    printf("Enough of those math functions. <EXIT>");

    return 0;
}
