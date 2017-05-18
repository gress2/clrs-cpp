//
// Created by Collin Gress on 12/4/16.
//
#include <vector>
#include <bitset>

#include "../../include/util.hpp"
#include "../../include/bitops.hpp"

using namespace clrs;

int main()
{
    /* Consider the problem of adding two n-bit binary integers, stored in two n-element arrays A and B.
     * The sum of the two integers should be stored in binary form in an (n+1) element array C.
     */

    srand((unsigned int)time(NULL));

    std::bitset<7> A = util::random_bitset<7>();
    std::bitset<7> B = util::random_bitset<7>();

    std::bitset<8> C = bitops::add_bitsets_naieve<8>(A, B);
    if (A.to_ulong() + B.to_ulong() == C.to_ulong())
    {
        std::cout << "Added bits successfully." << std::endl;
    }
    else
    {
        std::cout << "Adding bits failed." << std::endl;
    }
}
