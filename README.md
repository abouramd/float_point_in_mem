## Intro
- In memory, a float in C/C++ is represented as a 32-bit floating-point number, The layout of a float in memory typically consists of the following parts:
    - Sign Bit: The leftmost bit (bit 31) represents the sign of the floating-point number. If the sign bit is 0, the number is positive; if it's 1, the number is negative.
    - Exponent Bits: The next 8 bits (bits 30 to 23) represent the exponent of the floating-point number. These bits are used to represent the magnitude of the number.
    - Mantissa Bits: The remaining 23 bits (bits 22 to 0) represent the mantissa of the floating-point number. The mantissa contains the significant digits of the number, including the fractional part.

```c++
    31          23                      0
   ----------------------------------------
   | S |     Exponent     |      Mantissa    |
   ----------------------------------------
```

- S: Sign bit (0 for positive, 1 for negative)
- Exponent: Exponent bits (used to represent the magnitude of the number)
- Mantissa: Mantissa bits (significant digits of the number, including the fractional part)

## usage

- change the `num` variable to the number you want to observe, and then compile and run the program. It will display the memory representation of the float number you provided. The output will be '0' and '1', showing the individual bits that make up the floating-point representation.

- To compile the program using g++, you can use the following command:
    ```bash
    g++ float_in_mem.cpp -o float_in_mem
    ```
- This will generate an executable named float_in_mem which you can then run to see the output.

- Similarly, you can use clang++ to compile the program:
    ```bash
    clang++ float_in_mem.cpp -o float_in_mem
    ```
- Again, this will create an executable named float_in_mem, and you can execute it to observe the output.