#include <stdio.h>
#include <string.h>
void strhalf(char *s, char **ptr)
{
    *ptr = s;
    printf("%p ", ptr);
    *ptr = s + strlen(s) / 2;
    printf("%p ", ptr);
    printf("%s ", *ptr);
}
int main(void)
{
    char str[20] = "WolloW";
    char *ptr;
    strhalf(str, &ptr);
    printf("%s\n", *ptr);
}