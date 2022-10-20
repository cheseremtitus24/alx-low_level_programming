/**
 * _strcmp- Compares 2 strings for equality
 * @s1: string to compare against
 * @s2: string to compare to
 *
 * Description- Copies string contents of src to dest for a specified length.
 *
 * Return: formatted string
 */
char *_identify_datatype(char *fmt, __attribute__((unused)) int pos_percent_sign, char *datatype, __attribute__((unused)) int *end_replace_index)
{
	__attribute__((unused)) char *s;
	__attribute__((unused)) int i;
	__attribute__((unused)) double f;
	__attribute__((unused)) char c;
	while (*fmt)
	{
		/*printf("%c", *fmt);*/
		switch (*fmt++) 
		{
			case 's':              /* string */
				datatype = "string";
				return (datatype);
			/*	s = va_arg(ap, char *);
			 *printf("%s", s);
			 break;
			 */
			case 'd':              /* int */
				datatype = "integer";
				return (datatype);
			case 'c':              /* char */
				datatype = "character";
				return (datatype);
			case 'f':              /* char */
				datatype = "double";
				return (datatype);
			

		}
	}

 return datatype;
}
