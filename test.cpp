#include <stdio.h>
#include "time.h"
#include <string>

int main(int argc, char* argv[])
{
    printf("This is from Git\n");
    printf("Hello GitHub! ");
    if (argc > 1)
    {
        printf("\tfrom %s\n", argv[1]);
    }
    time_t tcurrent_time = time(NULL);
    printf("\t%lu\n", tcurrent_time);
    return 0;
}
