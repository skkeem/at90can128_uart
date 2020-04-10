#include "serial.h"

#define BAUD 9600
#define UBRR_VAL (F_CPU / (16UL * BAUD)) - 1

int main(void)
{
    initUart(UBRR_VAL);
    putString("Hello world!");
}
