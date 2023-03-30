//
// Created by reillyrd on 3/30/2023.
//

#ifndef PARSER1_ASSERT_H
#define PARSER1_ASSERT_H
#include <stdio.h>

extern void __attribute__((noreturn)) die(char *format, ...);

#define assert(expr)						\
	do {							\
		if (!(expr))					\
			die("assertion %s failed at %s line %d",\
			    __STRING(expr), __FILE__, __LINE__);\
	} while (0)
#endif //PARSER1_ASSERT_H
