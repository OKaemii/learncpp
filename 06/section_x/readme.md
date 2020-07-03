source: https://www.learncpp.com/cpp-tutorial/chapter-6-summary-and-quiz/  

date: 03/07/2020  


A compound statement or block is a group of zero or more statements that is treated by the compiler as if it were a single statement. Blocks begin with a { symbol and end with a } symbol, with the statements to be executed placed in between. Blocks can be used anywhere a single statement is allowed. No semicolon is needed at the end of a block. Blocks are often used in conjunction with if statements to execute multiple statements.

User-defined namespaces are namespaces that are defined by you for your own declarations. Namespaces provided by C++ (such as the global namespace) or by libraries (such as namespace std) are not considered user-defined namespaces.

You can access a declaration in a namespace via the scope resolution operator (::). The scope resolution operator tells the compiler that the identifier specified by the right-hand operand should be looked for in the scope of the left-hand operand. If no left-hand operand is provided, the global namespace is assumed.

Local variables are variables defined within a function (including function parameters). Local variables have block scope, meaning they are in-scope from their point of definition to the end of the block they are defined within. Local variables have automatic storage duration, meaning they are created at the point of definition and destroyed at the end of the block they are defined in.

A name declared in a nested block can shadow or name hide an identically named variable in an outer block. This should be avoided.

Global variables are variables defined outside of a function. Global variables have file scope, which means they are visible from the point of declaration until the end of the file in which they are declared. Global variables have static duration, which means they are created when the program starts, and destroyed when it ends. Avoid dynamic initialization of static variables whenever possible.

An identifier’s linkage determines whether other declarations of that name refer to the same object or not. Local variables have no linkage. Identifiers with internal linkage can be seen and used within a single file, but it is not accessible from other files. Identifiers with external linkage can be seen and used both from the file in which it is defined, and from other code files (via a forward declaration).

Avoid non-const global variables whenever possible. Const globals are generally seen as acceptable. Use inline variables for global constants if your compiler is C++17 capable.

Local variables can be given static duration via the static keyword.

Using statements (including using declarations and using directives) can be used to avoid having to qualify identifiers with an explicit namespace. These should generally be avoided.

Typedefs and Type aliases allow the programmer to create an alias for a data type. These aliases work identically to the aliased type. They can add legibility and reduce maintenance to code.

The auto keyword has a number of uses. First, auto can be used to do type inference / type deduction, which will infer a variable’s type from its initializer. Auto can also be used as a function return type to have the compiler infer the function’s return type from the function’s return statements, though this should be avoided for normal functions. Auto is used as part of the trailing return syntax. And finally, as of C++20, auto provides a shortcut for creating function templates. For now, you’ll generally use it for type deduction purposes.

Implicit type conversion is performed whenever one data type is expected, but a different data type is supplied. If the compiler can figure out how to do the conversion between the two types, it will. If it doesn’t know how, then it will fail with a compile error. Numeric promotion (or widening) occurs when a value from one fundamental data type is converted to a value of a larger fundamental data type from the same family (e.g. a short to an int). Numeric conversion occurs when we convert a value from a larger to a smaller type (e.g. int to short), or between different type families (int to double). Conversions that could cause loss of data are called narrowing conversions.

Explicit type conversion is performed when the programmer explicitly requests conversion via a cast. A cast represents a request by the programmer to do an explicit type conversion. C++ supports 5 types of casts: C-style casts, static casts, const casts, dynamic casts, and reinterpret casts. Generally you should avoid C-style casts, const casts, and reinterpret casts. static_cast is used to convert a value from one type to a value of another type, and is by far the most used-cast in C++.

Finally, C++ supports unnamed namespaces, which implicitly treat all contents of the namespace as if it had internal linkage. C++ also supports inline namespaces, which provide some primitive versioning capabilities for namespaces.

In applications, namespaces can be used to separate application-specific code from code that might be reusable later (e.g. math functions). For example, physical and math functions could go into one namespace (e.g. math::). Language and localization functions in another (e.g. lang::).

When you write a library or code that you want to distribute to others, always place your code inside a namespace. The code your library is used in may not follow best practices -- in such a case, if your library’s declarations aren’t in a namespace, there’s an elevated chance for naming conflicts to occur. As an additional advantage, placing library code inside a namespace also allows the user to see the contents of your library by using their editor’s auto-complete and suggestion feature.

Define variables in the most limited existing scope. Avoid creating new blocks whose only purpose is to limit the scope of variables.


##### scope
An identifier’s scope determines where the identifier can be accessed within the source code.

Variables with block scope / local scope can only be accessed within the block in which they are declared (including nested blocks). This includes:
Local variables
Function parameters
User-defined type definitions (such as enums and classes) declared inside a block
Variables and functions with global scope / file scope can be accessed anywhere in the file. This includes:
Global variables
Functions
User-defined type definitions (such as enums and classes) declared inside a namespace or in the global scope


##### duration
A variable’s duration determines when it is created and destroyed.

Variables with automatic duration are created at the point of definition, and destroyed when the block they are part of is exited. This includes:
Local variables
Function parameters
Variables with static duration are created when the program begins and destroyed when the program ends. This includes:
Global variables
Static local variables
Variables with dynamic duration are created and destroyed by programmer request. This includes:
Dynamically allocated variables


##### linkage
An identifier’s linkage determines whether multiple declarations of an identifier refer to the same identifier or not.

An identifier with no linkage means the identifier only refers to itself. This includes:
Local variables
User-defined type definitions (such as enums and classes) declared inside a block
An identifier with internal linkage can be accessed anywhere within the file it is declared. This includes:
Static global variables (initialized or uninitialized)
Static functions
Const global variables
Functions declared inside an unnamed namespace
User-defined type definitions (such as enums and classes) declared inside an unnamed namespace
An identifier with external linkage can be accessed anywhere within the file it is declared, or other files (via a forward declaration). This includes:
Functions
Non-const global variables (initialized or uninitialized)
Extern const global variables
Inline const global variables
User-defined type definitions (such as enums and classes) declared inside a namespace or in the global scope
Identifiers with external linkage will generally cause a duplicate definition linker error if the definitions are compiled into more than one .cpp file (due to violating the one-definition rule). There are some exceptions to this rule (for types, templates, and inline functions and variables) -- we’ll cover these further in future lessons when we talk about those topics.

Also note that functions have external linkage by default. They can be made internal by using the static keyword.