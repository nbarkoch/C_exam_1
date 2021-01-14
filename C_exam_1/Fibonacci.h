#pragma once
#include <stdio.h>

/**
* @file Fibonacci.h
* functions that are ment for a data structure of Fibonacci set implementation
*/

/**
 * @brief the data structure of the fibonacci set
*/
typedef struct FibonacciDB_t
{
    unsigned int *p;
    size_t size;
} FibonacciDB;

/**
 * @brief function that gets an index of number in the Fibonacci set,
		and returns the value of it.
		The library stores calculated values in a Dynamic allocation in a structure.
		In the beginning, the DB is empty. When asked to calculate Fibonacci(n), the function checks whether the value is already stored in the DB.
		If it is, it returns that number; if it isn't, the function will calculate that number and store it in the DB for future use.

 * @param n the index of the fibonacci value
 * @return the value of it
*/
unsigned long long Fibonacci(size_t n);

/**
 * @brief a function that free all the dynamic allocation of the Fibonacci set.
*/
void FreeFibonacciDB();

