#include <stdint.h>

void initSerial(void);
void eputchar(char c);
char egetchar(void);
void eputs(char *String);
void printDecimal(int32_t Value);
int dataavailable(int);  // data available used in serial.c 
