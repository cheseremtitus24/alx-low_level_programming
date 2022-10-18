#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "main.h"


/*foo(fstring,curr_str_index, va_arg(ap, char );
 */
void _printf(char *fmt, ...)   /* '...' is C syntax for a variadic function */
{
    /* initialize stdarg generator macro function */
    va_list ap;

    /*start va_arg Value holders */
    int __attribute__((unused)) i;
    double __attribute__((unused)) d;
    float __attribute__((unused)) f;
    char __attribute__((unused)) c;
    char __attribute__((unused)) *str;
    /*End of va_arg Value holders */

    int __attribute__((unused)) process_string;
    int curr_str_index = 0;

    int pos_percent_sign = 0;

    int percent_sign_track_index = 0;
    int process_string_track_index = 0;

    short int flipswitch_percentagesign;

    int stringlen;

    /* Initialize scan flags */
    flipswitch_percentagesign = 1;


    /* check and ensure input string is not NULL*/
    if (!fmt)
    {
        exit(0);
    }

    /* initialize va_arg with va_start */
    va_start(ap, fmt);

    /* Below section should be in a While loop */

    stringlen = _strlen_recursion(fmt);

    while(stringlen) /* iterate through the string until you hit the null String*/
    {
//        printf("string length is %d\n", stringlen);
        /* Scan through the input string and stop at \ or % signs  then check which one comes first
         * based on index*/

        if (flipswitch_percentagesign)
        {
            scan_symbol_strchr(fmt, &percent_sign_track_index, '%', &pos_percent_sign);
            //printf("position of first percentage sign is %d \n", pos_percent_sign);
        }
        /* switch of scanning for percentagesign if percent_sign_track_index is -1*/
        percent_sign_track_index < 0 ? switch_off(&flipswitch_percentagesign) : switch_on(&flipswitch_percentagesign);

        /* Check which occurred first whether a back slash or a percentage symbol */
        /*Handle case where percentage sign appears first*/
        if(percent_sign_track_index > 0)
        {
            /* if the percent sign is not at index 0 pass the stop index in the call to
             * _strchr.
             * When strchr returns it should switch on sentinel search for '%' character
             */


            /* call a function that will handle the format specifier and returns a string to print and updates
             * process_string_track_index */

            /*
             * Function should return
             * 1. data type
             * 2. formatted string to print.
             * 3. updated index
             */

            //_format_specifier_handler(fmt, pos_percent_sign, print )
            _puts_recursion("hello");
            process_string_track_index =pos_percent_sign + 2;
            /* When you receive the skip to index print the returned formatted string and the from-to string indexes*/


            /* increment the process_string_track_index every time an item is printed*/
            //process_string = _strchr(fmt, &process_string_track_index, '%', &curr_str_index );
            //if (process_string_track_index < -1)
             //   return;
                //exit(-1);
            //stringlen -= process_string_track_index;
        }
        else
        {
            /* no backslash or % signs found just process the string as is*/
            process_string = _strchr(fmt, &process_string_track_index, '%', &curr_str_index );
            if (process_string < 0)
            {
                stringlen = 0;

            }
        }

    }

    va_end(ap);
}
/**
 * switch_on- sets a value to 1
 * @scan_flag: pointer to a flag
 *
 * Description- sets the value of a variable to 1
 *
 * Return: void
 */
void switch_on(short int *scan_flag)
{
   *scan_flag = 1;
}
/**
 * switch_off- sets a value to 0
 * @scan_flag: pointer to a flag
 *
 * Description- sets the value of a variable to 0
 *
 * Return: void
 */
void switch_off(short int *scan_flag)
{
    *scan_flag = 0;
}
