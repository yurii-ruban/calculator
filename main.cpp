#include "calculator.h"

int main (int argc, char** argv)
{
    const double WIDTH = 12.3,
                 HEIGHT = 10.2;
    Calculator c;

    double square = c.Mul(WIDTH, HEIGHT); 
    return square;
}