/*
I don't really know if anybody will use these.
But you can basically read the documentaries for "bitwise operators" to understand how these work.
I don't even really know how these really know too.
*/


unsigned int bitwise_and(unsigned int a, unsigned int b) {
    // ? If both of the bits are 1 it will return 1
    return a&b;
}

unsigned int bitwise_or(unsigned int a, unsigned int b) {
    // ? If any of the bits are 1 it will return 1
    return a|b; 
}

unsigned int bitwise_xor(unsigned int a, unsigned int b) {
    // ? Same as bitwise_or but it has a difference.
    // ? If both bits are 1 it will return 0. Also if both are 0 it will return 0 too.
    return a^b; 
}

unsigned int bitwise_lshift(unsigned int a, unsigned int b) {
    // ? I don't know these.
    return a<<b; 
}

unsigned int bitwise_rshift(unsigned int a, unsigned int b) {
    return a>>b; 
}

unsigned int bitwise_not(unsigned int a, unsigned int b) {
    return a = ~b;
}