#include <iostream>
#include <vector>
#include <thread>       // For std::this_thread::sleep_for
#include <chrono>       // For std::chrono::duration
#include "Rain.h"

int main() {

    RemoveCursor();
    ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);
    std::vector<Matrix>vector1;
    std::vector<Matrix>vector2;
    
 
  for (int y = 0; y < 15; y++) {
        vector1.push_back(Matrix());
        vector2.push_back(Matrix());
        std::this_thread::sleep_for(std::chrono::milliseconds(10)); 
        }

    while (1) { 
        system("clear");
        for(int m = 0; m<300; m++){
        for (int x = 0; x < vector1.size(); x++) {
            vector1.at(x).display();
            vector2.at(x).display2();
            vector1.at(x).display();
            vector2.at(x).display2();
            vector1.at(x).display();
            vector2.at(x).display2(); 
            auto start = std::chrono::high_resolution_clock::now();
            while (std::chrono::high_resolution_clock::now() - start < std::chrono::microseconds(1500)) {
            // busy-wait
    }   
        }                            
        }
    
    }
    return 0;

}