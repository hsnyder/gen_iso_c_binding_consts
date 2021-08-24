# gen_iso_c_binding_consts
A simple C program to generate numerical values (corresponding to byte counts) for Fortran's iso_c_binding kind constants.
The values for complex types are half the number of bytes used by the type, rather than the full number of bytes.

This is probably not useful unless you are writing a Fortran compiler and have decided upon the convention whereby the numeric constant corresponding to a given kind is equal to the number of bytes occupied by that kind.

Example output on x86_64 Linux, using gcc 9.3.0

```
integer, parameter :: c_int = 4
integer, parameter :: c_short = 2
integer, parameter :: c_long = 8
integer, parameter :: c_long_long = 8
integer, parameter :: c_signed_char = 1
integer, parameter :: c_size_t = 8
integer, parameter :: c_int8_t = 1
integer, parameter :: c_int16_t = 2
integer, parameter :: c_int32_t = 4
integer, parameter :: c_int64_t = 8
integer, parameter :: c_int_least8_t = 1
integer, parameter :: c_int_least16_t = 2
integer, parameter :: c_int_least32_t = 4
integer, parameter :: c_int_least64_t = 8
integer, parameter :: c_int_fast8_t = 1
integer, parameter :: c_int_fast16_t = 8
integer, parameter :: c_int_fast32_t = 8
integer, parameter :: c_int_fast64_t = 8
integer, parameter :: c_intmax_t = 8
integer, parameter :: c_intptr_t = 8
integer, parameter :: c_ptrdiff_t = 8
integer, parameter :: c_float = 4
integer, parameter :: c_double = 8
integer, parameter :: c_long_double = 16
integer, parameter :: c_float_complex = 4
integer, parameter :: c_double_complex = 8
integer, parameter :: c_long_double_complex = 16
integer, parameter :: c_bool = 1
integer, parameter :: c_char = 1
```
