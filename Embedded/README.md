# Practices

Preprocessor

1. Using the #define statement, how would you declare a manifest constant that returns the number of seconds in a year? Disregard leap years in your answer. A manifest constant is a constant value associated with a smbolic name (constant that is given a name).

2. Write the ‘standard’ MIN macro. That is, a macro that takes two arguments and returns the smaller of the two arguments.

  RETURN_MIN(x, y) ((x)<(y)?(x):(y))

3. What is the purpose of the preprocessor directive #error?

  Either you know the answer to this, or you don’t. If you don’t, then see reference 1. This question is very useful for differentiating between normal folks and the nerds. It’s only the nerds that actually read the appendices of C textbooks that find out about such things. Of course, if you aren’t looking for a nerd, the candidate better hope she doesn’t know the answer.

  Ans: http://www.barrgroup.com/embedded-systems/how-to/c-preprocessor-error-directive.

4. Infinite Loops

  Infinite loops often arise in embedded systems. How does one code an infinite loop in C?

  Answer:
  int main(){
    while(1)
    {
      // perform operations
    }
    return 0;
  }

5. Data declarations
Using the variable a, write down definitions for the following:

(a) An integer
    int a;
(b) A pointer to an integer
    int \*a;
(c) A pointer to a pointer to an integer
    int \**a;
(d) An array of ten integers
    int a[10];
(e) An array of ten pointers to integers
    int \*a[10];
(f) A pointer to an array of ten integers
    int (\*a)[10];
(g) A pointer to a function that takes an integer as an argument and returns an integer
    int (\*a)(int);
(h) An array of ten pointers to functions that take an integer argument and return an integer.
    int (\*a[10])(int)

6. Embedded systems always require the user to manipulate bits in registers or variables.

Given an integer variable a, write two code fragments. The first should set bit 3 of a. The second should clear bit 3 of a. In both cases, the remaining bits should be unmodified.

7. Embedded systems are often characterized by requiring the programmer to access a specific memory location. On a certain project it is required to set an integer variable at the absolute address 0x67a9 to the value 0xaa55. The compiler is a pure ANSI compiler. Write code to accomplish this task.

  Answer:
  int \*ptr = (int \*)0x67a9;
  \*ptr = 0xaa55;

*source: http://www.rmbconsulting.us/a-c-test-the-0x10-best-questions-for-would-be-embedded-programmers
* use -pedantic to see warnings about statements not supported by ISO C but do in GNU C language extension.
