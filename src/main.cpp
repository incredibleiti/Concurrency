#include <iostream>
#include <thread>

/* adding a small fuction to be used to understand thread */
void test (int x) {
    std::cout << "inside the test function" << std::endl;
    std::cout << "argument passed is " << x << std::endl;
}

/* using the lamda function to create thread*/

auto lambda=[](int x) {
    std::cout << "inside the lambda function" << std::endl;
    std::cout << "argument passed is " << x << std::endl;
};

int main() {
    std::thread mythread(&test, 100);
    mythread.join();
    std::cout <<"hello from the main thread!" <<std::endl;

    std::thread mylamdathread(lambda,200);
    mylamdathread.join();

    std::cout << "the call after the second lambda thread" << std::endl;
    return 0;
}
