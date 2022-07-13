#include <iostream>

void print(int *x) {
    for(int i = 0; i < sizeof(x)/sizeof(x[0]); i++) {
        std::cout << x[i] << std::endl;
    }
}

int main() {
    int arr[3] = {4, 8, 6};

    print(arr);
}


