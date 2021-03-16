/*WAP to add two numbers entered through keyboard by using a suitable user defined
 function (say SUM) for addition operation*/
 #include <stdio.h>
 #include <conio.h>
 int SUM (int, int);
 void main()
 {
 	int s,x,y;
 	printf("Enter two numbers:\n");
 	scanf("%d\n%d", &x, &y);
 	s=SUM(x,y);
 	printf("Sum of the two numbers is: %d", s);
 	getch();

 }
 int SUM (int a, int b)
 {
 	int c;
 	c=a+b;
 	return (c);
 }
