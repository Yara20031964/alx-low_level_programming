#include "main.h"

/**
* last_index-print a string  is function helped me to solve task
*
*@s:input IS ARGUMENT
*
*Return: Always 0 (Success)
*
*/

int is_palindrome(char *s);
int check(char *s, int start, int end, int mod);
int last_index(char *s)
{
int n = 0;
if (*s > '\0')
n += last_index(s + 1) + 1;
return (n);
}

/**
*is_palindrome-print  a string, followed by a new line
*
*@s:input
*
*Return: Always 0 (Success)
*
*/
int is_palindrome(char *s)
{
int end = last_index(s);
return (cheak(s, 0, end - 1, end % 2));
}

/**
*check-print a string, followed by a new line
*@end:input
*@start:input
*@mod :input
*@s :input
*Return: Always 0 (Success)
*/

int check(char *s, int start, int end, int mod)
{
if ((start == end && mod != 0) || (start == end + 1 && mod == 0))
return (1);

else if (s[start] != s[end])

return (0);

else

return (cheak(s, start + 1, end - 1, mod));
}
