
Pull requests
Issues
Marketplace
Explore
@Sammie2022
em432 /
alx-low_level_programming
Public

Code
Issues
Pull requests 1
Actions
Projects
Security

    Insights

alx-low_level_programming/0x06-pointers_arrays_strings/100-rot13.c
@em432
em432 my commit
Latest commit 32dc180 on 25 Mar
History
1 contributor
29 lines (25 sloc) 463 Bytes
#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: input string.
 * Return: the pointer to dest.
 */

char *rot13(char *s)
{
int count = 0, i;
char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

while (*(s + count) != '\0')
{

for (i = 0; i < 52; i++)
{
if (*(s + count) == alphabet[i])
{
*(s + count) = rot13[i];
break;
}
}
count++;
}

return (s);
}
