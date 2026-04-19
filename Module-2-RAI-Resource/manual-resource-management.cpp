// dynamic memory allocation
// files
// socket
// mutex
// thread
// handler / events

// 1. acquisition 2. release
// new               delete

#include <iostream>

int main()
{
    int *p = new int[5]; // acquisition 

    for (int i = 0; i < 5; i++)
    {
        p[i] = i * 5; // 0 5 10 15 20
    }

    for (int i = 0; i < 5; i++)
    {
        std::cout << p[i] << " ";
    }

    std::cout << "\n";

    delete []p; // release

    return 0;
}




