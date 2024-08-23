#include "pscan.hpp"

int main() {
    int num_threads = thread::hardware_concurrency();
    printf("Threads available: %d\n", num_threads);
    scan();
}