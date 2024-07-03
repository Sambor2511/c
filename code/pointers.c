// Pointers

#include <stdio.h>

int main(void)

{
    int i = 10;

    printf("The value of i is %d\n", i);
    printf("And its address is %p\n", (void*)&i);

    // %p expects the argument to be a pointer to void
    // so we cast it to make the compiler happy.
}
#include <stdio.h>

void increment(int *p) // note that it accepts a pointer to an int
{
    *p = *p + 1; // add one to the thing p points to
}

int main(void)
{
    int i = 10;
    int *j = &i; // note the address-of; turns it into a pointer to i

    printf("i is %d\n", i); // prints "10"
    printf("i is also %d\n", *j); // prints "10"

    increment(j);
    printf("i is %d\n", i); // prints "11"!
}

// NULL pointer
int *p;
p = NULL;

// sizeof and Pointers
int *p;
// Prints size of an 'int'
printf("%zu\n", sizeof(int));
// p is type 'int *', so prints size of 'int*'
printf("%zu\n", sizeof p);
// *p is type 'int', so prints size of 'int'
printf("%zu\n", sizeof *p);
