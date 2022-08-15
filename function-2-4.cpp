#include <iostream>
using namespace std;
float arithmetic_ops(float left, float right, float (*op)(float,float))
{
return (*op)(left, right);
}

float multiply_op(float left, float right) {
        return left * right;
}

float multiply(float a, float b) {
        return arithmetic_ops(a, b, multiply_op);
}