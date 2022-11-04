#include <stdio.h>
#include <stdlib.h>
#include "addition.h"
#include "sub.h"
int main()
{
    int a=0,b=0;
    printf("Enter new numbers : ");
    scanf("%d%d", &a ,&b);
    printf("\n a=%d \n b=%d" , a, b);

    //print addition of two numbers
    printf("\naddition = %d\n",add(a,b));
    printf("\nsustraction = %d\n", sub(a,b));


    return 0;
}
