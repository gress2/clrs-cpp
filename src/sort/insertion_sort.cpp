//
// Created by Collin Gress on 12/3/16.
//
#include "../../include/util.h"
#include "../../include/sort.h"

using namespace clrs;

int main()
{
    srand((unsigned int)time(NULL));

    std::vector<int> v = util::random_vect<int>(30);
    sort::insertion_sort(v, sort::ascending<int>());
    bool pass = sort::is_sorted(v, sort::ascending<int>());
    std::cout << "Ascending sort successful: " << util::btos(pass) << std::endl;

    v = util::random_vect<int>(30);
    sort::insertion_sort(v, sort::descending<int>());
    pass = sort::is_sorted(v, sort::descending<int>());
    std::cout << "Descending sort successful: " << util::btos(pass) << std::endl;

    return 0;
}