#include <cmath>
#include <cassert>

//----------------------------------------------------
//! Solves a linear equation a*x + b = 0
//!
//! \param a a-coefficient
//! \param b b-coefficient
//! \param x1 Pointer to root
//! \return Number of roots
//! \note Returns -1 in case of infinite number of roots
//----------------------------------------------------

int LinearEquation(double a, double b, double* x1) {
    if (a == 0) {
        if (b == 0) return -1;
        else return 0;
    } else {
        *x1 = -b / a;
        return 1;
    }
}

//----------------------------------------------------
//! Solves a square equation a*x^2 + b*x + c = 0
//!
//! \param a a-coefficient
//! \param b b-coefficient
//! \param c c-coefficient
//! \param x1 Pointer to 1st root
//! \param x2 Pointer to 2nd root
//! \return Number of roots
//! \note Returns -1 in case of infinite number of roots
//----------------------------------------------------

int SquareEquation(double a, double b, double c, double* x1, double* x2) {
    assert(std::isfinite(a));
    assert(std::isfinite(b));
    assert(std::isfinite(c));
    assert(x1 != nullptr);
    assert(x2 != nullptr);
    assert(x1 != x2);

    if (a == 0) return LinearEquation(b, c, x1);
    else {
        double d = b * b - 4 * a * c;
        if (d < 0) return 0;
        else if (d == 0) {
            *x1 = -b / 2 / a;
            return 1;
        } else {
            *x1 = (-b - sqrt(d)) / 2 / a;
            *x2 = (-b + sqrt(d)) / 2 / a;
            return 2;
        }
    }
}