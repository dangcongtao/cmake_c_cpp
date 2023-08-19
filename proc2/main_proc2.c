#include <stdio.h>
#include <unistd.h>

#include "proc2.h"

int main()
{
    proc2_funct();
    while (1)
    {
        sleep(2);
    }
    
    return 0;
}