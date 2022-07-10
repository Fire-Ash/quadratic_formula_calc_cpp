#include "header.h"

int main()
{
    double a, b, c;
    double x1, x2;

    std::cout << "    Quadratic Formula Calculator    \n";
    std::cout << "------------------------------------\n";

    std::cout << "input the value for a:\n";
    std::cin >> a;
    std::cout << "input the value for b:\n";
    std::cin >> b;
    std::cout << "input the value for c:\n";
    std::cin >> c;

    double sqp1 = pow(b, 2);
    double sqp2 = 4 * a * c;
    double sq   = sqrt(sqp1 - sqp2);
    double p2   = 2 * a;

    double x1p1 = -b + sq;
    double x2p1 = -b - sq;

    x1 = x1p1 / p2;
    x2 = x2p1 / p2;

    std::cout << "\n\nx1 = " << x1 << "\nx2 = " << x2 << "\n\n";

    return 0;
}