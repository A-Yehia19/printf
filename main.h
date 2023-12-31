#ifndef PRINT_H
#define PRINT_H

int _printf(const char *format, ...);
int _putchar(char c);
int _putstr(char *str);
int _putnum(long int num);
int _putbinary(unsigned long int num);
int _putunsigned(unsigned long int num);
int _putoctal(unsigned long int num);
int _puthex(unsigned long int num);
int _putHEX(unsigned long int num);
int _putstr_custom(char *str);
int _putaddress(void *address);
int _putrev(char *str);
int _putrot13(char *str);

#endif
