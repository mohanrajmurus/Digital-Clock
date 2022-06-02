#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;

class Time{
private:
    int hour, min, sec;
public:
 void get_time();
 void show_time();
};

void Time::get_time()
{
    cout << "Enter an Hour: \n";
    cin >> hour;
    cout << "Enter an Minute: \n";
    cin >> min;
    sec = 60;
}
void Time::show_time()
{
    while(true)
    {
        cout << setw(2) << setfill('0')<< hour << ":" << setw(2) << setfill('0')<< min-1 << ":" << setw(2) << setfill('0')<< sec-1 << "\n";
        sec--;
        Sleep(1000);
        system("Cls");
        if(sec == 0)
        {
            sec = 60;
            min--;
        }
        if(min == 0)
        {
            if(hour == 0 && min == 0)
                break;
            hour--;
            min = 60;
        }
    }
    
    
}

int main()
{
    Time o;
    cout << "\n\n Counter Clock\n\n";
    o.get_time();
    o.show_time();
    cout << "\\nTime Ended!!\n\n";
}