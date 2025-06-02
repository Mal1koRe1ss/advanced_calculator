#include <stdio.h>
#include <stdlib.h>
#include "include/utils.h"

#define PI 3
#define PI14 3.14

int running = 1;
double pi = PI14;

int main()
{
    menu(running, pi);
    return 0;
}