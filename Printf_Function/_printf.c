#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "main.h"


/*foo(fstring,curr_str_index, va_arg(ap, char );
 */
void _printf(char *fmt, ...)   /* '...' is C syntax for a variadic function */
{
    char *process_string;
    unsigned int curr_str_index = 0;

    unsigned int pos_back_slash = -1;
    unsigned int pos_percent_sign = -1;

    unsigned int percent_sign_track_index = 0;
    unsigned int back_slash_track_index = 0;
    unsigned int process_string_track_index = 0;

    short int flipswitch_backslash;
    short int flipswitch_percentagesign;

    unsigned int stringlen = _strlen_recursion(fmt);
    /* Initialize scan flags */
    flipswitch_backslash = 1;
    flipswitch_percentagesign = 1;


    if (!fmt)
    {
        exit(0);
    }
    /* Parse the format specifier and arguments in pairs*/

    /* Grab the format values Based on Type */
    int i;
    int d;
    int fl;
    char c;
    char *str;

    /* Below section should be in a While loop */


    while(stringlen) /* iterate through the string until you hit the null String*/
    {
        /* Scan through the input string and stop at \ or % signs  then check which one comes first
         * based on index*/

        if (flipswitch_backslash)
        {
            scan_symbol_strchr(fmt, &back_slash_track_index, '\\', &pos_back_slash);
            printf("position of first backslash is %d \n", pos_back_slash);
        }

        /* switch of scanning for backslash if back_slash_track_index is -1*/
        back_slash_track_index < 0 ? switch_off(&flipswitch_backslash) : switch_on(&flipswitch_backslash);

        if (flipswitch_percentagesign)
        {
            scan_symbol_strchr(fmt, &percent_sign_track_index, '%', &pos_percent_sign);
            printf("position of first percentage sign is %d \n", pos_percent_sign);
        }
        /* switch of scanning for percentagesign if percent_sign_track_index is -1*/
        percent_sign_track_index < 0 ? switch_off(&flipswitch_percentagesign) : switch_on(&flipswitch_percentagesign);

        /* Check which occurred first whether a back slash or a percentage symbol */
        /*Handle case where percentage sign appears first*/
        if(back_slash_track_index > percent_sign_track_index)
        {
            /* call a function that will handle the format specifier and returns a string to print and updates
             * process_string_track_index */
            /* When you receive the skip to index print the returned formatted string and the from-to string indexes*/

            /* process percentage sign first
            if (process_string_track_index < -1)
                exit(-1);
                */
            /* increment the process_string_track_index every time an item is printed*/
            process_string = _strchr(fmt, &process_string_track_index, '%', &curr_str_index );
        }

    }


    if (back_slash_track_index < percent_sign_track_index)
    {
        /* process backslash first*/
        if (process_string_track_index < 0)
            exit(0);
        /* prints all string up to the % sign*/
        process_string = _strchr(fmt, &process_string_track_index, '%', &curr_str_index );


    }

    else
    {
        if (process_string_track_index < -1)
            exit(-1);
        /* no backslash or % signs found just process the string as is*/
        process_string = _strchr(fmt, &process_string_track_index, '%', &curr_str_index );

    }




    /*scan_symbol_strchr(fmt, back_slash_track_index, '\\', &pos_back_slash);
    printf("position of second backslash is %d \n", pos_back_slash);
    back_slash_track_index = pos_back_slash + 1;
    scan_symbol_strchr(fmt, back_slash_track_index, '\\', &pos_back_slash);
    printf("position of third backslash is %d \n", pos_back_slash);
     */
    //scan_symbol_strchr(fmt, back_slash_track_index, '%', &pos_back_slash);





    //process_string = _strchr(fmt, '%', &curr_str_index );

    if (process_string != NULL)
    {
        //printf("%s\n current position: %d", process_string, curr_str_index);
        // call  format specifier with args of current str index and first arg index of e.g replace number/string
        //foo(f,curr_str_index, va_arg(ap, char *);
        //function parses and prints the format and returns the proper position of string index after reading and outputting.
    }
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
