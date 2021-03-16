#include <stdio.h>
#include <conio.h>
void main()
{
    int a[100], i, j, k, n;
    

    printf("Enter the array size:\n");
    scanf("%d", &n);

    printf("Enter %d array elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The new array is:\n");
    for(i = 0; i < n; i++)
    {
        for(j = i+1; j < n; )
        {
            if(a[j] == a[i])
            {
                for(k = j; k < n; k++)
                {
                    a[k] = a[k+1];
                }
                n--;
            }
            else
            {
                j++;
            }
        }
    }

    for(i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
 	getch();   
}
