// Add include for cs50 library:
#include <cs50.h>
#include <stdio.h>
  
int main(void)
{
    printf("What is your name?");
    // Get text input from user:
    string name = GetString();
  
    // Use user input in output striing:
    printf("Hello, %s\n", name);

    return 0;
}
