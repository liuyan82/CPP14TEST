#include <iostream>

int main(int argc, const char **argv) {
    int array[7] = {1, 2, 3, 4, 3, 2, 1};
    // for (auto it = array.begin(); it != array.end(); ++it) // compile error : no begin/end for array
    for (auto it = std::begin(array); it != std::end(array); ++it) 
    {
        std::cout << *it << std::endl;
    }
    return 0;
}
