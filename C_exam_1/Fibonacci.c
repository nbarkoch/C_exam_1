#include "Fibonacci.h"
#include <stdio.h>


/**
 * @brief the initializing of the data structure of the fibonacci set
*/
static FibonacciDB fibonacciDB = { 0 };

/**
 * This function removed because of "free allocation" problem..
*/
unsigned long long FibonacciOld(size_t n)
{
	unsigned long long* ptr;
	if (fibonacciDB.size == 0)
	{
		ptr = fibonacciDB.p+1;
		fibonacciDB.p = malloc(sizeof(unsigned) + sizeof(long));
		ptr = malloc(sizeof(unsigned) + sizeof(long));
		fibonacciDB.size = 2;
		*fibonacciDB.p = 0;
		*(fibonacciDB.p+1) = 1;

	}
	if (fibonacciDB.size > n)
	{
		return *(fibonacciDB.p + n);
	}
	else
	{
		for (size_t i = fibonacciDB.size; i < n; ++i, ++fibonacciDB.size)
		{
			ptr = &fibonacciDB.p[i];
			ptr = malloc(sizeof(unsigned) + sizeof(long));
			fibonacciDB.p[i] = fibonacciDB.p[i-2] + fibonacciDB.p[i-1];
		}
		return fibonacciDB.p[n];
	}
}



void FreeFibonacciDB()
{
	free(fibonacciDB.p);
}


unsigned long long Fibonacci(size_t n)
{
	unsigned long long* ptr;
	if (fibonacciDB.size == 0)
	{
		fibonacciDB.p = malloc(sizeof(unsigned) + sizeof(long)*2);
		fibonacciDB.size = 2;
		*fibonacciDB.p = 0;
		*(fibonacciDB.p + 1) = 1;
	}
	if (fibonacciDB.size >= n)
	{
		return *(fibonacciDB.p + n);
	}
	else
	{
		ptr = malloc(sizeof(unsigned) + sizeof(long) * n);
		// if overflow accures
		if (ptr == NULL)
			return 0;
		free(fibonacciDB.p);
		fibonacciDB.p = ptr;
		// if we have the allocation as we asked, then we can do that size now equals to n.
		fibonacciDB.size = n;
		fibonacciDB.p[0] = 0;
		fibonacciDB.p[1] = 1;
		for (size_t i = 2; i < n; ++i)
		{
			fibonacciDB.p[i] = fibonacciDB.p[i - 2] + fibonacciDB.p[i - 1];
		}
		return fibonacciDB.p[n];
	}
}