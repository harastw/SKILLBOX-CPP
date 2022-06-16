#include <string>
#include <iostream>
#include <sstream> 
using namespace std;

const unsigned int AMOUNT = 4; // amount commands
const unsigned int ALL_HOURS = 48; // (48)

void gardenLighting(int timeExample, bool move, bool& workingStatus)
{
    bool conditionOn = (timeExample > 16 || timeExample < 5) && move;

    if (conditionOn && !workingStatus)
    {
        cout << "Включено садовое освещение\n";
        workingStatus = true;
    }
    else if (!conditionOn && workingStatus)
    {
        cout << "Выключено садовое освещение\n";
        workingStatus = false;
    }
}

void plumbingHeatingOn(int tExample, bool& workingStatus)
{
    bool conditionOn = tExample < 0;
    bool conditionOff = tExample >= 5;

    if (conditionOn && !workingStatus)
    {
        cout << "Включен обогрев водопровода\n";
        workingStatus = true;
    }
    else if (conditionOff && workingStatus)
    {
        cout << "Выключен обогрев водопровода\n";
        workingStatus = false;
    }
}

void houseHeatingOn(int tExample, bool& workingStatus)
{
    bool conditionOn = tExample < 22;
    bool conditionOff = tExample > 25;

    if (conditionOn && !workingStatus)
    {
        cout << "Включено отопление\n";
        workingStatus = true;
    }
    else if (conditionOff && workingStatus)
    {
        cout << "Выключено отопление\n";
        workingStatus = false;
    }
}

void airConditionerOn(int tExample, bool& workingStatus)
{
    bool conditionOn = tExample > 30;
    bool conditionOff = tExample < 25;

    if (conditionOn && !workingStatus)
    {
        cout << "Включен кондиционер\n";
        workingStatus = true;
    }
    else if (conditionOff && workingStatus)
    {
        cout << "Выключен кондиционер\n";
        workingStatus = false;
    }
}

int colorTemperature(int timeExample) 
{
    int tExample;
    if (timeExample <= 16) tExample = 5000;
    else if (timeExample == 17) tExample = 4425;
    else if (timeExample == 18) tExample = 3850;
    else if (timeExample == 19) tExample = 3275;
    else if (timeExample >= 20) tExample = 2700;

    return tExample;
}

void display(int outTExample, int homeTExample, int timeExample, bool move, bool houseLightsOn, bool& plumbingStatus, bool& gardenStatus, bool& houseStatus, bool& airConditionerStatus)
{
    gardenLighting(timeExample, move, gardenStatus);
    plumbingHeatingOn(outTExample, plumbingStatus);
    houseHeatingOn(homeTExample, houseStatus);
    airConditionerOn(homeTExample, airConditionerStatus);
    if (houseLightsOn) cout << "Теплота света в доме: " << colorTemperature(timeExample) << "\n";
}

void inputAll(string S, int& outTExample, int& homeTExample, int& timeExample, bool& move, bool& houseLightsOn)
{
    cout << "Введите температуру снаружи, внутри, есть ли движение снаружи и включен ли в доме свет: ";
    string T, temp[AMOUNT]; int i = 0;

    getline(cin, S);
    stringstream X(S); 

    while (getline(X, T, ' '))
    {
        temp[i] = T;
        i++;
    }

    outTExample = stoi(temp[0]);
    homeTExample = stoi(temp[1]);
    move = temp[2] != "нет";
    houseLightsOn = temp[3] != "нет";
}

int main()
{
    int tOut, tHome;
    // true - включен, false - выключен
    bool move, houseLight, plumbingStatus = false, gardenStatus = false, houseStatus = false, airConditionerStatus = false;
    string S;

    for (int hours = 0; hours < 24; hours++)
    {
        cout << "Время (в часах): " << hours << "\n";
        inputAll(S, tOut, tHome, hours, move, houseLight);
        display(tOut, tHome, hours, move, houseLight, plumbingStatus, gardenStatus, houseStatus, airConditionerStatus);
        S.clear();
    }
    for (int hours = 0; hours < 24; hours++)
    {
        cout << "Время: " << hours << " часов\n";
        inputAll(S, tOut, tHome, hours, move, houseLight);
        display(tOut, tHome, hours, move, houseLight, plumbingStatus, gardenStatus, houseStatus, airConditionerStatus);
        S.clear();
    }
}