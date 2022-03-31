/**
* _strlen_recursion - function
*
* @s: string
* Return: string lenght
*/

int _strlen_recursion(char *s)
{

	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
* palidrone - function
*
* @s: string
* @taille: lenght
* @i: the number
* Return: 0 or 1
*/
int palidrone(char *s, int taille, int i)
{
	if (s[i] != '\0')
	{
		if (s[i] != s[taille - i])
			return (0);
		else
			return (palidrone(s, taille, i + 1));
	}
	else
		return (1);
}

/**
* is_palindrome - function
*
* @s: string
* Return: Always 0.
*/

int is_palindrome(char *s)
{
	if (s[0] == '\0')
		return (1);
	return (palidrone(s, _strlen_recursion(s) - 1, 0));
}
