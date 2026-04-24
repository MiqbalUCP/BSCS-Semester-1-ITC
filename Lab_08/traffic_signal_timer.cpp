#include <iostream>
#include <chrono>   
#include <thread> 

using namespace std;

int main() {
    // Define the countdown times for each signal
    int signal1Time = 15;
    int signal2Time = 20;
    int signal3Time = 25;
    int signal4Time = 30;

    for (int i = 0; i <= signal4Time; ++i) {
        if (signal1Time >= i) cout << "Signal 1: " << signal1Time - i << endl;
        if (signal2Time >= i) cout << "Signal 2: " << signal2Time - i << endl;
        if (signal3Time >= i) cout << "Signal 3: " << signal3Time - i << endl;
        if (signal4Time >= i) cout << "Signal 4: " << signal4Time - i << endl;

        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    return 0;
}

