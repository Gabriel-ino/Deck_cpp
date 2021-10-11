#ifndef CLEAR_SCREEN_H_INCLUDED
#define CLEAR_SCREEN_H_INCLUDED

#include <iostream>

#ifdef __unix__
    #include <unistd.h>
    #include <stdlib.h>

#elif defined(_WIN32) || defined(WIN32)

   #define OS_Windows

   #include <windows.h>

#endif

using namespace std;

void clearScreen(){
    #ifdef OS_Windows
        system("cls");
    #else
        system("clear");
    #endif // OS_Windows
}


#endif // CLEAR_SCREEN_H_INCLUDED
