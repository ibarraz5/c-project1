/***********
 *
 * Class:    SER486
 * Author:   Ivan Barraza Duran
 * Date:     10/14/2022
 *
 *
 */

#include<stdio.h> // define the header file  
#include <stdlib.h>
#include <avr/io.h>
#include "uart.h"

int main(void)   // define the main function  
{  
    uart_init();
    
    uart_writestr("Hello World from Atmega328\n");
    uart_writestr("SER486 - Homework Assignment 1\n");
    uart_writestr("Ivan Barraza Duran\n");
    int x= sizeof(char);
    int y= x*4;
    char string1[20];
    char string2[20];
	sprintf(string1, "%d", x);
	sprintf(string2, "%d", y);

    char str1[]= "\nchar size (bits) = ";
    char str2[]=" bits";
    char str3[]= "\nint size (bits) = ";
    char str4[]= "\nlong size (bits) = ";
    char str5[]="x";

    strcat(str1, string1);
    strcat(str1, str2);
    strcat(str3, string2);
    strcat(str3, str2);
    strcat(str4, string2);

    uart_writestr(str1);    
    uart_writestr(str3);    
    uart_writestr(str4); 

    while(1){
         printf("Loop forever...");
    }

}