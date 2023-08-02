/**
 * getLength - get string length
 * @s: string
 * Return: string length
 */
int getLength(char *s)
{
int length;
for (length = 0; s[length]; length++)
{}
return (length);
}
/**
 * checkEqualChar - check if same char in string
 * @s: string to be checked
 * Return: 1 if a char is a equal and 0 if not
 */
int checkEqualChar(char *s, int first, int second)
{

if (first == second)
{
return (1);
}
if (first == second + 1 && s[first] == s[second])
{
return (1);
}

if (s[first] != s[second]) return (0);

if (s[first] == s[second]) checkEqualChar(s, first + 1, second - 1);
return 1;
}
/**
 * is_palindrome - check if string palindrome
 * @s: string to be checked
 * Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
int length = getLength(s);
return (checkEqualChar(s, 0, length - 1));
}
