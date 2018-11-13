//
//  main.c
//  Lab16_ExtraCredit
//
//  Created by kimo on 11/12/18.
//  Copyright © 2018 CS1. All rights reserved.
//

#include <stdio.h>

int main()
{
    int r, c, z;
    
    puts("A)");
    
    for (r = 1; r <=10; ++r)
    {
        
        for (c = 1; c <=r; ++c)
        {
            printf("*");
        }
        puts(" ");

    }

getchar();

puts("B)");

for (r = 10; r >=1; --r)
{

    for (c = 1; c <= r; ++c)
    {
        printf("*");
    }
    puts(" ");

}

getchar();

puts("C)");

for (r = 10; r >=1; r--)
{
   
    for (c = 10; c > r; c--)
    {
        printf(" ");
    }
   
    for (z = 1; z <= r; ++z)
    {
        printf("*");
    }
    printf("\n");

}

getchar();

puts("D)");

for (r = 1; r <=10; ++r)
{
    
    for (c = 10; c > r; c--)
    {
        printf(" ");
    }
    
    for (z = 1; z <= r; ++z)
    {
        printf("*");
    }
    printf("\n");
    
}

    
}
