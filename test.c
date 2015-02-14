#include "stdio.h"

int main(int argc, char* argv[])
{
    printf("Hello GitHub! ");
    if (argc > 1)
    {
        printf("from %s\n", argv[1]);
    }
    return 0;
}
