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


The size of an int is really compiler dependent. Back in the day, when processors were 16 bit, an int was 2 bytes. Nowadays, it's most often 4 bytes on a 32-bit as well as 64-bit systems. Still, using sizeof(int) is the best way to get the size of an integer for the specific system the program is executed on

## Char:
C uses char type to store characters and letters. However, the char type is integer type because underneath C stores integer numbers instead of characters.In C, char values are stored in 1 byte in memory,and value range from -128 to 127 or 0 to 255.
In order to represent characters, the computer has to map each integer with a corresponding character using a numerical code. The most common numerical code is ASCII, which stands for American Standard Code for Information Interchange.

#ASCII(American Standard Code for Information Interchange)
![char_ASCII-1](https://user-images.githubusercontent.com/26576892/184515673-09ecbfbf-4756-4845-aea9-67ff944b91e5.png)
# C Strings

The string can be defined as the one-dimensional array of characters terminated by a null ('\0'). The character array or the string is used to manipulate text such as word or sentences. Each character in the array occupies one byte of memory, and the last character must always be 0. The termination character ('\0') is important in a string since it is the only way to identify where the string ends. When we define a string as char s[10], the character s[10] is implicitly initialized with the null in the memory.

There are two ways to declare a string in c language.

1. By char array
2. By string literal
Let's see the example of declaring string by char array in C language.

char ch[10]={'j', 'a', 'v', 'a', 't', 'p', 'o', 'i', 'n', 't', '\0'};  
As we know, array index starts from 0, so it will be represented as in the figure given below.

![image](https://user-images.githubusercontent.com/26576892/184537829-1f1b37bd-11cc-4247-b08d-878532727c2c.png)


While declaring string, size is not mandatory. So we can write the above code as given below:

char ch[]={'j', 'a', 'v', 'a', 't', 'p', 'o', 'i', 'n', 't', '\0'};  

We can also define the string by the string literal in C language. For example:

char ch[]="javatpoint";  
In such case, '\0' will be appended at the end of the string by the compiler.

Difference between char array and string literal
There are two main differences between char array and literal.

We need to add the null character '\0' at the end of the array by ourself whereas, it is appended internally by the compiler in the case of the character array.
The string literal cannot be reassigned to another set of characters whereas, we can reassign the characters of the array.
So, the initialization of a string can be:

1. char str[] = "GeeksforGeeks";

2. char str[50] = "GeeksforGeeks";

3. char str[] = {'G','e','e','k','s','f','o','r','G','e','e','k','s','\0'};

4. char str[14] = {'G','e','e','k','s','f','o','r','G','e','e','k','s','\0'};

Below is the memory representation of a string “Geeks”::

![image](https://user-images.githubusercontent.com/26576892/184537973-7799a8d1-f366-47a4-954f-d0a5c906a890.png)

![image](https://user-images.githubusercontent.com/26576892/184538026-c66b8fb9-b430-4a7a-be97-3d13e8f54422.png)


## Accepting string as the input
Till now, we have used scanf to accept the input from the user. However, it can also be used in the case of strings but with a different scenario. Consider the below code which stores the string while space is encountered.

#include<stdio.h>  
void main ()  
{  
    char s[20];  
 ###   printf("Enter the string:");  
###    scanf("%s",s);  
       printf("You entered:%s",s);  
}  

### Output:::
### Enter the string:My name is Jewel                                                                
### You entered:My

It is clear from the output that, the above code will not work for space separated strings. To make this code working for the space separated strings, the minor changed required in the scanf function, i.e., instead of writing scanf("%s",s), we must write: 
### scanf("%[^\n]s",s) 
which instructs the compiler to store the string s while the new line (\n) is encountered. Let's consider the following example to store the space-separated strings.

#include<stdio.h>  
void main ()  
{  
    char s[20];  
###    printf("Enter the string:");  
###    scanf("%[^\n]s",s);  
    printf("You entered: %s",s);  
}  
Output

### Enter the string:I am Jewel
### You entered: I am Jewel
