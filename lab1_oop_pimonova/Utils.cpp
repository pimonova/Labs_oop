#pragma once

#include <iostream>

#include "Utils.h"

int getInRange(int x1, int x2)
{
    int x;
    while ((std::cin >> x).fail() || x1 > x || x > x2)
    {
        std::cout << "Try again: ";
        std::cin.clear();
        std::cin.ignore(10000, '\n');
    }
    return x;
}