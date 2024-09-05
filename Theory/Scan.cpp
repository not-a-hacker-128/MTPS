void scan() {
    for(int i = 0; i < 65535; i++){
        int sockfd;
        struct sockaddr_in tower;

        if (inet_pton(AF_INET,"127.0.0.1", &tower.sin_addr) < 1 ){
            fprintf(stderr,"problem loading IP address");
            exit(EXIT_FAILURE);
        }
        memset(&tower, 0, sizeof(tower));
        tower.sin_family = AF_INET;
        tower.sin_addr.s_addr = inet_addr("127.0.0.1");
        tower.sin_port=htons(i);

        if((sockfd = socket(PF)))
    }
}
