#include <stdio.h>
#include <stdlib.h>

enum sanfoundry
{
    a, b, c
};
enum sanfoundry g;
main()
{
    g++;
    printf("%d", g);
}
