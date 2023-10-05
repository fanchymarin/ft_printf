# ft_printf - Recoding printf() Function - ⭐Grade 100/100

## Project Overview

The goal of this project is pretty straightforward: recoding `printf()`. This project gave me the opportunity to learn about using a variable number of arguments. The prototype of `ft_printf()` is as follows:

~~~c
int ft_printf(const char *, ...);
~~~

## Supported Conversions

The following conversions for the `ft_printf()` function are implemented:

- `%c`: Prints a single character.
- `%s`: Prints a string (as defined by the common C convention).
- `%p`: The `void *` pointer argument prints its address in hexadecimal format.
- `%d`: Prints a decimal (base 10) number.
- `%i`: Prints an integer in base 10.
- `%u`: Prints an unsigned decimal (base 10) number.
- `%x`: Prints a number in hexadecimal (base 16) lowercase format.
- `%X`: Prints a number in hexadecimal (base 16) uppercase format.
- `%%`: Prints a percent sign.


