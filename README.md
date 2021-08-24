# gen_iso_c_binding_consts
A simple C program to generate numerical values (corresponding to byte counts) for Fortran's iso_c_binding kind constants

Example output on x86_64 Linux, using gcc 9.0.3:

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
integer, parameter :: c_float_complex = 8
integer, parameter :: c_double_complex = 16
integer, parameter :: c_long_double_complex = 32
integer, parameter :: c_bool = 1
integer, parameter :: c_char = 1
```
