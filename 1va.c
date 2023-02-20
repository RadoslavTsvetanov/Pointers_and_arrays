#include <stdio.h>
int main(void)
{
    char a[20] = "Hellow";
    char *ptr = a;
    int len = 0;
    for (int i = 0; *(ptr + i) != '\0'; i++)
    {
        len++;
    }
    printf("%d\n", len);
}