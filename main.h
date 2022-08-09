#ifndef MAIN_H                                                                                                                          
#define MAIN_H                                                                                                                          
#include <stddef.h>                                                                                                                     
#include <stdio.h>                                                                                                                      
#include <stdarg.h>                                                                                                                     
#include <stdlib.h>                                                                                                                     
                                                                                                                                        
char *num_str(int num, int base);                                                                                                       
char *num_strX(int num, int base);                                                                                                      
int print_str(char *container);                                                                                                         
int _printf(const char *format, ...);                                                                                                   
int print_string(const char *s);                                                                                                        
int _putchar(char c);                                                                                                                   
int _specifiers(char next, va_list ptr);                                                                                                
int print_char(va_list ptr);                                                                                                            
                                                                                                                                        
/**                                                                                                                                     
 * struct identifierStruct - structure definition of a printTypeStruct                                                                  
 * @indentifier: type                                                                                                                   
 * @pointer: function to print                                                                                                          
 */                                                                                                                                     
typedef struct identifierStruct                                                                                                         
{                                                                                                                                       
char *indentifier;                                                                                                                      
int (*pointer)(va_list);                                                                                                                
} identifierStruct;                                                                                                                     
                                                                                                                                        
#endif
