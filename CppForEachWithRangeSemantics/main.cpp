#include <vector>
#include <algorithm>
#include <numeric>
#include <iostream>

namespace RangeSemantics {
    template<typename Range, typename Function>
    Function for_each(Range& range, Function function) {
        return std::for_each(begin(range), end(range), function);
    }
}

int main()
{

    std::vector<int> IntVect(10);

    std::iota(begin(IntVect), end(IntVect), 0);

    auto RangeLambda = [](const int x) {
        std::cout << x << std::endl;
    };

    RangeSemantics::for_each(IntVect, RangeLambda);

    return 0;
}