#include "Rain.h"
#include <thread>       // For std::this_thread::sleep_for
#include <chrono>       // For std::chrono::duration


Matrix::Matrix() { //Constructors must have the same name as the class name. so we did use Matrix::Matrix ()

    auto now = std::chrono::high_resolution_clock::now();
    auto seed = static_cast<unsigned int>(std::chrono::duration_cast<std::chrono::microseconds>(now.time_since_epoch()).count());
    srand(seed);
    position_.X = (rand() % 275) ;
    position_.Y = (rand() % 33) ;
    length = (rand()% (position_.Y + 1) );
    green = darkgreen = GetTickCount();
    counter = 0;
};

void Matrix::display() {

        if (GetTickCount() >= green) {
            green = GetTickCount();                      //2 
            PlaceCursor(position_.X, position_.Y);             //2 Places cursor random place same as the top 1
            SetColor(GREEN);                                   //2 Sets font color green  
            std::cout << (char)(rand() % 121 + 34);            //2 Puts a random char same place as the top 1 

            if (GetTickCount() >= darkgreen) {
                darkgreen = GetTickCount();
                PlaceCursor(position_.X, position_.Y);         //3 Places cursor random place same as the top 1 & 2
                                                                    
                if (rand() % 2) {           
                    SetColor(DARK_GREEN);                      //3 If rand number is even sets color dark green if not sets green 
                }
                std::cout << (char)(rand() % 121 + 34);        //3 Puts a random char same place as the top 1 & 2

                position_.Y = (position_.Y + 1);               //3 Adds 1 to Y position downwards 

                if (counter >= length) {                      //4 length_ is between 0-21, if lenCnt belows that lenCnt_++
                    position_.X = (rand() % 275 );              //4 Updates a new X and Y cursor position
                    position_.Y = (rand() % 33 );              //4 Updates a new X and Y cursor position 
                    length = ((rand() % (position_.Y + 1) + 5));
                    counter = 0; 
                } 
                else { 
                    counter++;                                //4 length_ is between 0-21, if lenCnt belows that lenCnt_++
                }
            }
        }
    

    return;
}

void Matrix::display2() {

        if (GetTickCount() >= green) {
            green = GetTickCount();                      //2 
            PlaceCursor(position_.X, position_.Y);             //2 Places cursor random place same as the top 1
            SetColor(BLACK);                                   //2 Sets font color green  
            std::cout << (char)(rand() % 121 + 34);            //2 Puts a random char same place as the top 1 

            if (GetTickCount() >= darkgreen) {
                darkgreen = GetTickCount();
                PlaceCursor(position_.X, position_.Y);         //3 Places cursor random place same as the top 1 & 2
                                                                    
                if (rand() % 2) {           
                    SetColor(BLACK);                      //3 If rand number is even sets color dark green if not sets green 
                }
                std::cout << (char)(rand() % 121 + 34);        //3 Puts a random char same place as the top 1 & 2

                position_.Y = (position_.Y + 1);               //3 Adds 1 to Y position downwards 

                if (counter >= length) {                      //4 length_ is between 0-21, if lenCnt belows that lenCnt_++
                    position_.X = (rand() % 275 );              //4 Updates a new X and Y cursor position
                    position_.Y = (rand() % 33 );              //4 Updates a new X and Y cursor position 
                    length = ((rand() % (position_.Y + 1) + 5));
                    counter = 0; 
                } 
                else { 
                    counter++;                                //4 length_ is between 0-21, if lenCnt belows that lenCnt_++
                }
            }
        }
    

    return;
}


 /*       if (GetTickCount() >= green) {
            green = GetTickCount();                      //2 
            PlaceCursor(position_.X, position_.Y);             //2 Places cursor random place same as the top 1
            SetColor(BLACK);                                   //2 Sets font color green  
            std::cout << (char)(rand() % 121 + 34);            //2 Puts a random char same place as the top 1 

            if (GetTickCount() >= darkgreen) {
                darkgreen = GetTickCount();
                PlaceCursor(position_.X, position_.Y);         //3 Places cursor random place same as the top 1 & 2
                                                                    
                if (rand() % 2) {           
                    SetColor(BLACK);                      //3 If rand number is even sets color dark green if not sets green 
                }
                std::cout << (char)(rand() % 121 + 34);        //3 Puts a random char same place as the top 1 & 2

                position_.Y = (position_.Y + 1);               //3 Adds 1 to Y position downwards 

                if (counter >= length) {                      //4 length_ is between 0-21, if lenCnt belows that lenCnt_++
                    position_.X = (rand() % 200 );              //4 Updates a new X and Y cursor position
                    position_.Y = (rand() % 15 );              //4 Updates a new X and Y cursor position 
                    length = ((rand() % (position_.Y + 1) + 5));
                    counter = 0; 
                } 
                else { 
                    length++;                                //4 length_ is between 0-21, if lenCnt belows that lenCnt_++
                }
            }
        }
    

    return;
}
*/

