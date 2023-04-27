#include <stdio.h>
#include <dos.h>
#include <string.h>
#include <stdlib.h> 
#include <Windows.h>
#include <conio.h>
// #CODEBOOK_PROJECT_DONE_BY_VNBL
#include "QUIZe.h"
#include <time.h>
#include <iostream>
using namespace std;
int wwlc();
int data_type();
int token();
int lup();
int pointar();
int aray();
int dynamic_memory_allocation();
int function();
int structure();
int file_handle();
int search();
void window();

int vnbl();





void clearWindow()
{
  int i, j;
  for (i = 1; i < 78; i++)
  {
    for (j = 5; j < 25; j++)
    {
      gotoxy(i, j);
      printf(" ");
    }
  }
  return;
}

void window()
{



  printf("\n           -------------------------                                                  \n");
  printf("             |CODEBOOK:THE CHEAT-SHEAT|                                                 \n");
  printf("             |  PROJECT DONE BY VNBL  |                                                 \n");
  printf("             --------------------------                                                 \n");


}    
//                                              ----------
//============================================= |ALL TOPIC| =======================================
//                                              ----------
// wwlc-why we learn c launguege ?

int wwlc()
{

  //"\n\t\t\tWhy learning C Programming is a must?"
  char *str = "\nC is a procedural programming language.It was initially developed\n by Dennis Ritchie between 1969 and 1973. It was mainly"
              "\ndeveloped as a system programming language to write operating system.\n The main features of C language include low-level "
              "\naccess to memory, simple set of keywords, and clean style, these features\n make C language suitable for system programming "
              "\nlike operating system or compiler development.\nLet us now look at some \nof the important advantages of learning C programming: \n"
              "\n~C is a Middle-Level Language. The middle-level languages are somewhere \nbetween the Low-level machine understandable assembly languages "
              "\nand High-Level user friendly languages. Being a middle-level language, \nC reduces the gap between the low-level and high-level languages."
              "\nIt can be used for writing operating systems as well as doing applicati\n on level programming.\n"
              "\n~Helps to understand the fundamentals of Computer Theories. Most of the \ntheories related to computers like Computer Networks, Compiler Designing,"
              "\nComputer Architecture, Operating Systems are based on C programming l\nanguage and requires a good knowledge of C programming if you are working on them."
              "\nFewer Libraries. C programming language has fewer libraries in comparison \nwith other high-level languages. So, learning C programming also clears"
              "\nprogramming concepts to a great extent as you have to write lot of things from scratch.\n"
              "\n~C is very fast in terms of execution time\n"
              "\n";
  printf("                                                ---------------------1--------------------                                                         \n");
  printf("                                                |  Why learning C Programming is a must? |                                                         \n");
  printf("                                                ------------------------------------------                                                         \n");
  puts(str);
  return 0;
}
int data_type()
{ // function for data  and variable type

  int op;

  // LEARN_C_IN_CODEBOOK_MADE_BY_VAIBHAV_LANJEWAR
  char *str0 = "\n\tA variable in simple terms is a storage place that has some memory allocated to it.\n Basically, a variable is used to store some form of data."
               "\nDifferent types of variables require different amounts of memory, different type \nof memory locations, and some specific set of operations that can be"
               "\n applied to them.\n"
               "\ntRules for defining variables"
               "\n1.A variable can have alphabets, digits, and underscore."
               "\n2.A variable name can start with the alphabet, and underscore only.\n It can’t start with a digit."
               "\n3.No whitespace is allowed within the variable name."
               "\n4.A variable name must not be any reserved word or keyword,\n e.g. int, goto, etc."
               "\n _srujan , srujan_poojari , srujan812 , srujan_812"
               "\nTYPES OF VARIABLE IN C:"
               "\n1.Local Variable: A variable that is declared and used inside the function \nor block is called a local variable. It is scope is limited to function or block."
               "\nIt cannot be used outside the block. Local variables need to be initialized\n before use.\n"
               "\n2.Global Variable: A variable that is declared outside the function or block\n is called a global variable. It is declared at the start of the program."
               "\nIt is available for all functions.\n"
               "\n\t3. Static Variable: A variable that retains its value between multiple function\n calls is known as a static variable. It is declared with the static keyword.\n";

  // VLEARNING_C_IN_CODEBOOK_MADE_BY_VAIBHAV_LANJEWAR

  char *str1 = "\n\tDATA TYPE:Each variable in C has an associated data type." // data type
               "\nEach data type requires different amounts of memory and has some specific \noperations which can be performed over it."
               "\nIt specifies the type of data that the variable can store like integer,\n character, floating, double, etc."
               "\nThe data type is a collection of data with values having fixed values,\n meaning as well as its characteristics."
               "\nType Description\n Primitive Data: Types Arithmetic types can be further\n classified into integer and floating data types."
               "\nVoid Data Types:The data type has no value or operator and it does not \nprovide a result to its caller."
               "\nBut void comes under Primitive data types.\nUser Defined Data Types It \nis mainly used to assign names to integral constants, "
               "\nwhich make a program easy to read and maintain"
               "\nDerived types	The data types that are derived from the primitive or\n built-in datatypes are referred to as Derived Data Types.\n";

  char *str2 = "\n\tINTEGER TYPE:This kind of variables are capable of storing negative," // integer type data type
               "\nzero, as well as positive values without the decimals. The C language"
               "\nrepresents the integer data type by the keyword int. It can be unsigned "
               "\nas well as a signed value. But in case it is unsigned, then the value"
               "\nassigned to the integer variable will be considered positive by default."
               "\nThis integer data type has further sub-types named the long int and short int."
               "\nthis can be signed long int, signed short int, unsigned long int, and unsigned short int."
               "\ntere, int takes up about 2 bytes or 4 bytes of the storage space and short data type would"
               "\ntake up about 2 bytes. The long data type would take up about 8 bytes and 4 bytes of space "
               "\n a 64-bit type and 32-bit type operating system respectively.\n";

  // charecter
  char *str3 = "\n\tCHARECTER TYPE:The Character data type allows its variable to store only a single character. "
               "\nThe storage size of the character is 1. It is the most basic data type in C. It stores a "
               "\nsingle character and requires a single byte of memory in almost all compilers."
               "\nRange: (-128 to 127) or (0 to 255)"
               "\nsizeze: 1 byte\n";
  // #V_LEARNING_C_IN_CODEBOOK_MADE_BY_VAIBHAV_LANJEWAR
  // float
  char *str4 = "\tFloating-Point Types:"
               "\n In C programming float data type is used to store floating-point values."
               "\n Float in C is used to store decimal and exponential values. It is used to "
               "\n store decimal numbers (numbers with floating point values) with single precision.\n";
  // void data  type

  char *str5 = "\n\tVoid Data types:"
               "\nThe void data type in C is used to specify that no value is present."
               "\nIt does not provide a result value to its caller. It has no values "
               "\nand no operations. It is used to represent nothing. Void is used in "
               "\nmultiple ways as function return type, function arguments as void, and pointers to void.\n";

  // double type
  char *str6 = "\n\tDouble data type in C is used to store decimal numbers\n (numbers with floating point values) with"
               "\ndouble precision. It is used to define numeric values which \nhold numbers with decimal values in C."
               "\nDouble data type is basically a precision sort of data type\n that is capable of holding 64 bits of decimal"
               "\nnumbers or floating points. Since double has more precision\n as compared to that float then it is much more obvious "
               "\nthat it occupies twice the memory as occupied by the\n floating-point type. It can easily accommodate about 16 to 17 digits after"
               "\n or before a decimal point.\n";
  printf("                                               -------------- 3 -----------------                                                                   \n");
  printf("                                               |   VARIABLES AND DATA TYPE     |                                                                    \n");
  printf("                                               ---------------------------------                                                                    \n");
  puts(str0);
  puts(str1);
  printf("\n"); //.........................................
  printf("_________________________________________________ |_____________________| _________________________________________________________________________\n");
  printf("                                                  | INTEGER DATA TYPE   |                                                                          \n");
  printf("_________________________________________________ |_____________________| _________________________________________________________________________\n");
  puts(str2); //..............
  printf("\n");
  printf("_________________________________________________ |_____________________| ____________________________________________________________________________\n");
  printf("                                                  | CHARECTER DATA TYPE |                                                                             \n");
  printf("_________________________________________________ |_____________________| ____________________________________________________________________________\n");
  puts(str3); //.......
  printf("\n");
  printf("_________________________________________________ | ________________________ | ________________________________________________________________________\n");
  printf("                                                  | FLOATING POINT DATA TYPE |                                                                         \n");
  printf("_________________________________________________ |__________________________| ________________________________________________________________________\n");
  puts(str4); //..........
  printf("\n");
  printf("______________________________________________________|_____________________| ______________________________________________________________________________\n");
  printf("                                                      |    VOID DATA TYPE   |                                                                               \n");
  printf("______________________________________________________|_____________________| ______________________________________________________________________________\n");
  puts(str5);
  printf("\n"); //.........
  printf("_______________________________________________________|_____________________| _________________________________________________________________________________\n");
  printf("                                                       |  DOUBLE DATA TYPE   |                                                                                  \n");
  printf("_______________________________________________________|_____________________| _________________________________________________________________________________\n");
  puts(str6);
  printf("\n\n");

  // #V_LEARNING_C_IN_CODEBOOK_MADE_BY_VAIBHAV_LANJEWAR

  return 0;
}

int token()
{

  //   clearWindow();
  // TOKEN

  char *str1 = "\n\tTOKEN:\n"
               "\nTOKEN is the smallest element of a program that is meaningful to the compiler.\n Tokens can be classified as follows:\n  "
               "\n1.Keywords"
               "\n2.Identifiers"
               "\n3.Constants" // #V_LEARNING_C_IN_CODEBOOK_MADE_BY_VAIBHAV_LANJEWAR
               "\n4.Strings"
               "\n5.Special Symbols"
               "\n6.Operators"

               "\n\t1.KEYWORDS: Keywords are pre-defined or reserved words in a programming language."
               "\nEach keyword is meant to perform a specific function in a program. Since keywords are referred names for a compiler"
               "\nC language supports 32 keywords which are given below: "
               "\nauto         double      int        struct"
               "\nbreak        else        long       switch"
               "\ncase         enum        register   typedef"
               "\nchar         extern      return     union"
               "\nconst        float       short      unsigned" // #V_LEARNING_C_IN_CODEBOOK_MADE_BY_VAIBHAV_LANJEWAR
               "\ncontinue     for         signed     void"
               "\ndefault      goto        sizeof     volatile"
               "\ndo           if          static     while \n"
               "\n\t2.IDENTIFIRE: Identifiers are used as the general terminology for the\n naming of variables, functions and arrays"
               "\nThese are user-defined names consisting of an arbitrarily long sequence \nof letters and digits with \n either a letter or the underscore(_) as a first character. "
               "\n A special kind of identifier, called a statement label, can be used in goto statements. \n"
               "\n\t3.CONSTANT: Constants are also like normal variables. But, the only \ndifference is, their values can\n not be modified by the program once they are defined."
               "\nConstants refer to fixed values. They are also called literals "
               "\nSyntax:"
               "\nconst data_type variable_name; (or) const data_type *variable_name ; "
               "\n\t4.STRING: Strings are nothing but an array of characters ended with a null character (‘\0’)."
               "\nThis null character indicates the end of the string.\n Strings are always enclosed in double-quotes.\n Whereas, a character is enclosed in single quotes in C "
               "\n\t5.Special Symbols: The following special symbols are \nused in C having some special meaning and\n thus, \ncannot be used for some other purpose.[] () {}, ; * = # "
               "\n\t6.OPERATORS: Operators are symbols that trigger an action\n when applied to C variables and other objects. \nThe data items on which operators act upon are called operands. "
               "\n";
  printf("                                                -------------- 2 ----------------                                                                                    \n");
  printf("                                                |            TOKEN              |                                                                                    \n");
  printf("                                                ---------------------------------                                                                                    \n");

  puts(str1);

  return 0;
}

// #V_LEARNING_C_IN_CODEBOOK_MADE_BY_VAIBHAV_LANJEWAR
// loop
int lup()
{ // loop

  //    clearWindow();
  char *str1 = "\n\tLoops can execute a block of code as long as a specified condition is reached."
               "\nLoops are handy because they save time, reduce errors, and they make code more readable."
               "\nUsing Loops" // #V_LEARNING_C_IN_CODEBOOK_project_done_BY_VAIBHAV_LANJEWAR
               "\nIn Loop, the statement needs to be written only once and the loop will be executed 10 times as shown below."
               "\nIn computer programming, a loop is a sequence of instructions that is repeated until a certain condition is reached."
               "\nThere are mainly two types of loops:  "
               "\nEntry Controlled loops: In this type of loop, the test condition is tested before \nentering\n the loop body. \nFor Loop and While Loop is entry-controlled loops."
               "\nExit Controlled Loops: In this type of loop the test condition is tested or \nevaluated at the \nend of the loop body. \nTherefore, the loop body will execute at least once,"
               "\nirrespective of whether the test condition is true or false. the do-while\n loop is exit controlled loop.\n"
               "\nS.No.	Loop Type and Description"
               "\n1.	while loop – First checks the condition, then executes the body."
               "\n2.	for loop – firstly initializes, then, condition check, execute body, update."
               "\n3.	do-while loop – firstly, execute the body then condition check."
               // for loop
               "\n\tfor Loop"
               "A for loop is a repetition control structure that allows us to write a loop \nthat is executed a \nspecific number of times. The loop enables us to "
               "perform n number of steps together in one line. "

               "\nSyntax: "
               "\n  "
               "\nfor (initialization expr; test expr; update expr)"
               "\n{    "
               "\n     body of the loop "
               "\n     // statements we want to execute "
               "\n} "
               // #V_LEARNING_C_IN_CODEBOOK_MADE_BY_VAIBHAV_LANJEWAR

               "\nIn for loop, a loop variable is used to control the loop.\n First, initialize\n this loop\n variable to some value, then check whether this variable is"
               "\nless than or greater than the counter value. If the statement is true, then\n the loop\n body is executed and the loop variable gets updated. "
               "\nSteps are repeated till the exit condition comes."
               "nitialization Expression: In this expression, we have to initialize the loop\n counter to some value. for example: int i=1;"
               "\nTest Expression: In this expression, we have to test the condition. \nIf the condition evaluates to true then we will execute the body of "
               "the loop and go to update expression otherwise we will exit from the for a loop. \nFor example: i <= 10;" // ----ERROR SPOT----
               "\nUpdate Expression: After executing the loop body this expression \nincrements/decrements the loop variable by some value. for example: i++;"

               // while loop
               "\n\tWhile Loop"
               "\nWhile studying for loop we have seen that the number of iterations is known beforehand,\n i.e. the number of times the loop body is needed to be executed is known to us."
               "\nwhile loops are used in situations where we do not know the exact number of iterations of\n the loop beforehand. The loop execution is terminated on the basis of the test conditions"
               "\nWe have already stated that a loop mainly consists of three statements – initialization\n expression, test expression, and update expression."
               "\nSyntax:"

               "\ninitialization expression;"
               "\nwhile (test_expression) "
               "\n{"
               "\n  statements   "
               "\n "
               "\n  update_expression; "
               "\n}"
               // do while loop
               "\n\n\tC do while loop with"
               "Like while the do-while loop execution is also terminated on the basis of a test condition. \nThe main difference between a do-while loop and while loop is in the do-while "
               "\nloop the condition is tested at the end of the loop body, i.e do-while loop is exit\n controlled whereas the other two loops are entry controlled loops."
               "\nNote: In do-while loop the loop body will execute at least once irrespective of test condition. "
               "Syntax: "

               "\ndo "
               "\n{  "
               "\n   // loop body " // #V_LEARNING_C_IN_CODEBOOK_MADE_BY_VAIBHAV_LANJEWAR
               "\n  "
               "\n   update_expression;"
               "\n}  "
               "\nwhile (test_expression);"
               "\nNote: Notice the semi – colon(“;”) in the end of loop."
               "\nThe various parts of the do-while loop are: ";
  printf("                                               --------------  4  --------------                                                                                     \n");
  printf("                                               |             LOOP              |                                                                                     \n");
  printf("                                               ---------------------------------                                                                                     \n");

  puts(str1);
  return 0;
}

// pointer
int pointar()
{

  //     clearWindow();
  char *str = "\n\tPointers are symbolic representation of addresses. They enable programs to \nsimulate call-by-reference as well as to create and manipulate dynamic data structures."
              "\nIts general declaration in C has the format:"
              "\nSyntax:"

              "\ndatatype *var_name; "
              "\nint *ptr; //ptr can point to an address which holds int data"
              "\n\nHow to use a pointer?"
              "\nDefine a pointer variable"
              "\n-Assigning the address of a variable to a pointer using unary operator (&)\n which returns the address of that variable."
              "\n-Accessing the value stored in the address using unary operator (*) which\n returns the value of the variable located at the address specified by its operand."
              "\nReferences and Pointers"

              "\nThere are 3 ways to pass C++ arguments to a function:"

              "\ncall-by-value"
              "\ncall-by-reference with pointer argument"
              "\ncall-by-reference with reference argument"
              "\n\nArray Name as Pointers"

              "\nAn array name contains the address of first element of the array which acts\n like constant pointer. It means, the address stored in array name can’t be changed."
              "\nFor example, if we have an array named val then val and &val[0] can be used interchangeably."
              "\n\n\tPointers to pointers:"
              "\nIn C, we can create a pointer to a pointer that in turn may point to data or other pointer. "
              "\nThe syntax simply requires the unary operator (*) for each level\n of indirection while declaring the pointer."

              "\nchar a;"
              "\nchar *b;"
              "\nchar ** c;"

              "\nb = &a;"
              "\n\n\tVoid Pointers"

              "\nThis is a special type of pointer available in C which represents absence of type.\n void pointers are pointers that point to a value that has no type "
              "(and thus also an undetermined length and undetermined dereferencing properties)."
              "\nThis means that void pointers have great flexibility as it can point to any data type.\n There is payoff for this flexibility."
              "\nThese pointers cannot be directly dereferenced. "
              "\nThey have to be first transformed into some other pointer type that points \nto a concrete data type before being dereferenced."
              "\nSyntax:\nvoid increase(void *data,int ptrsize){\n //typecasting of void \npointer let us consider into charecter pointer "
              "\n char* codebook=(char*)data"
              "\n\n\tInvalid pointers" // #V_LEARNING_C_IN_CODEBOOK_MADE_BY_VAIBHAV_LANJEWAR
              "\nA pointer should point to a valid address but not necessarily to valid \nelements (like for arrays). These are called invalid pointers. "
              "\nUninitialized pointers are also invalid pointers."

              "\nint *ptr1;"
              "\nint arr[10];"
              "\nint *ptr2 = arr+20;"
              "\nHere, ptr1 is uninitialized so it becomes an invalid pointer and ptr2 \nis out of bounds of arr so it also becomes an invalid pointer."
              "\n(Note: invalid pointers do not necessarily raise compile errors)"

              "\n\n\tNULL Pointers"

              "\nNull pointer is a pointer which point nowhere and not just an invalid address."
              "\nFollowing are 2 methods to assign a pointer as NULL;"
              "\n"
              "\nint *ptr1 = 0;"
              "\nint *ptr2 = NULL;";
  printf("                                                 --------------  6  --------------                                                                                     \n");
  printf("                                                 |            POINTER            |                                                                                     \n");
  printf("                                                 ---------------------------------                                                                                     \n");
  puts(str);

  return 0;
}

// ARRAY
int aray()
{

  //  clearWindow();
  char *str = "\n\tArray" // #V_LEARNING_C_IN_CODEBOOK_MADE_BY_VAIBHAV_LANJEWAR

              "\n1.It is a group of variables of similar data types referred to by a single element."
              "\n2.Its elements are stored in a contiguous memory location."
              "\n3.The size of the array should be mentioned while declaring it."
              "\n4.Array elements are always counted from zero (0) onward."
              "\n5.Array elements can be accessed using the position of the element in the array."
              "\n6.The array can have one or more dimensions."
              "\nAn array in C or be it in any programming language is a collection of \nsimilar data items stored at contiguous memory locations "
              "\nand elements can be accessed randomly using indices of an array. \n They can be used to store the collection of primitive data types "
              "\nsuch as int, float, double, char, etc of any particular type.\n To add to it, an array in C/C++ can store derived data types such as structures, pointers etc."
              "\nWhy do we need arrays? "
              "\nWe can use normal variables (v1, v2, v3, ..) when we have a small \nnumber of objects, but if we want to store a large number of instances, it becomes difficult"
              "\nto manage them with normal variables. The idea of an array is to \nrepresent many instances in one variable"
              "\nsyntax:"
              "\n data type array_name[size]"
              "\n int arr[100] //one dimentional//one dimentional array(i.e matrix);"
              "\n int arr[2][2] //two dimentional array(i.e matrix);"
              "\n char arr[100]; //charecter array"
              "\n\n\tAdvantages:-" // #V_LEARNING_C_IN_CODEBOOK_MADE_BY_VAIBHAV_LANJEWAR

              "\n1.Random access: We can get any data located at an index position."
              "\n2.Use of fewer lines of code as it creates a single array of multiple elements."
              "\n3.Easy access to all the elements."
              "\n4.Traversal through the array becomes easy using a single loop."
              "\n5.Sorting becomes easy as it can be accomplished by writing fewer lines of code."
              "\n\n\tDisadvantages:-"
              "\n1.Size Limit: We can store only the fixed size of elements in the array.\n It doesn’t grow its size at runtime."
              "\n12.Allows a fixed number of elements to be entered which is decided at \nthe time of declaration. Unlike a linked list, an array in C is not dynamic."
              "Insertion and deletion of elements can be costly since the elements are\n needed to be managed in accordance with the new memory allocation."
              "\n\n\tFacts about Array in C/C++: "

              "\nAccessing Array Elements: "
              "\nArray elements are accessed by using an integer index. \nArray index starts with 0 and goes till the size of the array minus 1."
              "\nThe name of the array is also a pointer to the first element of the array.";

  printf("                                      --------------  5  --------------                                                                                     \n");
  printf("                                      |             ARRAY             |                                                                                     \n");
  printf("                                      ---------------------------------                                                                                     \n");

  puts(str);
  return 0;
  // #V_LEARNING_C_IN_CODEBOOK_MADE_BY_VAIBHAV_LANJEWAR
}

// dynamic memory allocation
int dynamic_memory_allocation()
{

  //  clearWindow();
  char *str = "\n\tDynamic Memory Allocation in C \nusing malloc(), calloc(), free() and realloc()"
              "\nSince C is a structured language, it has some fixed rules for programming.\n One of them includes changing the size of an array. An array is a collection"
              "\nof items stored at contiguous memory locations. " // static memory allocation
              "\nThe static memory allocation is a fixed amount of memory that is allocated \nduring the compile time of a program and the stack data structure."
              // dynamic memory allocation
              "\n Dynamic Memory Allocation: can be defined as a procedure in which the size\n of a data structure (like Array) is changed or allocate during the runtime."

              "\nC provides some functions to achieve these tasks. There are 4 library \nfunctions provided by C defined under <stdlib.h> header file to facilitate "
              "\ndynamic memory allocation in C programming. They are: "
              "\n1.malloc()"
              "\n2.calloc()"
              "\n3.free()"
              "\n\n4.realloc()"
              "\n\n1.malloc() method" // malloc
              "\n\nThe malloc or memory allocation method in C is used to dynamically allocate \na single large block of memory with the specified size. It returns a "
              "\npointer of type void which can be cast into a pointer of any form. It doesn’t\n Initialize memory at execution time so that it has initialized each block"
              "\nwith the default garbage value initially. "
              "\nSyntax: "

              "\nptr = (cast-type*) malloc(byte-size)"
              "\nFor Example:" // #V_LEARNING_C_IN_CODEBOOK_MADE_BY_VAIBHAV_LANJEWAR
              "\nptr = (int*) malloc(100 * sizeof(int));"
              "\nSince the size of int is 4 bytes, this statement will allocate 400 bytes of memory.\n And, the pointer ptr holds the address of the first byte in the allocated memory."
              // calloc
              "\n\n\2.tcalloc() method"
              "\ncalloc or contiguous allocation method in C is used to dynamically allocate the \nspecified number of blocks of memory of the specified type."
              "\nit is very much similar to malloc() but has two different points and these are:"
              "\nIt initializes each block with a default value ‘0’."
              "\nIt has two parameters or arguments as compare to malloc()."
              "\nSyntax: "
              "\nptr = (cast-type*)calloc(n, element-size);"
              "\nhere, n is the no. of elements and element-size is the size of each element."
              "\nFor Example: "

              "\nptr = (float*) calloc(25, sizeof(float));"
              "\nThis statement allocates contiguous space in memory for 25 \nelements each with the size of the float."
              // free()
              "\n\n\t3.free() method"
              "\nfree method in C is used to dynamically de-allocate the memory.\n The memory allocated using functions malloc()"
              " and calloc() is not de-allocated on their own. Hence the free()\n method is used, whenever the dynamic memory allocation takes place."
              " It helps to reduce wastage of memory by freeing it."
              "\n"
              "\nSyntax: "
              "\n"
              "\nfree(ptr);"
              "\n\n\t4.realloc() method" // #V_LEARNING_C_IN_CODEBOOK_MADE_BY_VAIBHAV_LANJEWAR
              "\nrealloc or re-allocation method in C is used to dynamically change \nthe memory allocation of a previously allocated memory."
              "\nIn other words, if the memory previously allocated with the help of\n malloc or calloc is insufficient, realloc can be used to dynamically re-allocate memory."
              "\n re-allocation of memory maintains the already present value and new \nblocks will be initialized with the default garbage value. "

              "\nSyntax:            "

              "\nptr = realloc(ptr, newSize);           "

              "\nwhere ptr is reallocated with new size newSize.";
  printf("                                            --------------  7  --------------                                                                                     \n");
  printf("                                            |  DYNAMIC MEMORY ALLOCATION    |                                                                                     \n");
  printf("                                            ---------------------------------                                                                                     \n");
  puts(str);

  return 0;
}

// function an recursion
int function()
{

  //   clearWindow();
  char *str = "\n\n\t FUNCTION:" // function
              "\nFunctions in C are the basic building blocks of a C program.\n A function is a set of statements enclosed within\n curly brackets ({}) that take inputs, do the computation,"
              "\nand provide the resultant output. You can call a function multiple \ntimes, thereby allowing reusability and modularity in C programming.\n It means that instead of writing"
              "\nthe same code again and again for different arguments, you can simply\n enclose the code and make it\n a function and then call it\n multiple times by merely passing the various arguments."
              "\nWhy Do We Need Functions in C Programming?"
              "\n\nWe need functions in C programming and even in other\n programming languages due to the numerous advantages they provide to the developer. "
              "\nSome of the key benefits of using functions are:"

              "\n-Enables reusability and reduces redundancy"
              "\n-Makes a code modular"
              "\n-Provides abstraction functionality"
              "\n-The program becomes easy to understand and manage"
              "\n-Breaks an extensive program into smaller and simpler pieces"
              "\nThe basic syntax of functions in C programming is:"

              "\nreturn_type function_name(arg1, arg2, … argn){"

              "\nBody of the function //Statements to be processed"
              "\n\nIn the above syntax:" // #VR_LEARNING_C_IN_CODEBOOK_MADE_BY_VAIBHAV_LANJEWAR

              "\n-return_type: Here, we declare the data type of the value returned by functions.\n However, not all functions return a value. In such cases, the keyword void indicates to the compiler"
              " that the function will not return any value."
              "\n-function_name: This is the function’s name that helps the compiler\n identify it whenever we call it."
              "\n-arg1, arg2, ...argn: It is the argument or parameter list that contains all the parameters\n to be passed into the function. The list defines the data type, sequence,"
              "\nand the number of parameters to be passed to the function. \nA function may or may not require parameters. Hence, the parameter list is optional."
              "\n-Body: The function’s body contains all the statements to \nbe processed and executed whenever the function is called."
              "\nNote: The function_name and parameters list are together \nknown as the signature of a function in C programming."
              "\n\n\tFunction Declaration"
              "\nThe function declaration lets the compiler know the name, number of parameters,\n data types of parameters, and return type of a function. However, writing parameter"
              "\nnames during declaration is optional, as you can do that even while defining the function."
              "\n\tFunction Call"
              "\nAs the name gives out, a function call is calling a function to be executed by the compiler.\nYou can call the function at any point in the entire program."
              " \nThe only thing to take care of is that you need to pass as many arguments of the same data\n type as mentioned while declaring the function. If the function parameter does not differ,"
              " \nthe compiler will execute the program and give the return value."
              "\n#include<stdio.h>"

              "\nvoid main (){ "

              "\n//printf(Welcome to );"

              "\nprintName();"

              "\n}"

              " /void printName(){ " // #VR_LEARNING_C_IN_CODEBOOK_MADE_BY_VAIBHAV_LANJEWAR

              "\nprintf(CODEBOOK));"
              "\nNOTE"
              "\n}"
              "\n\n\tRECURSIVE FUNCTION:" // recursion
              "Recursive Functions in C Programming"
              "\nFunctions in C programming are recursive if they can call themselves until the exit \ncondition is satisfied. If a function allows you to call itself within the definition"
              "\nin a C program, it is a recursive function. These functions run by stacking the calls\n until the exit condition is met and the flow of the program exits the function. ";

  printf("                                              --------------  8  --------------                                                                                     \n");
  printf("                                              |     FUNCTION AND RECURSION    |                                                                                     \n");
  printf("                                              ---------------------------------                                                                                     \n");
  puts(str);

  return 0;
  // #V_LEARNING_C_IN_CODEBOOK_MADE_BY_VAIBHAV_LANJEWAR
}

// STRUCTURE
int structure()
{
  //   clearWindow();
  char *str = "\n\n\tStructure in c is a user-defined data type that enables us to store the\n collection of different data types. "
              "\nEach element of a structure is called a member. Structures ca; simulate the\n use of classes and templates as it can store various information"
              "\nThe ,struct keyword is used to define the structure.\n Let's see the syntax to define the structure in c."
              "\nstruct structure_name "
              "\n{   "
              "\n    data_type member1;  "
              "\n    data_type member2;  "
              "\n    .   " // #V_LEARNING_C_IN_CODEBOOK_MADE_BY_VAIBHAV_LANJEWAR
              "\n    .  "
              "\n    data_type memeberN;   "
              "\n}s1; // here s1-object "
              "\nDeclaring structure variable"
              "\nWe can declare a variable for the structure so that we can access the member of the structure easily."
              "\nThere are two ways to declare structure variable:"
              "\nBy struct keyword within main() function"
              "\nBy declaring a variable at the time of defining the structure."
              "\n1st way:"

              "Let's see the example to declare the structure variable by struct keyword. "
              "It should be declared within the main function."
              "\nstruct employee  "
              "\n{   int id;    "
              "\n    char name[50];   " // #V_LEARNING_C_IN_CODEBOOK_MADE_BY_VAIBHAV_LANJEWAR
              "\n    float salary;   "
              "\n};  "
              "\nNow write given code inside the main() function."
              "\n "
              "\nstruct employee e1, e2;  "
              "\n2nd way:"

              "\nLet's see another way to declare variable at the time of defining the structure."
              "\n"
              "\nstruct employee  "
              "\n{   int id;  "
              "\n    char name[50]; "
              "\n    float salary;  "
              "\n}e1,e2;  "
              "\nAccessing members of the structure"
              "\nThere are two ways to access structure members:"
              "\nBy . (member or dot operator)"
              "\nBy -> (structure pointer operator)";
  printf("                                                --------------  9  --------------                                                                                     \n");
  printf("                                                |           STRUCTURE           |                                                                                     \n");
  printf("                                                ---------------------------------                                                                                     \n");
  puts(str);

  return 0;
}
// file handling
int file_handle()
{

  //     clearWindow();
  char *str = "\n\n\tBasics of File Handling in C"
              "\nSo far the operations using C program are done on a prompt / \nterminal which is not stored anywhere."
              "\nBut in the software industry, most of the programs are \nwritten to store the information fetched from the program. "
              "\nOne such way is to store the fetched information in a file.\n Different operations that can be performed on a file are: "
              "\n1.Creation of a new file (fopen with attributes as -a or -a+ or w or w+)"
              "\nOpening an existing file (fopen)"
              "\nReading from file (fscanf or fgets)"
              "\nWriting to a file (fprintf or fputs)"
              "\nMoving to a specific location in a file (fseek, rewind)"
              "\nClosing a file (fclose)"
              "\nOpening or creating file "
              "\nFor opening a file, fopen function is used with the required access modes."
              "\nSome of the commonly used file access modes are mentioned below." // #VR_LEARNING_C_IN_CODEBOOK_MADE_BY_VAIBHAV_LANJEWAR
              "\n\tFile opening modes in C: "
              "\n\n-r:Searches file. If the file is opened successfully fopen( ) loads\n it into memory and sets up a pointer which points to "
              "the first character in it. If the file cannot be opened fopen( ) returns NULL."
              "\n\n-w : Searches file. If the file exists, its contents are overwritten.\n If the file doesn’t exist,"
              "\na new file is created. Returns NULL, if unable to open file."
              "\n-wb:Open for writing in binary mode. If the file exists, its contents are overwritten."
              "\nIf the file does not exist, it will be created."
              "\n\na: Searches file. If the file is opened successfully fopen( ) loads \nit into memory and sets up a pointer"
              "\nthat points to the last character in it. If the file doesn’t exist, a \nnew file is created. Returns NULL, if unable to open file."
              "\n\n-ab:Open for append in binary mode. Data is added to the end of the file.\n If the file does not exist, it will be created."
              "\n\n-r+:Searches file. If is opened successfully fopen( ) loads it into memory \nand sets up a pointer which points to the first character in it."
              "\nreturns nothing, if unable to open the file."
              "\n\n-rb+: Open for both reading and writing in binary mode. If the file does \nnot exist, fopen( ) returns nothing"
              " \n-w+ Searches file. If the file exists, its contents are overwritten. \nIf the file doesn’t exist a new file is created. returns nothing , if unable to open file."
              "\n\n-wb+: Open for both reading and writing in binary mode. If the file \nexists, its contents are overwritten. If the file does not exist, it will be created."
              "\n\n-a+: Searches file. If the file is opened successfully fopen( ) loads \nit into memory and sets up a pointer which points to the last character in it. "
              "\nIf the file doesn’t exist, a new file is created.returns nothing, \nif unable to open file."
              "\n\n-ab+ : Open for both reading and appending in binary mode. \nIf the file does not exist, it will be created.";
  // #V_LEARNING_C_IN_CODEBOOK_MADE_BY_VAIBHAV_LANJEWAR

  printf("                                               --------------  10  ---------------                                                                                     \n");
  printf("                                               |          FILE HANDLING          |                                                                                    \n");
  printf("                                               -----------------------------------                                                                                      \n");
  puts(str);

  return 0;
}

int search()
{
  int i;
  for (i = 237; i <= 237; i++)
  {
    printf("%c", i);
  }
  return 0;
}

// MAIN FUNCTION
// ALL FUNCTIONS IN vnbl function
int vnbl()
{

  //     clearWindow();
  int op;
  int x = 3;

  //system("Color 07");
  printf("_______________________________________________________________________________________________________________________________________\n");
  printf("                                                          ----- V ----                                                                 \n");
  printf("                                                          | CODEBO0K |                                                                 \n");
  printf("                                                          ------------                                                                 \n");
  printf("_______________________________________________________________________________________________________________________________________\n");

  time_t t;
  time(&t);
  printf("                                                                                                                                        \n");
  // printf("----------------------------------------------------------------------------------------------------------------------------------------\n");
  // printf("\n\n\t\t\t\t\t%s", ctime(&t));
  // printf("----------------------------------------------------------------------------------------------------------------------------------------\n");
  while (op)
  {

    printf("\n\tEnter:\n1-IMPORTANCE OF C LAUNGUAGE\n2-TOKEN \n3-VARIABLES AND DATA TYPES\n4-LOOP\n5-ARRAY\n6-POINTER\n7-DYNAMIC MEMORY\n8-FUNCTION AND RECURSION\n9-STRUCTURE\n10-FILE HANDLING\n11-quiz\n");

    // search();

   

    // printf("\t");
    scanf("%d", &op);

    if (op == 1 || op == 2 || op == 3 || op == 4 || op == 5 || op == 6 || op == 7 || op == 8 || op == 9 || op == 10 || op == 11 || op == 12)
    {
      switch (op)
      {
        // #V_LEARNING_C_IN_CODEBOOK_MADE_BY_VAIBHAV_NIVRUTTI_LANJEWAR
      case 1:
       
        wwlc();
        break;
      case 2:
      

        token();
        break;
      case 3:
    

        data_type();
        break;
      case 4:
      

        lup();
        break;
      case 5:
     

        aray();
        break;
      case 6:
     

        pointar();
        break;
      case 7:

     

        dynamic_memory_allocation();
        break;
      case 8:
      

        function();
        break;
      case 9:
  

        structure();
        break;
      case 10:
    

        file_handle();
        break;

      case 11:
   
        quiz();
        break;
      case 12:

        exit(0);
      default:

     
        break;
      }
    }
  }
  return 0;
}

int main()
{

  //SetConsoleTitle("CODEBOOK_THE_CHEAT-SHIT_OF_C_LAUNGUEGE[VNBL]");


  vnbl();
  //clearWindow();

  return 0;
} // 28,17,45
