#include <stdio.h>
void swap(int *x, int *y)
{
    int a = *x;
    *x = *y;
    *y = a;
}
void sort(int *a, int size)
{
    for (int i = 0; a + i < a + size; i++)
    {
        for (int j = 0; a + j < a + size; j++)
        {
            if (*(a + j) > *(a + j + 1))
            {
                swap(a + j, a + j + 1);
            }
        }
    }
}
int main(void)
{
    int a[20] = {1, 2, 1, 2, 3, 2, 1, 2, 3, 1, 2};
    int sizeOfA = sizeof(a) / sizeof(a[0]);
    sort(a, sizeOfA);
    for (int i = 0; i < 20; i++)
    {
        printf("%d ", a[i]);
    }
}