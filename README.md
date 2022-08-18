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

# Dynamic Memory Allocation in C using malloc(), calloc(), free() and realloc()

![dyna](https://user-images.githubusercontent.com/26576892/185492176-4ee44548-57d4-48bd-9443-c4e773a40f25.PNG)
Since C is a structured language, it has some fixed rules for programming. One of them includes changing the size of an array. An array is a collection of items stored at contiguous memory locations. 

arrays
![image](https://user-images.githubusercontent.com/26576892/185492745-0eb4dd22-1ed2-43dd-8cc1-2fbbceb9ae28.png)


As it can be seen that the length (size) of the array above made is 9. But what if there is a requirement to change this length (size). For Example, 

   If there is a situation where only 5 elements are needed to be entered in this array. In this case, the remaining 4 indices are just wasting memory in this array. So there is a requirement to lessen the length (size) of the array from 9 to 5.
   Take another situation. In this, there is an array of 9 elements with all 9 indices filled. But there is a need to enter 3 more elements in this array. In this case, 3 indices more are required. So the length (size) of the array needs to be changed from 9 to 12.
This procedure is referred to as Dynamic Memory Allocation in C.
Therefore, C Dynamic Memory Allocation can be defined as a procedure in which the size of a data structure (like Array) is changed during the runtime.
C provides some functions to achieve these tasks. There are 4 library functions provided by C defined under <stdlib.h> header file to facilitate dynamic memory allocation in C programming. They are: 

malloc()
calloc()
free()
realloc()

# C malloc() method
The “malloc” or “memory allocation” method in C is used to dynamically allocate a single large block of memory with the specified size. It returns a pointer of type void which can be cast into a pointer of any form. It doesn’t Initialize memory at execution time so that it has initialized each block with the default garbage value initially. 

Syntax: 

### ptr = (cast-type*) malloc(byte-size)

For Example:

### ptr = (int*) malloc(100 * sizeof(int));


Since the size of int is 4 bytes, this statement will allocate 400 bytes of memory. And, the pointer ptr holds the address of the first byte in the allocated memory.
![image](https://user-images.githubusercontent.com/26576892/185493153-d14f8ece-4a24-437b-964b-c193cd20889b.png)

If space is insufficient, allocation fails and returns a NULL pointer.

# C calloc() method
“calloc” or “contiguous allocation” method in C is used to dynamically allocate the specified number of blocks of memory of the specified type. it is very much similar to malloc() but has two different points and these are:
It initializes each block with a default value ‘0’.
It has two parameters or arguments as compare to malloc().
Syntax: 

### ptr = (cast-type*)calloc(n, element-size);

here, n is the no. of elements and element-size is the size of each element.
For Example: 

### ptr = (float*) calloc(25, sizeof(float));
This statement allocates contiguous space in memory for 25 elements each with the size of the float.
 
![image](https://user-images.githubusercontent.com/26576892/185493251-e5541d50-f7f2-4079-a058-445868c9d0f4.png)

If space is insufficient, allocation fails and returns a NULL pointer.

# C free() method
“free” method in C is used to dynamically de-allocate the memory. The memory allocated using functions malloc() and calloc() is not de-allocated on their own. Hence the free() method is used, whenever the dynamic memory allocation takes place. It helps to reduce wastage of memory by freeing it.

Syntax: 

### free(ptr);

![image](https://user-images.githubusercontent.com/26576892/185493419-67eb7ffd-a99c-4d13-a608-5c68f403fc80.png)


# C realloc() method
“realloc” or “re-allocation” method in C is used to dynamically change the memory allocation of a previously allocated memory. In other words, if the memory previously allocated with the help of malloc or calloc is insufficient, realloc can be used to dynamically re-allocate memory. re-allocation of memory maintains the already present value and new blocks will be initialized with the default garbage value.

Syntax: 

### ptr = realloc(ptr, newSize);

where ptr is reallocated with new size 'newSize'.

![image](https://user-images.githubusercontent.com/26576892/185493486-7fed4817-9419-4663-9c9f-899fd3a016c2.png)





