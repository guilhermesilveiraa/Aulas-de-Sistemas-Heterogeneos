// Tutorial 1: Introduction to C++ Multithreading
#include <iostream>
#include <thread>

void print_hello() {
    std::cout << "Hello from thread!" << std::endl;
}

int main() {
    std::thread t(print_hello);
    t.join();
    return 0;
}
