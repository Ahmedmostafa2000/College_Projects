#include <stdio.h>
int main()
{
    int x[100], a[100], y[100], i, j, k, m, n, temp, bb;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }
    m = 0;

    for (i = 0; i < n; i++)
    {   //y is the positive array
        if (x[i] > 0)
        {
            y[m] = x[i];
            m++;
        }
    }

    for (i = 0;i < m; i++)
    {
        for (j = i+1; j < m; j++)
        {
            if (y[i] > y[j])
            {
                temp = y[i];
                y[i] = y[j];
                y[j] = temp;

            }
        }

    }

    k = y[0];
    bb = y[m - 1];


    for (i = 0; i <bb; i++)
    {
        if (y[i] != i)
        {
            printf("%d", i);
            break;
        }

    }
}
