// #include "cs50.h"
// #include <stdio.h>

// void meow(int n); // function declaration

// int main(void)
// {
//     meow(3);
// }

// void meow(int n) 
// {
//     for(int i = 0; i < n; i++) {
//         printf("meow\n");
//     }
// }


 // int x = get_int("What's x? ");
    // int y = get_int("What's y? ");

    // if( x < y)
    // {
    //     printf("x is less than y\n");
    // } 
    // else if (x > y) 
    // {
    //     printf("x is greater than y\n");
    // }
    // else {
    //     printf("x is equal to y\n");
    // }

    // while 
    // int i = 0;
    // while(i < 3) {
    //     printf("hello \n");
    //     i++;
    // }

    // for 
    // for(int i = 0; i < 3; i++) {
    //     printf("hello \n");
    // }

// Calculator 
// #include "cs50.h"
// #include <stdio.h>

// int add(int a, int b);
// int main(void) {
//     int x = get_int("x: ");
//     int y = get_int("y: ");

//     int z = add(x,y);
//     printf("%i\n", z);
// }

// int add(int a, int b) {
//     return a + b;
// }

// mario.c
// #include "cs50.h"
// #include <stdio.h>

// void main(void) {
//     int n;
//     do 
//     {
//         n = get_int("Size: ");
//     }
//     while (n < 1);

//     for(int i = 0; i < n; i++)
//     {
//         for(int j = 0; j < n; j++)
//         {
//             printf("#");
//         }
//         printf("\n");
//     }
// }


#include "cs50.h"
#include <stdio.h>


int main(void) {
    int x = get_int("x: ");
    int y = get_int("y: ");

    float z = (float)x / (float)y;

    printf("%.10f\n", z);
}