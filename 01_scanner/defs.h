#include <stdio.h> //FILE
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

enum {
    T_PLUS, T_MINUS, T_STAR, T_SLASH, T_INTLIT
};

struct token {
    int token;
    int intvalue;
};
