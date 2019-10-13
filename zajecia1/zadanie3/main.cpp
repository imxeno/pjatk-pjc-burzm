#include <iostream>

int main() {
    const int count = 3;
    unsigned int histogram[count];

    for(int i = 0; i < count; i++) {
        std::cin >> histogram[i];
    }

    int biggest = histogram[0];
    for(int i = 1; i < count; i++) {
        if(histogram[i] > biggest) biggest = histogram[i];
    }

    while(biggest > 0) {
        for(int i = 0; i < count; i++) {
            if(histogram[i] >= biggest) std::cout << "* "; else std::cout << "  ";
        }
        std::cout << std::endl;
        biggest--;
    }

    return 0;
}