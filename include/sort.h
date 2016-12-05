//
// Created by Collin Gress on 12/3/16.
//

#ifndef CLRS_SORT_H
#define CLRS_SORT_H

#include <iostream>

namespace clrs
{
namespace sort
{
    template<typename T>
    void insertion_sort(std::vector<T> &v,
                        std::function<bool(T,T)> comp
                        = [](T a, T b) { return a <= b; })
    {
        for (int i = 1; i < v.size(); i++)
        {
            T key = v[i];
            int j = i - 1;

            while(j >= 0 && comp(key, v[j]))
            {
                v[j + 1] = v[j];
                j--;
            }
            v[j + 1] = key;
        }
    }

    template <typename T>
    bool is_sorted(std::vector<T> &v,
                   std::function<bool(T,T)> comp
                   = [](T a, T b) { return a <= b; })
    {
        for (unsigned long i = 0; i < v.size() - 1; i++)
        {
            T prev = v.at(i);
            T cur = v.at((i + 1));

            if (!comp(prev, cur))
            {
                return false;
            }
        }

        return true;
    }

    template <typename T>
    std::function<bool(T,T)> ascending()
    {
        return [](T a, T b) { return a <= b; };
    }

    template <typename T>
    std::function<bool(T,T)> descending()
    {
        return [](T a, T b) { return a >= b; };
    }
}
}

#endif //CLRS_SORT_H
