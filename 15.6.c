 #include <stdio.h>
 #include <conio.h>
 int swap(int,int);
 void main()
 {
 	int a,b,s;
 	printf("Enter the value of 'a': ");
 	scanf("%d", &a);
 	printf("Enter the value of 'b': ");
 	scanf("%d", &b);
 	s=swap(a,b);
 	printf("\nThe new value of 'a'is: %d\nThe new value of 'b'is: %d",s);
 	getch();

 }
 int swap(int m , int n)
{
    
    int r=0;
    
	r=m;
	m=n;
	m=r;
        
    return (m);
}
