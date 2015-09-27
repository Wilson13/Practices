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

  Ans:  
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
      int \*\*a;  
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

  Ans:<br />
  int \*ptr = (int \*)0x67a9;
  \*ptr = 0xaa55;  

8.  Interrupts are an important part of embedded systems. Consequently, many compiler vendors offer an extension to standard C to support interrupts. Typically, this new key word is \__interrupt. The following code uses \__interrupt to define an interrupt service routine. Comment on the code.

  \__interrupt double compute_area(double radius)<br />
  {<br />
    double area = PI * radius * radius;<br />
    printf(“\nArea = %f”, area);<br />
    return area;<br />
  }<br />

  Ans:<br />
  1. Interrupt Service Routine cannot have a return type.<br />
  2. ISRs cannot pass a parameter.<br />
  3. printf() should work inside the CAN ISR however this will introduce many areas for potential problems.<br />

  printf() is not reentrant so unless interrupts are disabled while calling it, it cannot be called from main code or from any other interrupt that does not have the same priority as the CAN ISR.
  <br /><br />
  In addition, it can never be called from the serial ISR. The library code for printf() is large (about 1kb) and slow to execute. This will dramatically affect the performance of your ISR and therefore your application. In addition it may adversely affect the behavior of your application.
  If you wish to display state information then you have other options. For example changing the state of I/O pins or (if you are using tScope) putting the state in an xdata variable and watching the value.
  \*source: http://infocenter.arm.com/help/index.jsp?topic=/com.arm.doc.faqs/ka9314.html


\*source: http://www.rmbconsulting.us/a-c-test-the-0x10-best-questions-for-would-be-embedded-programmers
\* use -pedantic to see warnings about statements not supported by ISO C but do in GNU C language extension.
