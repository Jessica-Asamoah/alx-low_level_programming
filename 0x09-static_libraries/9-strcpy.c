/**
 * _strcpy - Function that copies the string pointed to src
 * to the buffer pointed to by dest
 * @dest: Pointer to destination of string
 * @src: Pointer to source string to copy from
 *
 * Return: Pointer to destination
 */

char *_strcpy(char *dest, char *src)
{
	char *ax = dest;

	while (*src)
		*dest++ = *src++;
	return (ax);
}
