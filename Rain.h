#include <time.h>
#include <process.h>
#include <iostream>
#include "Control.h"

class Matrix {
    private:

        int green;
        int darkgreen;
        int length; 
        int counter; 

        COORD position_; 

    public:
        Matrix();
        void display();
        void display2();

};

