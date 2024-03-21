#include "greetings.h"
#include <stdio.h>

/**
 * @brief main function for testing configuration.
 * @param argc: number of arguments
 * @param argv: array of arguments
 * @return 1 if succes, 0 if failure
 * @see greetings
 * */
int main(int argc, char* argv[])
{
    printf("Hello, OS II. Welcome to 2024 course!\n");
    greetings();
    printf("Calling shared lib from main program. I get '%d'\n", shared_lib_function("Hello, OS II"));
    printf("Calling static lib from main program. I get '%d'\n", static_lib_function("Bye, OS II"));    
    return 0;
}
