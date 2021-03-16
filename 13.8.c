#include <stdio.h>
#include <conio.h>
void main()
{
    int a[1000],a1[500],a2[500];
    int k=0,c=0,i,n;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            a1[k]=a[i];
            k++;
        }
        else
        {
            a2[c]=a[i];
            c++;
        }
    }
    	printf("The Even entries are:\n");
        for(i=0;i<k;i++)
        {
        	printf("%d\n",a1[i]);
		}
		printf("The Odd entries are:\n");    
        for(i=0;i<c;i++)
        {
        	printf("%d\n",a2[i]);
		}
	getch();
}
