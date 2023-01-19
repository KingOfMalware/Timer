#include <iostream>
#include <Windows.h>

int main()
{
    short minutes = 0, seconds = 0, hours = 0;
    while (true) {
        seconds += 1;
        Sleep(1000);
        if (seconds > 59) {
            seconds = 0;
            minutes += 1;
            
        }
        if (minutes > 59) {
            minutes = 0;
            hours += 1;
        }
        system("cls");
        std::cout << seconds << ":" << minutes << ":" << hours << std::flush;
        
    }
}
