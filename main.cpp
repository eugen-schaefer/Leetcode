#include "ReverseInteger/Solution_ReverseInteger.h"
#include "TwoSum/Execute_TwoSum.h"
#include <iostream>
#include <limits>


class Date {
public:
    Date(int d, int m, int y);
    Date()=default;
    int getDay();
    int getMonth();
    int getYear();
private:
//    int m_day{1};
//    int m_month{2};
//    int m_year{3};
    int m_day;
    int m_month;
    int m_year;
};

Date::Date(int d, int m, int y):m_day{d}, m_month{m}, m_year{y}{};
int Date::getDay(){return m_day;};
int Date::getMonth(){return m_month;};
int Date::getYear(){return m_year;};

int main() {
    std::cout << "Execution of Two Sum" << std::endl;
    std::cout << "---------------------------------------" << std::endl;
    Execute_TwoSum();
    std::cout << "=======================================" << std::endl;

    std::cout << "Execution of Reverse Integer" << std::endl;
    std::cout << "---------------------------------------" << std::endl;
    int any_integer = 2147483621;
    Solution_ReverseInteger RevInt{};
    std::cout << any_integer << " <<<<<<<<<<>>>>>>>>>>> " << RevInt.reverse(any_integer) << std::endl;
    std::cout << "=======================================" << std::endl;


    std::vector<int> myVec{21, 23, 65, 89};
    for (auto elem : myVec) {
        std::cout << elem << "\n";
    }

    Date myDate(04, 11, 1979);
    //Date myDate;
    std::cout << "My Birthday is " << myDate.getDay() << "." << myDate.getMonth() << "." << myDate.getYear();

    return 0;
}
