#include <stdio.h>

int main(void)
{
    // Hello World
//    printf("Hello, World!\n");  // Actually do the work here

    // Increment
//    int i,j;
//    i = 10;
//    j = 5 + i++;  // Compute 5 + i, _then_ increment i
//
//    printf("%d, %d\n", i, j);  // Prints 11, 15
//
//    i = 10;
//    j = 5 + ++i;  // Increment i, _then_ compute 5 + i
//
//    printf("%d, %d\n", i, j);  // Prints 11, 16

    // Ternary
//    int y = 0;
//    int x = 16;
//    // Actually do the work here
//    y += x > 10? 17: 37;
//    printf("Hello %d", y);
//// is equivalent to this non-expression:
//
////    if (x > 10)
////        y += 17;
////    else
////        y += 37;

    // Comma Operator
//    int x = (1, 2, 3);
//    printf("x is %d\n", x);  // Prints 3, because 3 is rightmost in the comma list
//
//// But even that’s pretty contrived. One common place the comma operator is used is in for loops to do multiple things in each section of the statement:
//    int i,j;
//    for (i = 0, j = 10; i < 100; i++, j++)
//        printf("%d, %d\n", i, j);

    // Conditional Operators
//For Boolean values, we have a raft of standard operators:
//
//    a == b;  // True if a is equivalent to b
//    a != b;  // True if a is not equivalent to b
//    a < b;   // True if a is less than b
//    a > b;   // True if a is greater than b
//    a <= b;  // True if a is less than or equal to b
//    a >= b;  // True if a is greater than or equal to b

    // The sizeof Operator
//    int a = 999;
//// %zu is the format specifier for type size_t
//    printf("%zu\n", sizeof a); // Prints 4 on my system
//    printf("%zu\n", sizeof(2 + 7)); // Prints 4 on my system
//    printf("%zu\n", sizeof 3.14); // Prints 8 on my system
//// If you need to print out negative size_t values, use %zd

    // Flow Control
//    if (x == 10) printf("x is 10\n");
    // The if-else statement
//    int i = 10;
//    if (i > 10) {
//    printf("Yes, i is greater than 10.\n");
//    printf("And this will also print if i is greater than 10.\n");
//    }
//    if (i <= 10) printf("i is less than or equal to 10.\n");

    // The while statement
//    int i = 0;
//    while (i < 10) {
//    printf("i is now %d!\n", i);
//    i++;
//    }
//    printf("All done!\n");

    // The do-while statement
    // this is not executed because i is not less than 10:
//    i = 10;
//    while(i < 10) {
//    printf("while: i is %d\n", i);
//    i++;
//    }
//    // Using a do-while statement:
//    i = 10;
//    // this is executed once, because the loop condition is not checked until
//    // after the body of the loop runs:
//    do {
//    printf("do-while: i is %d\n", i);
//    i++;
//    } while (i < 10);
//    printf("All done!\n");

//    #include <stdio.h> // For printf
//    #include <stdlib.h> // For rand
//
//    int main(void)
//    {
//        int r;
//
//        do
//        {
//            r = rand() % 100; // Get a random number between 0 and 99
//            printf("%d\n", r);
//        }
//        while (r != 37);   // Repeat until 37 comes up
//    }
    // The for statement
//    // Print numbers between 0 and 9, inclusive...
//// Using a while statement:
//    i = 0;
//    while (i < 10)
//    {
//        printf("i is %d\n", i);
//        i++;
//    }
//// Do the exact same thing with a for-loop:
//    for (i = 0; i < 10; i++)
//    {
//        printf("i is %d\n", i);
//    }
//    for(;;)   // "forever"
//    {
//        printf("I will print this again and again and again\n" );
//        printf("for all eternity until the heat-death of the universe.\n");
//        printf("Or until you hit CTRL-C.\n");
//    }

    // The switch Statement
//#include <stdio.h>
//
//    int main(void)
//    {
//        int goat_count = 2;
//
//        switch (goat_count)
//        {
//        case 0:
//            printf("You have no goats.\n");
//            break;
//
//        case 1:
//            printf("You have a singular goat.\n");
//            break;
//
//        case 2:
//            printf("You have a brace of goats.\n");
//            break;
//
//        default:
//            printf("You have a bona fide plethora of goats!\n");
//            break;
//        }
//    }


}
