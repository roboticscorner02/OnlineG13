#include <iostream>

enum WEEK_DAYS : std::uint16_t // integer datatype
{
    Monday=1U,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday,
    WEEK_DAYS=7
};

int main()
{
    constexpr std::uint16_t TEN_DAYS = 10;
    std::uint16_t current_day = Saturday;
    std::string day(" ");
    std::uint16_t meet_day = (current_day + TEN_DAYS) % WEEK_DAYS;

    switch (meet_day)
    {
    case Monday:
        day="MONTAG";
        break;
    case Tuesday:
        day="DIENSTAG";
        break;
    case Wednesday:
        day="MITTWOCH";
        break;
    case Thursday:
        day="DONNERSTAG";
        break;
    case Friday:
        day="FRITAG";
        break;
    case Saturday:
        day="SAMSTAG";
        break;
    case Sunday:
        day="SONNTAG";
        break;
    default:
    day = "HI";
        break;
    }

    std::cout << "Meet Day: " << day << std::endl;
}
