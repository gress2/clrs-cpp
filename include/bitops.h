//
// Created by Collin Gress on 12/4/16.
//

#ifndef CLRS_BITOPS_H
#define CLRS_BITOPS_H

#include <bitset>

namespace clrs
{
namespace bitops
{
    // exercise 2.1-4 implementation
    template <size_t S>
    std::bitset<S> add_bitsets_naieve(std::bitset<S-1> a, std::bitset<S-1> b)
    {
        std::bitset<S> c;

        bool carry = 0;
        for (int i = 0; i < S - 1; i++)
        {
            int bit_sum = a[i] + b[i] + carry;
            if (bit_sum >= 2)
            {
                c[i] = bit_sum - 2;
                carry = 1;
            }
            else
            {
                carry = 0;
                c[i] = bit_sum;
            }
        }
        if (carry)
        {
            c[S - 1] = 1;
        }

        return c;
    }

}
}

#endif //CLRS_BITOPS_H
