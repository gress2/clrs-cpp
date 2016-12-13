//
// Created by Collin Gress on 12/3/16.
//

#ifndef CLRS_SORT_H
#define CLRS_SORT_H

#include <vector>
#include <iostream>
#include <math.h>

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

    template<typename T>
    void merge(std::vector<T> &v, size_t p, size_t q, size_t r)
    {
        size_t n1 = q - p + 1;
        size_t n2 = r - q;

        std::vector<T> L, R;

        for (size_t i = 0; i < n1; i++)
        {
            L.push_back(v[p + i]);
        }
        for (size_t i = 0; i < n2; i++)
        {
            R.push_back(v[q + 1 + i]);
        }
        L.push_back(std::numeric_limits<T>::max());
        R.push_back(std::numeric_limits<T>::max());

        size_t i = 0;
        size_t j = 0;

        for (size_t k = p; k <= r; k++)
        {
            if (L[i] <= R[j])
            {
                v[k] = L[i];
                i++;
            } else
            {
                v[k] = R[j];
                j++;
            }
        }
    }

    template<typename T>
    void merge_sort(std::vector<T> &v, size_t p, size_t r)
    {
        if (p < r)
        {
            size_t q = (size_t)floor((p + r) / 2);
            merge_sort(v, p, q);
            merge_sort(v, q + 1, r);
            merge(v, p, q, r);
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
