#include "operations.h"

/**
 * add - add function
 * @a: int
 * @b: int
 * Return: a+b
*/

int add(int a, int b) {
    return (a + b);
}

/**
 * sub - sub function
 * @a: int
 * @b: int
 * Return: a-b
*/

int sub(int a, int b) {
    return (a - b);
}


/**
 * mul - mul function
 * @a: int
 * @b: int
 * Return: a*b
*/

int mul(int a, int b) {
    return (a * b);
}

/**
 * div - div function
 * @a: int
 * @b: int
 * Return: a/b
*/

int div(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero\n");
        return 0;
    }
    return (a / b);
}


/**
 * mod - mod function
 * @a: int
 * @b: int
 * Return: a%b
*/

int mod(int a, int b) {
    if (b == 0) {
        printf("Error: Modulo by zero\n");
        return 0;
    }
    return (a % b);
}
