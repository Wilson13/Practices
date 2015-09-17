# Practices

Preprocessor

1. Using the #define statement, how would you declare a manifest constant that returns the number of seconds in a year? Disregard leap years in your answer. A manifest constant is a constant value associated with a smbolic name (constant that is given a name).

2. Write the ‘standard’ MIN macro. That is, a macro that takes two arguments and returns the smaller of the two arguments.

  RETURN_MIN(x, y) ((x)<(y)?(x):(y))

3. Infinite Loops

  Infinite loops often arise in embedded systems. How does one code an infinite loop in C?

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

(b) A pointer to an integer

(c) A pointer to a pointer to an integer

(d) An array of ten integers

(e) An array of ten pointers to integers

(f) A pointer to an array of ten integers

(g) A pointer to a function that takes an integer as an argument and returns an integer

(h)    An array of ten pointers to functions that take an integer argument and return an integer.
*source: http://www.rmbconsulting.us/a-c-test-the-0x10-best-questions-for-would-be-embedded-programmers
