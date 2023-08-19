#include <stdio.h>
#include <unistd.h>

#include "proc1.h"

int main()
{
    proc1_funct();

    while (1)
    {
        sleep(2);
    }
    return 0;
}