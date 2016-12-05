//
// Created by Collin Gress on 12/3/16.
//

#ifndef CLRS_UTIL_H
#define CLRS_UTIL_H

#include <vector>
#include <cstdlib>
#include <iostream>

namespace clrs
{
namespace util
{
    template <typename T>
    std::vector<T> random_vect(int size)
    {
        srand(time(NULL));
        std::vector<T> v;
        for (int i = 0; i < size; i++)
        {
            T num = static_cast<T>(rand() % size + 1);
            v.push_back(num);
        }
        return v;
    }

    template <typename T>
    void print_vect(std::vector<T> &v)
    {
        for (int i = 0; i < v.size(); i++)
        {
            std::cout << v.at(i) << std::endl;
        }
    }

    std::string btos(bool b)
    {
        return b ? "true" : "false";
    }

}
}

#endif //CLRS_UTIL_H
