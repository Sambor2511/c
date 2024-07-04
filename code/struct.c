// Struct

struct car{
    char *name;
    float price;
    int speed;
};

struct car saturn; // Variable "saturn" of type "struct car"
saturn.name = "Saturn SL/2";
saturn.price = 15999.99;
saturn.speed = 175;
printf("Name: %s\n", saturn.name);
printf("Price (USD): %f\n", saturn.price);
printf("Top Speed (km): %d\n", saturn.speed);

struct car {
char *name;
float price;
int speed;
};
// Now with an initializer! Same field order as in the struct declaration:
struct car saturn = {"Saturn SL/2", 16000.99, 175};
printf("Name: %s\n", saturn.name);
printf("Price: %f\n", saturn.price);
printf("Top Speed: %d km\n", saturn.speed);

struct car saturn = {.speed=175, .name="Saturn SL/2"};

// Passing Structs to Functions
#include <stdio.h>

struct car {
    char *name;
    float price;
    int speed;
};

int main(void)
{
    struct car saturn = {.speed=175, .name="Saturn SL/2"};

    // Pass a pointer to this struct car, along with a new,
    // more realistic, price:
    set_price(&saturn, 799.99);

    printf("Price: %f\n", saturn.price);
}
void set_price(struct car *c, float new_price) {
    c.price = new_price;  // ERROR!!
}
void set_price(struct car *c, float new_price) {
    (*c).price = new_price;  // Works, but is ugly and non-idiomatic :(
}
