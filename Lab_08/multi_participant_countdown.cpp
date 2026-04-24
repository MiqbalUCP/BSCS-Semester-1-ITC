#include <iostream>
#include <thread>  
#include <chrono>   

using namespace std;

int main() {

    int participant1Time = 5;
    int participant2Time = 3;
    int participant3Time = 8;


    int rounds = max({ participant1Time, participant2Time, participant3Time });


    for (int round = 1; round <= rounds; ++round) {

        cout << "Participant 1: ";
        for (int i = participant1Time; i >= 0; --i) {
            cout << i << " ";
        }
        cout << endl;


        cout << "Participant 2: ";
        for (int i = participant2Time; i >= 0; --i) {
            cout << i << " ";
        }
        cout << endl;


        cout << "Participant 3: ";
        for (int i = participant3Time; i >= 0; --i) {
            cout << i << " ";
        }
        cout << endl;


        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    return 0;
}

