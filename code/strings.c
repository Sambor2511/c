// String Variables

char *s = "Hello, world!";
printf("%s\n", s); // "Hello, world!"

// Copy strings problem
#include <stdio.h>

int main(void)
{
    char s[] = "Hello, world!";
    char *t;

// This makes a copy of the pointer, not a copy of the string!
    t = s;

// We modify t
    t[0] = 'z';

// But printing s shows the modification!
// Because t and s point to the same string!

    printf("%s\n", s); // "zello, world!"
}

// Copy strings
#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[] = "Hello, world!";
    char t[100]; // Each char is one byte, so plenty of room

// This makes a copy of the string!
    strcpy(t, s);

// We modify t
    t[0] = 'z';

// And s remains unaffected because it's a different string
    printf("%s\n", s); // "Hello, world!"

// But t has been changed
    printf("%s\n", t); // "zello, world!"
}
