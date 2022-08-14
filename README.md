# Elementary-C

##  Data Types:

![dataType](https://user-images.githubusercontent.com/26576892/184515219-5286af70-d02b-4a1a-8046-ee6099c1d3d3.PNG)

## Basic Data Types
The basic data types are integer-based and floating-point based. C language supports both signed and unsigned literals.

The memory size of the basic data types may change according to 32 or 64-bit operating system.

Let's see the basic data types. Its size is given according to 32-bit architecture.

![size1](https://user-images.githubusercontent.com/26576892/184515246-9943c65b-3728-49d1-aebe-f00720b87cf7.PNG)
A few more:
![size2](https://user-images.githubusercontent.com/26576892/184515248-4a7d01ff-4c1a-440c-9938-1ec293dc0d7b.PNG)


##Char:
C uses char type to store characters and letters. However, the char type is integer type because underneath C stores integer numbers instead of characters.In C, char values are stored in 1 byte in memory,and value range from -128 to 127 or 0 to 255.
In order to represent characters, the computer has to map each integer with a corresponding character using a numerical code. The most common numerical code is ASCII, which stands for American Standard Code for Information Interchange.

#ASCII(American Standard Code for Information Interchange)
![char_ASCII-1](https://user-images.githubusercontent.com/26576892/184515673-09ecbfbf-4756-4845-aea9-67ff944b91e5.png)
# C Strings

The string can be defined as the one-dimensional array of characters terminated by a null ('\0'). The character array or the string is used to manipulate text such as word or sentences. Each character in the array occupies one byte of memory, and the last character must always be 0. The termination character ('\0') is important in a string since it is the only way to identify where the string ends. When we define a string as char s[10], the character s[10] is implicitly initialized with the null in the memory.

There are two ways to declare a string in c language.

By char array
By string literal
