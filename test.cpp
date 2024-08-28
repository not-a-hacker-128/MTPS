#include "pscan.hpp"

void scan() {
    for(int i = 0; i < 65535; i++){
        int sockfd;
        struct sockaddr_in tower;

        if (inet_pton(AF_INET,"127.0.0.1", &tower.sin_addr) < 1 ){
            fprintf(stderr,"problem loading IP address");
            exit(EXIT_FAILURE);
        }
        // set memory in tower structure
        memset(&tower, 0, sizeof(tower));
        tower.sin_family = AF_INET;
        tower.sin_addr.s_addr = inet_addr("127.0.0.1");
        tower.sin_port=htons(i);

        // Check due creating socket if there is an error , the socket close if there is an error 
        // continue itteration
        if((sockfd = socket(PF_INET,SOCK_STREAM,0)) < 0){
            close(sockfd);
            continue;

        }
    }
}

int main() {
    int num_threads = thread::hardware_concurrency();
    printf("Threads available: %d\n", num_threads);
    scan();
}
