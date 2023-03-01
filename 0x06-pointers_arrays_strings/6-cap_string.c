/**
 * cap_string - capitalizes all words of a string.
 * @s: string value
 * Return: s
 */
char *cap_string(char *s)
{
	int x;

	x = 0;
	while (s[x] != '\0')
	{
		if ((s[x - 1] == ' ' || s[x - 1] == '\n'
		|| s[x - 1] == '\t' || s[x - 1] == ','
		|| s[x - 1] == ';' || s[x - 1] == '!'
		|| s[x - 1] == '?' || s[x - 1] == '"'
		|| s[x - 1] == '(' || s[x - 1] == ')'
		|| s[x - 1] == '{' || s[x - 1] == '}'
		|| s[x - 1] == '.')
		&& (s[x] >= 'a' && s[x] <= 'z'))
		{
			s[x] = s[x] - 32;
		}
		else if ((s[0] >= 97 && s[0] <= 122))
		{
			s[0] = s[0] - 32;
		}
		else
		{
			s[x] = s[x];
		}
		x++;
	}
	return (s);
}
