//print the current time, day, month, and year
#include <iostream> //header file
#include <ctime>  //header file

int main()
 {
    time_t s;
    struct tm* current_time;

    s = time(nullptr);

    current_time = localtime(&s);

    std::cout << "Day of the month = " << current_time->tm_mday << std::endl;
    std::cout << "Day in this year = " << current_time->tm_yday << std::endl;
    std::cout << "Day in this week = " << current_time->tm_wday << std::endl;
    std::cout << "Month of this year = " << (current_time->tm_mon + 1) << std::endl;
    std::cout << "Current year = " << (current_time->tm_year + 1900) << std::endl;
    std::cout << "hour:min:sec = " << current_time->tm_hour << ":"
              << current_time->tm_min << ":" << current_time->tm_sec << std::endl;

    return 0;
}
