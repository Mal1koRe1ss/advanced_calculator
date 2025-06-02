#include <stdio.h>

#pragma once

#ifndef BITWISE_H
#define BITWISE_H

unsigned int bitwise_and(unsigned int a, unsigned int b);
unsigned int bitwise_or(unsigned int a, unsigned int b);
unsigned int bitwise_xor(unsigned int a, unsigned int b);
unsigned int bitwise_lshift(unsigned int a, unsigned int b);
unsigned int bitwise_rshift(unsigned int a, unsigned int b);
unsigned int bitwise_not(unsigned int a, unsigned int b);

#endif