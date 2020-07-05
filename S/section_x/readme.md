

#include <string>

std::string name{};  
std::getline(std::cin, name); // read a full line of text into name

std::cin.ignore(32767, '\n'); // ignore up to 32767 characters until a \n is removed


If reading values with std::cin, it’s a good idea to remove the extraneous newline using std::cin.ignore().


Don’t assign specific values to your enumerators.

Don’t assign the same value to two enumerators in the same enumeration unless there’s a very good reason.

it’s common to prefix enumerators with a standard prefix like ANIMAL_ or COLOR_, both to prevent naming conflicts and for code documentation purposes.

source: https://www.learncpp.com/cpp-tutorial/chapter-7-summary-and-quiz/  

date: 05/07/2020


std::string offers an easy and safe way to deal with text strings. String literals are always placed between double quotes.

Enumerated types let us define our own type where all of the possible values are enumerated. These are great for categorizing things.

Enum classes work like enums but offer more type safety and don’t pollute the encapsulating namespace quite as much.

And finally, structs offer us a way to group related variables into a single structure and access them using the member selection operator (.). Object-oriented programming builds heavily on top of these, so if you learn one thing from this chapter, make sure it’s this one.