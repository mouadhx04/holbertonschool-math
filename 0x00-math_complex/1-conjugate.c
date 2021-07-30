#include "holberton.h"
#include <stdio.h>

/**
 * conjugate - return the conjugate of a given complex number
 * @c: structure of a complex number
 * Return: c
 */

complex conjugate(complex c)
{
	c.im *= -1;
	return (c);
}
