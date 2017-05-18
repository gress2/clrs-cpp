//
// Created by Collin Gress on 12/10/16.
//
#include "../../include/util.hpp"
#include "../../include/sort.hpp"

using namespace clrs;

int main()
{
    srand((unsigned int)time(NULL));

    std::vector<int> v = util::random_vect<int>(100);
    sort::merge_sort(v, 0, v.size() - 1);
    std::cout << "Merge sort successful: " << util::btos(sort::is_sorted(v)) << std::endl;

    return 0;
}
