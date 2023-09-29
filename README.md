# C_language_Part3

 Variables and constants

* Declearing variables.

* C++ primitive types.

  -integer.

  -floating point.

  -boolean.

  -character.

* size of operator.

* What is a constant?

* Declearing constants.

* Literal constants.

* Constant expression.

# What is a variable?

* A variable is an abstraction for a memory location

* Allow programmers to use meaningful names and not memory addresses

* Variable have

    // type - their category (integer, real number, string, Person, Account....)
  
    // Value - the contents (10, 3.14. "Frank"....)

* Variables MUST be declared before they are used.

* A variable value may change.

  //////////////// age = 21;           // Compiler error


  inter age;

  age = 21;

# Declaring and Intializing variables

The syntax for a variable declaration in c++ is very simple.

First, you tell the compiler what the type of the variable is.

Then you tell the compiler what the name of the variable is.

And finally, you terminate the declaration with a semicolon.

* Naming variables
* 
The rules for naming c++ variables are very very simple.

C++ variable names can contain letters, numbers and underscores.

However, the first letter of the name cannot be a number,

it can be an underscore or a letter.

As discussed previously, c++ keywords are also reserved

words so you can't use those names.

You can't use int, you can't use double as your own names.

Also you cannot declare a variable name that's already been declared in the same scope.

So if you declared x to be an integer, you can't do that again.

Remember, c++ is case-sensitive.

So the name, age in uppercase is considered

different from the name, age and lowercase

# What is a constant?

* like C++  variables

   -Have names
  
   -Occupy storage
  
   -Are usually typed

HOWEVER THEIR VALUE CAN NOT BE CHANGED ONCE DELCARED!

* Type of constants

* Declared constants
  
   - const KEYWORDS

* Constant expressions

    - constexpr KEYWORD
 
* Defined constants
    - #defined
 
* Literal constants

* Integer Literal Constants
  
     12  - an integer
  
     12U - an unsigned integer

     12L - a long integer

     12LL - a long long integer

* Charater Literal Constants (escape door)

     \n  - newline

     \r  - return

     \t   - tab

     \b   - backspace

     \'  - single quote

     \\   - backslash

  cout << "Hello\tthere\nmy friend\n";

  Hello     there

  my friend



  

















  
  
