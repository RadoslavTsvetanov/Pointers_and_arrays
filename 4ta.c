#include <stdio.h>
void print_table(int arr[][4], int colums, int rows)
{
    for (int i = 0; arr + i < arr + rows; i++)
    {
        for (int j = 0; arr + j < arr + colums; j++)
        {
            printf("%d ", *(*(arr + i) + j));
        }
        printf("\n");
    }
}
int main(void)
{
    int arr[4][4] = {
        {2, 3, 4, 5},
        {3, 2, 1, 2},
        {4, 1, 2, 3},
        {5, 1, 6, 2}};
    print_table(arr, 4, 4);
}