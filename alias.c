#include "shell.h"

/**
 * interactive - returns true if shell is interactive mode
 * @info: struct address
 *
 * Return: 1 if interactive mode, 0 otherwise
 */
int interactive(info_t *info)
{
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

/**
 * is_delim - checks if character is a delimeter
 * @c: the char to check
 * @delim: the delimeter string
 * Return: 1 if true, 0 if false
 */
int is_delim(char c, char *delim)
{
	while (*delim)
		if (*delim++ == c)
			return (1);
	return (0);
}

/**
 * _isalpha - checks for alphabetic character
 * @c: The character to input
 * Return: 1 if c is alphabetic, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/**
 * _atoi - converts a string to an integer
 * @s: the string to be converted
 * Return: the converted number, or -1 on error
 */
int _atoi(char *s)
{
<<<<<<< HEAD
    int i = 0, sign = 1;
    unsigned int result = 0;

    /* Handle leading whitespace */
    while (s[i] == ' ')
        i++;

    /* Handle sign */
    if (s[i] == '-') {
        sign = -1;
        i++;
    } else if (s[i] == '+') {
        i++;
    }

    /* Handle digits */
    for (; s[i] != '\0'; i++) {
        if (s[i] < '0' || s[i] > '9')
            break;

        /* Check for overflow */
        if (result > INT_MAX / 10 ||
            (result == INT_MAX / 10 && (s[i] - '0') > (INT_MAX % 10))) {
            return -1;
        }

        result = result * 10 + (s[i] - '0');
    }

    /* Check for trailing non-numeric characters */
    for (; s[i] != '\0'; i++) {
        if (s[i] != ' ')
            return -1;
    }

    return sign * result;
=======
        int i, sign = 1, flag = 0, output;
        unsigned int result = 0;

        for (i = 0; s[i] != '\0' && flag != 2; i++)
        {
                if (s[i] == '-')
                        sign *= -1;

                if (s[i] >= '0' && s[i] <= '9')
                {
                        flag = 1;
                        result *= 10;
                        result += (s[i] - '0');
                }
                else if (flag == 1)
                        flag = 2;
        }

        if (sign == -1)
                output = -result;
        else
                output = result;

        return (output);
}
