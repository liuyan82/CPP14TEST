#include <iostream>
#include <string>
#include <future>

int anotherFunction(const std::wstring &name) {
    std::wcout << L"Hello, " << name << std::endl;
}

int main(int argc, const char **argv) {
    std::async(std::launch::async, anotherFunction, L"liuyan");
    return 0;
}

