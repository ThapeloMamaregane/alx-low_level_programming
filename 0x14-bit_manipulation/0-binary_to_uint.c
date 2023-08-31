/**
 * binary_to_uint - decimal will convert to binary string
 * @b: binary string
 *
 * Return: decimal
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal;
	unsigned int a;

	for (decimal = 0, a = 0; b[a] != '\0'; a++)
	{
		if (b[a] == '1')
			decimal = (decimal << 1) | 1;
		else if (b[a] == '0')
			decimal <<= 1;
		else if (b[a] != '0' && b[a] != '1')
			return (0);
	}

	return (decimal);
}
