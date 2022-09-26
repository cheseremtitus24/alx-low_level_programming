/**
 * _strspn- Search for character in a string
 * @s1: input string
 * @accept: accepted characters
 *
 * Description- gets the length of a prefix substring
 *
 * Return: integer value
 */

unsigned int _strspn(char *s1, char *accept)
{
	const char *s = s1;
	const char *c;

	while (*s1)
	{
	for (c = accept; *c; c++)
	{
		if (*s1 == *c)
		break;
	}
	if (*c == '\0')
		break;
	s1++;
	}
	return (s1 - s);
}
