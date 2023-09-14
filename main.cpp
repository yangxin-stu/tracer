#include <iostream>


class A {
public:
    A() = default;
};


class [[maybe_unused]] B : public A {
};

class [[maybe_unused]] C : public A {
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    A a1, a2, a3;



    return 0;
}
