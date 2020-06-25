header defines external libraries to use

initialise a header with hash include (#include).

insertion operator (<<) - sends data from RHS to LHS
extraction operator (>>) - collects keyboard data from io, send to LHS
can be used more than once.

std::cout - starts a stream to output onto console, and flushes output.

std::endl - moves cursor to newline, and flushes output. 
normally used with std::cout to end the stream, 
so future streams will start on a new line. 

flushes - makes sure it shows up on screen immediately.

'\n' - moves cursor to new line.

double quotes are expandable, so can use character codes inside.

std::cin - character input, '\n' will be added by user with enter key to confirm.


an integer cannot hold a string, std::cin defaults string inputs to 0. floats can be registered, but loses data after the decimal.

if you enter a number larger than what an integer may hold, integer overflow, normally in the form of -1.