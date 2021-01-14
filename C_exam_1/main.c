// C_exam_1.c : This file contains the 'main' function. Program execution begins and ends there.
// 206295305 naor bar kochva

#include <stdio.h>
#include "Fibonacci.h"

/**
* @file Main.c
* running all functions from Fibonacci.h
*/
int main()
{
    int i = 3;
    printf("Hello World! %llu\n", Fibonacci(7));
    for (size_t i = 0; i < 7; i++)
    {
        printf("%llu\n",Fibonacci(i));
    }
    Fibonacci(10000000);
    for (size_t i = 0; i < 30; i++)
    {
        printf("%llu\n", Fibonacci(i));
    }
    FreeFibonacciDB();
}