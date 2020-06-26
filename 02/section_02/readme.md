a function starts very much like a variables with its type. return type specified functions must return a value back to the user.  This is not required, use void for no specific return.

in int main(){}, you'd normally return 0; 0 is the exit_success code (usually).

it would be better practice to use: 
'#include <cstdlib>',  
and return EXIT_SUCCESS or EXIT_FAILURE;

functions provide a way to minimise redundancy in our source, should use it.