#include <iostream>
#include <limits>
#include <math.h>
#include <iomanip>
#include <cmath>

void program1()
{
    int n1, n2 = 0, a, b, c;
    std::cout << "Enter N\n";
    std::cin >> n1;
    while (n1 != n2)
    {
        a = 10;
        b = 1;
        n2 = 0;
        while (n1 / b != 0)
        {
            c = (n1 % a) / b;
            n2 = n2 * 10 + c;
            a *= 10;
            b *= 10;
            std::cout << n2 << " ";
        }
        if (n1 == n2) {
            std::cout << "\nPolyndrome is " << n1 << "\n";
            break;
        }
        n1 += n2;
        std::cout << " ";
    }
    return;
}

void program2()
{
    std::cout << "Enter numbers, 0 to stop\n";
    int max1, max2, n, c;
    max1 = INT32_MIN;
    max2 = INT32_MIN;
    do {
        std::cin >> n;
        if (n >= max1) {
            max1 = n;
        }
        if (max1 >= max2) {
            c = max1;
            max1 = max2;
            max2 = c;
        }
    } while (n != 0);
    std::cout << max1 << " " << max2 << "\n";
    return;
}

void program3()
{
    int a = 0, b = 0, n;
    bool f = 0, g = 0;
    std::cout << "Enter even N (>2)\n";
    std::cin >> n;
    if (n % 2 != 0 || n < 4) {
        std::cout << "Input error!\n";
        return;
    }
    for (int i = 2; i < n; i++)
    {
        f = 0;
        for (int j = 2; j < n; j++)
        {
            if ((i != j) && (i % j == 0)) {
                f = 1;
                break;
            }
        }
        if (f == 0) {
            a = i;
            b = n - a;
            for (int j = 2; j < n; j++)
            {
                if ((b != j) && (b % j == 0)) {
                    f = 1;
                    break;
                }
            }
            if (f == 0 && a >= b) {
                std::cout << a << " + " << b << "; ";
            }
        }
    }
    return;
}

int main()
{
    int x = 1;
    do {

        //program1();
        //program2();
        program3();

        std::cout << '\n';
    } while (x == 1);
    return 0;
}