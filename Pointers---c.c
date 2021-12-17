/* POINTERS----C*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

int main()
{
    int a = 99 ;
    int* p;
    p = &a;
    //void pointer -- generic pointer type 
    void *z;
    z = p;
    printf("address = %d ",z);
    
    
    return 0 ;
}