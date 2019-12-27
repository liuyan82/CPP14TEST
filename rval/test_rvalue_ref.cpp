#include "move_constructor.h"
#include <utility>
#include<iostream>
#include <cstdint>

rval::TestMoveConstruct giveMeACopy() {
    return rval::TestMoveConstruct();
}

int x;
 
int getInt ()
{
    return x;
}
 
int && getRvalueInt ()
{
    // notice that it's fine to move a primitive type--remember, std::move is just a cast
    return std::move( x );
}

template<typename T>
void printAddress (const T& v) // const ref to allow binding to rvalues
{
    std::cout << reinterpret_cast<const void*>(&v) << std::endl;
}



int main(int argc, const char **argv) {
    int a = 5;
    int &b = a;
    //int &c = 10; // compile error: non-const lvalue reference to type 'int' cannot bind to a temporary of type 'int'
    int &&d = 10;


    rval::TestMoveConstruct copy5(giveMeACopy());
 
    printAddress(getInt()); 
    printAddress(x);
    printAddress(getRvalueInt());


    return 0;
}


