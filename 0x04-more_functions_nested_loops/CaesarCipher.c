#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h> /*Enables for checking of letter Casing upper/lower*/
#define ALPHABET_LIMIT 25
#define BUFF_SIZE 50

/**
 * Algorithm: C = E (p, k) mod 26 = (p + k) mod 26
 * Where: C - Cipher-Text E - Encryption Alg p - Plain-Text k - Shift-key-length
 * AND: mod 26 prevents us from accessing an array out of bounds index.
 * AND: mod also enables us to overlap and route back to the beginning of the
 * Struct Dictionary array.
 */



/**
 * Alphabets - a structure that maps Characters indexes of order occurrence
 * Description: This stucture provides a dictionary lookup table for indexes of
 * alphabet characters
 */
struct Alphabets
{
	char value;
};

char *Encrypt(char*,short int);
char *Decrypt(char* p, short int k);
/* Declared structurei as Global*/
struct Alphabets UpperCase[ALPHABET_LIMIT];
struct Alphabets LowerCase[ALPHABET_LIMIT];

/**
 * main - Entry point
 *
 * Description: Program prints encrypted & decrypted caesar cipher text
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned char  i;
	int counter = 0;
	char*  C;
	char*  D;
	char p[100];
	char c[100];
	//p = malloc(256);
	int k;

	/* Assign lowercase values and indexes to our array of structures */
	for ( i = 'A'; i <= 'Z'; i++)
	{
		UpperCase[counter].value = i;
	//	printf("key:%d value:%c \n",UpperCase[counter].key, UpperCase[counter].value);
		counter++;
	}

	/* Assign uppercase values and indexes to our array of structures */

	counter = 0; /*Reset our counter to start from Zero */
	
	for ( i = 'a'; i <= 'z'; i++)
	{
		LowerCase[counter].value = i;
		//printf("value:%c \n", LowerCase[counter].value);
		counter++;
	}


	
	printf("Enter Plain Text Message To be Encrypted: ");
	scanf("%s",p);
	printf("Enter Displacement Key: ");
	scanf("%d",&k);
	C = Encrypt(p, k);

	printf("Encrypted Text is %s\n", C);	
	
	
	printf("Enter Cipher Text Message To be Decrypted: ");
	scanf("%s",p);
	printf("Enter Displacement Key: ");
	scanf("%d",&k);
	D = Decrypt(p, k);

	printf("Decrypted Text is %s\n", D);
	
	return (0);
}

/**
 * Encrypt - Encrypts a plaintext string
 * @p: input/plaintext string
 * @k: Shift key Cipher
 *
 * Description: Program prints encrypts a string Caesar Cipher
 * Example: Encrypt("abc",3) -> "def"
 * Return: A string pointer
 */
char *Encrypt(char* p, short int k)
{
	/* Convert string to array of characters */
	int i, temp, CaseState;
	char tmpchr;
	// Saved in Heap Therefore it is Persistent Storage.
	char *Cipher = malloc(sizeof(char) * strlen(p));
	
	for (i = 0; i <= strlen(p) ; i++)
	{
		//printf("character:%c ", p[i]);
		/* check whether character is lowercase or uppercase */
		if (islower(p[i]))
		{

			/* iterate through the array of structs of lowercase and retrieve the index of the alphabet */
			for (int j = 0; j <= sizeof(LowerCase); j++)
			{
				/* if the LowerCase[j].value corresponds to current character
				 * perform (p + k) mod 26 operation 
				 */
				if (p[i] == LowerCase[j].value)
				{
					//printf("Iterating through lowercase indexes : %c\n",LowerCase[j].value);
					/* (p + k) */
					temp = j;
					
					temp += k;
					
					/*result mod 26*/
					temp = temp % 26;
					/*perform a reverse lookup to retrieve corresponding alphabet after shift*/
					tmpchr = LowerCase[temp].value;
					//printf("Shiftindex:%d key: %d shiftValue:%c \n",temp ,k, tmpchr);
					/* Concatenate/append result to return string */	
					strncat(Cipher, &tmpchr,1);
					
				}
			}

		}
		else if(isupper(p[i]))
		{

			/* iterate through the array of structs of lowercase and retrieve the index of the alphabet */
			for (int j = 0; j <= sizeof(UpperCase); j++)
			{
				/* if the UpperCase[j].value corresponds to current character
				 * perform (p + k) mod 26 operation 
				 */
				if (p[i] == UpperCase[j].value)
				{
					//printf("Iterating through uppercase indexes : %c\n",UpperCase[j].value);
					/* (p + k) */
					temp = j;
					
					temp += k;
					
					/*result mod 26*/
					temp = temp % 26;
					/*perform a reverse lookup to retrieve corresponding alphabet after shift*/
					tmpchr = UpperCase[temp].value;
					//printf("Shiftindex:%d key: %d shiftValue:%c \n",temp ,k, tmpchr);
					/* Concatenate/append result to return string */	
					strncat(Cipher, &tmpchr,1);
					
				}
			}
		}
		else
			continue;
	}

	return Cipher;
}

/**
 * Decrypt - Decrypts a plaintext string
 * @p: input/plaintext string
 * @k: Shift key Cipher
 *
 * Description: Program prints Dencrypted Caesar Cipher encrypted text
 * Example: Decrypt("def",3) -> "abc"
 * Return: A string pointer
 */
char *Decrypt(char* p, short int k)
{
	/* Convert string to array of characters */
	int i, temp, CaseState;
	char tmpchr;
	char *Decipher = malloc(sizeof(char) * strlen(p));
	//char CipherText[BUFF_SIZE];
	
	for (i = 0; i <= strlen(p) ; i++)
	{
		//printf("character:%c ", p[i]);
		/* check whether character is lowercase or uppercase */
		if (islower(p[i]))
		{

			/* iterate through the array of structs of lowercase and retrieve the index of the alphabet */
			for (int j = 0; j <= sizeof(LowerCase); j++)
			{
				/* if the LowerCase[j].value corresponds to current character
				 * perform (p - k) mod 26 operation 
				 */
				if (p[i] == LowerCase[j].value)
				{
					//printf("Iterating through lowercase indexes : %c\n",LowerCase[j].value);
					/* (p - k) */
					temp = j; /*j is the current index of current character */
					temp += 26;
					
					temp -= k;
					
					/*result mod 26*/
					temp = temp % 26;
					/*perform a reverse lookup to retrieve corresponding alphabet after shift*/
					tmpchr = LowerCase[temp].value;
					//printf("Shiftindex:%d key: %d shiftValue:%c \n",temp ,k, tmpchr);
					/* Concatenate/append result to return string */	
					strncat(Decipher, &tmpchr,1);
					
				}
			}

		}
		else if(isupper(p[i]))
		{

			/* iterate through the array of structs of lowercase and retrieve the index of the alphabet */
			for (int j = 0; j <= sizeof(UpperCase); j++)
			{
				/* if the UpperCase[j].value corresponds to current character
				 * perform (p - k) mod 26 operation 
				 */
				if (p[i] == UpperCase[j].value)
				{
					//printf("Iterating through uppercase indexes : %c\n",UpperCase[j].value);
					/* (p - k) */
					temp = j;
					temp += 26;
					
					temp -= k;
					
					/*result mod 26*/
					temp = temp % 26;
					/*perform a reverse lookup to retrieve corresponding alphabet after shift*/
					tmpchr = UpperCase[temp].value;
					//printf("Shiftindex:%d key: %d shiftValue:%c \n",temp ,k, tmpchr);
					/* Concatenate/append result to return string */	
					strncat(Decipher, &tmpchr,1);
					
				}
			}
		}
		else
			continue;
	}

	return Decipher;
}
