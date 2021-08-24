#include <stdio.h>
#include <stdint.h>
#include <stddef.h>
#include <string.h>


#define CTYPELIST \
        _X("c_int",           int   ) \
        _X("c_short",         short ) \
        _X("c_long",          long  ) \
        _X("c_long_long",     long long ) \
        _X("c_signed_char",   signed char ) \
        _X("c_size_t",        size_t ) \
        \
        _X("c_int8_t",        int8_t ) \
        _X("c_int16_t",       int16_t ) \
        _X("c_int32_t",       int32_t ) \
        _X("c_int64_t",       int64_t ) \
        \
        _X("c_int_least8_t",  int_least8_t ) \
        _X("c_int_least16_t", int_least16_t ) \
        _X("c_int_least32_t", int_least32_t ) \
        _X("c_int_least64_t", int_least64_t ) \
        \
        _X("c_int_fast8_t",   int_fast8_t ) \
        _X("c_int_fast16_t",  int_fast16_t ) \
        _X("c_int_fast32_t",  int_fast32_t ) \
        _X("c_int_fast64_t",  int_fast64_t ) \
        \
        _X("c_intmax_t",      intmax_t ) \
        _X("c_intptr_t",      intptr_t ) \
        _X("c_ptrdiff_t",     ptrdiff_t ) \
        \
        _X("c_float",         float ) \
        _X("c_double",        double ) \
        _X("c_long_double",   long double ) \
        \
        _X("c_float_complex", float _Complex ) \
        _X("c_double_complex", double _Complex ) \
        _X("c_long_double_complex", long double _Complex ) \
        \
        _X("c_bool",          _Bool ) \
        _X("c_char",          char )



int main(int argc, char ** argv)
{

	int divisor = 1;	
#define _X(a,b) \
	divisor = strstr(a,"complex") == NULL ? 1 : 2; \
	printf("integer, parameter :: %s = %zu\n", a, sizeof(b)/divisor);

	CTYPELIST


	return 0;
}
