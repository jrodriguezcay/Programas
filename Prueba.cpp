#include<iostream>

int main(int argc, char **argv){
    const int N = std::atoi(argv[1]);

    for(int i = 1; i <= N; i++){
        std::cout<<"Hola mundo\n";
    }

    return 0;
}