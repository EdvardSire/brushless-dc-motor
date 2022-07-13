#include <iostream>

void run_n_windings(int *arr, int nu) {
    //arr[sizeof(arr)/sizeof(arr[0])-1] = 0;

    for(int i = 0; i < nu; i++) {
        arr[i] = 1; //digitalWrite(i, HIGH);

        
        for(int j = 0; j < nu; j++) {
            std::cout << arr[j] << " ";
        }
        std::cout << std::endl; 

        //delay(deltat) 
        
        arr[i] = 0; //digitalWrite(i, LOW);

/*
        for(int j = 0; j < nu; j++) {
            std::cout << arr[j] << " ";
        }
        std::cout << std::endl; 

*/
    }
}

int main() {
    const int n = 6;
    int windings[n];
    std::fill(std::begin(windings), std::end(windings), 0);

    for(auto f : windings) {
        std::cout << f << " ";
    }
    std::cout << std::endl;
    std::cout << "start" << std::endl;

    run_n_windings(windings, n);
    run_n_windings(windings, n);
    run_n_windings(windings, n);
    run_n_windings(windings, n);
}
