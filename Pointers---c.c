/* POINTERS----C*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


int main ()
{
int b = 10 ;
char c[10] = "chad" ;
int a = 5;
int *pa = &a;
char *pc= &c;
int *pb = &b;
printf("%p\n",&b);
printf("%p\n",&c) ;
printf("%p\n",&a);

printf("%d\n" , *&b);
printf("%s\n", *&c);
printf("%d\n", *&a);


return 0 ; 

}