## printf function
This repository contains a custom implementation of the `_printf` function in C, which is designed to provide formatting and output functionality similar to the standard C library `_printf` function. This custom `_printf` function offers flexibility and extensibility while maintaining compatibility with the basic `_printf` format specifiers.

The standard `_printf` function in C is widely used for formatted output. This custom `_printf` implementation aims to provide a similar interface and functionality while allowing for the addition of custom format specifiers. This enables developers to extend the functionality of the `_printf` function to suit their specific needs.

### Features
* Standard format specifiers are supported.
* Custom format specifiers can be defined and used.
* Variable argument lists (va_list) are supported.
* Provides customizable output channels.
* Flexible and extensible for various output needs.

### Format Specifiers
The custom printf function supports the following standard format specifiers:

* %d: Integer
* %f: Floating-point
* %c: Character
* %s: String
* %p: Pointer
* %x, %X: Hexadecimal (lowercase/uppercase)
