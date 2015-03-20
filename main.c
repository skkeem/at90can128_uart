#include "serial.h"

#define BAUD 9600
#define MYUBRR F_CPU/16/BAUD-1

int main(void)
{
	putString("Hello world!");
}
