#include <iostream>
#include <string>

int main()
{
    std::string departureTime, arrivalTime;
    int digitDeparture1, digitDeparture2, digitDeparture3, digitDeparture4, digitArrival1, digitArrival2, digitArrival3, digitArrival4,
    allHoursDeparture, allHoursArrival, allTimeDeparture, allTimeArrival, allMinutesArrival, allMinutesDeparture;
    bool checkPassed = 0;
    while (!checkPassed)
    {
        std::cout << "Введите время отправления (HH:MM): ";
        std::cin >> departureTime;
        std::cout << "Введите время прибытия (HH:MM): ";
        std::cin >> arrivalTime;
        if (departureTime.length() != 5 || arrivalTime.length() != 5 || departureTime[2] != ':' || arrivalTime[2] != ':')
            std::cout << "Некорректный ввод\n";
        else
        {
            // перевод строки в числа
            digitDeparture1 = (int)departureTime[0] - (int)'0';
            digitDeparture2 = (int)departureTime[1] - (int)'0';
            digitDeparture3 = (int)departureTime[3] - (int)'0';
            digitDeparture4 = (int)departureTime[4] - (int)'0';
            digitArrival1 = (int)arrivalTime[0] - (int)'0';
            digitArrival2 = (int)arrivalTime[1] - (int)'0';
            digitArrival3 = (int)arrivalTime[3] - (int)'0';
            digitArrival4 = (int)arrivalTime[4] - (int)'0';

            // время поездки
            allHoursDeparture = digitDeparture1 * 10 + digitDeparture2;
            allHoursArrival = digitArrival1 * 10 + digitArrival2;
            allMinutesDeparture = digitDeparture3 * 10 + digitDeparture4;
            allMinutesArrival = digitArrival3 * 10 + digitArrival4;
            allTimeDeparture = allHoursDeparture * 60 + allMinutesDeparture;
            allTimeArrival = allHoursArrival * 60 + allMinutesArrival;

            if (allHoursDeparture > 23 || allHoursDeparture < 0 || allHoursArrival > 23 || allHoursArrival < 0 || allMinutesDeparture > 59 || allMinutesDeparture < 0
            || allMinutesArrival > 59 || allMinutesArrival < 0) std::cout << "Некорректный ввод\n";
            else checkPassed = 1;
        }
    }

    // прибытие в этот же день
    if (allTimeArrival >= allTimeDeparture)
    {
        // стандартный счёт
        if (allMinutesArrival >= allMinutesDeparture)
            std::cout << "Поездка составила " << allHoursArrival - allHoursDeparture << "ч. " << allMinutesArrival - allMinutesDeparture << "мин.\n";
        // занимаем час
        else
        {
            allHoursArrival--;
            allMinutesArrival += 60;
            std::cout << "Поездка составила " << allHoursArrival - allHoursDeparture << "ч. " << allMinutesArrival - allMinutesDeparture << "мин.\n";
        }
    }
    else // на следующий день
    {
        int HoursTillMidnight = 23 - allHoursDeparture;
        if (allMinutesDeparture + allMinutesArrival >= 60) // если сумма минут больше часа
            std::cout << "Поездка составила " << HoursTillMidnight + allHoursArrival + 1 << "ч. " << allMinutesArrival + allMinutesDeparture - 60 << "мин.\n";
        else
            std::cout << "Поездка составила " << HoursTillMidnight + allHoursArrival << "ч. " << allMinutesArrival + (60 - allMinutesDeparture) << "мин.\n";
    }
}