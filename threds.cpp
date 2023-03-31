
#include <iostream>
#include <thread>
#include "mingw.thread.h"
using namespace std;


// A function that prints number from 1 to n
void printNos(int n)
{
    for (int i = 1; i <= n; i++)
        cout << i << " ";
}

int main()
{
    // Two threads that will call above function
    thread th1(printNos, 50); // thread th1 starts running
    thread th2(printNos, 50); // thread th2 starts running

    // Wait for the threads to finish
    th1.join(); // main thread waits for th1 to finish
    th2.join(); // main thread waits for th2 to finish

    return 0;
}