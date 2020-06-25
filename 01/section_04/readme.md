equals sign (=) - copy operator, right hand side (RHS) to left hand side (LHS).
int a = 5;

its process is known as copy assignment or just assignment.

double equals (==) - compares LHS with RHS.


parenthesis (()) - direct initialization with parenthesis.
int a (5);

does not support objects with a list of data;
in most circumstances, copy, and direct are essentially the same, but for some advanced types, direct will perform better.

use direct over copy for performance boost.

braces ({}) - brace/uniform initialization
int a {5};
inr a = {5};

brace can perform both copy, and direct. It is often preferred as it also supports list type initialization.

note:
zero initialization; int a {};

brace throws errors when variable cannot safely hold assignment.


good practice to favour direct brace initialization whenever possible.