#include <iostream>
#include <thread>

/* adding a small fuction to be used to understand thread */
void test (int x) {
    std::cout << "inside the test function" << std::endl;
    std::cout << "argument passed is " << x << std::endl;
}

int main() {
    std::thread mythread(&test, 100);
    std::cout <<"hello from the main thread!" <<std::endl;
    return 0;
}
