

int main(int argc, const char **argv) {
    int a = 5;
    int &b = a;
    //int &c = 10; // compile error: non-const lvalue reference to type 'int' cannot bind to a temporary of type 'int'
    int &&d = 10;

    return 0;
}
