//
// Created by Collin Gress on 12/3/16.
//
#include "../../include/util.h"
#include "../../include/sort.h"

using namespace clrs;

int main()
{
    std::vector<int> v = util::random_vect<int>(30);
    sort::insertion_sort(v, sort::ascending<int>());
    bool pass = sort::is_sorted(v, sort::ascending<int>());
    std::cout << "Sort successful: " << util::btos(pass) << std::endl;
    return 0;
}