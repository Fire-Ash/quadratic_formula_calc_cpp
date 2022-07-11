#include "header.h"

int main(int argc, char *argv[])
{
    double a, b, c;

    if(argc == 1) {                                                  // no extra args
    std::cout << "    Quadratic Formula Calculator    \n";
    std::cout << "------------------------------------\n";

    std::cout << "input the value for a:\n";
    std::cin >> a;
    std::cout << "input the value for b:\n";
    std::cin >> b;
    std::cout << "input the value for c:\n";
    std::cin >> c;
    std::cout << "\n\n";
    } else if(argc > 1 && argc < 4) {                                // not enough args
        std::cout << "not enough arguments were provided.\n";
        std::cout << "argument 1: value for a\nargument 2: value for b\nargument 3: value for c\n";

        return 1;
    } else if(argc == 4) {
        a = atof(argv[1]);
        b = atof(argv[2]);
        c = atof(argv[3]);
    }

    double sqp1 = pow(b, 2);
    double sqp2 = 4 * a * c;
    double sq   = sqrt(sqp1 - sqp2);
    double p2   = 2 * a;

    double x1p1 = -b + sq;
    double x2p1 = -b - sq;

    double x1   = x1p1 / p2;
    double x2   = x2p1 / p2;

    std::cout << "x1 = " << x1 << "\nx2 = " << x2 << "\n";

    if(argc == 1) {
        std::cout << "\nPress Enter to continue.";
        std::cin.ignore();
        std::cin.get();
    }

    return 0;
}