#include "pscan.hpp"

void scan() {
    for(int i = 0; i < 65535; i++){
        
    }
}

int main() {
    int num_threads = thread::hardware_concurrency();
    printf("Threads available: %d\n", num_threads);
    scan();
}
