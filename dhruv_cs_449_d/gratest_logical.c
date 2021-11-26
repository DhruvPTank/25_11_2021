#include <stdio.h>
void main ()
{
	int a;
	int b;
	int c;
	 printf("enter the value of a\n");
	 scanf("%d" , &a);

	 printf("enter the value of b\n");
	 scanf("%d" , &b);

	 printf("enter the value of c\n");
	 scanf("%d" , &c);

	 if(a>b && a>c)
	 {
	 	printf("a is gratesst\n");
	 }
	
 if(b>a && b>c)
	 {
	 	printf("b is gratesst\n");
	 }
	
	 if(c>a && c>b)
	 {
	 	printf("c is gratesst\n");
	 }
	
}