#include <stdio.h>
/* After importing the external variables file  Compilation will work*/
#include "my_variable.c"
/**
 * Extern keyword means that
 * during linking the compiler will scan through
 * all other c-file and locate a defined variable
 * "int var = <int_value>"
 * and incorporated to this main function
 */
extern int var; 
int main(int argc, char **argv, char **envp)
{
	printf("Original value is %d\n",var);
	var = 10;
	printf("Updated value is %d\n",var);
	return (0);
}
/* Compiling this program will fail because the var variable is not defined
 * anywhere in the program*/

/**
 * # Compilation Error
 * gcc main.c
/usr/bin/ld: /tmp/ccEcHVNo.o: warning: relocation against `var' in read-only section `.text'
/usr/bin/ld: /tmp/ccEcHVNo.o: in function `main':
main.c:(.text+0x15): undefined reference to `var'
/usr/bin/ld: warning: creating DT_TEXTREL in a PIE
collect2: error: ld returned 1 exit status
*/

