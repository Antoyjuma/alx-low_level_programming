#include "main.h"
/**
*_strstr - func that locates a substring.
*@haystack: first occurrence of the substring in the strin.
*@needle: substring character
*Return: success
*/
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
