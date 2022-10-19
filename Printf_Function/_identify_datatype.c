/**
 * _strcmp- Compares 2 strings for equality
 * @s1: string to compare against
 * @s2: string to compare to
 *
 * Description- Copies string contents of src to dest for a specified length.
 *
 * Return: formatted string
 */
char *_identify_datatype(char *fmt, int pos_percent_sign, char *datatype, int *end_replace_index)
{
	while (*fmt)
	{
		/*printf("%c", *fmt);*/
		switch (*fmt++) 
		{
			case 's':              /* string */
				s = va_arg(ap, char *);
				printf("%s", s);
				break;
			case 'd':              /* int */
				d = va_arg(ap, int);
				printf("%d", d);
				break;
			case 'c':              /* char */
				/* need a cast here since va_arg only
				takes fully promoted types */
				c = (char) va_arg(ap, int);
				printf("%c", c);
				break;
			default:
			

		}
	}

 return "";
}
