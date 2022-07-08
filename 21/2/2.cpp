#include <vector>
#include <iostream>

#define BEDROOM 0
#define KITCHEN 1
#define BATHROOM 2
#define CHILDRENS 3
#define LIVING_ROOM 4

#define HOME 5
#define GARAGE 6
#define BARN 7
#define BATH 8

using namespace std;

struct Room
{
private:
    int type;
    float square;

public:
    void initRoom()
    {
        bool checkPassed = false;
        cout << "enter room type: ";
        cin >> type;
        while (!checkPassed)
        {
            if (type == BEDROOM)
                cout << "enter the square of the bedroom: ";
            else if (type == KITCHEN)
                cout << "enter the square of the kitchen: ";
            else if (type == BATHROOM)
                cout << "enter the square of the bathroom: ";
            else if (type == CHILDRENS)
                cout << "enter the square of the childrens: ";
            else if (type == LIVING_ROOM)
                cout << "enter the square of the living room: ";
            else
            {
                cout << "incorrect\n";
                continue;
            }
            cin >> square;
            checkPassed = true;
        }
    }
};

struct Building
{
private:
    int type = 1, amountFloors = 1;
    float square;
    bool furnace = false;

    vector<float> ceilingHeight;
    vector<int> amountRooms;
    vector<Room> rooms;

public:
    void initBuilding()
    {
        bool checkPassed = false;

        while (!checkPassed)
        {
            cout << "enter building type: ";
            cin >> type;
            
            if (type == HOME)
                cout << "enter the square of the home: ";
            else if (type == GARAGE)
                cout << "enter the square of the garage: ";
            else if (type == BARN)
                cout << "enter the square of the barn: ";
            else if (type == BATH)
                cout << "enter the square of the bath: ";
            else
            {
                cout << "incorrect\n";
                continue;
            }
            cin >> square;
            checkPassed = true;
        }

        if (type == HOME)
        {
            cout << "enter amount floors(1-3): ";
            cin >> amountFloors;
        }

        for (int i = 0; i < amountFloors && type == HOME; i++)
        {
            int newCeilingHeight;
            cout << "enter ceiling height( " << i + 1 << "): ";
            cin >> newCeilingHeight;
            ceilingHeight.push_back(newCeilingHeight);

            int newAmountRooms;
            cout << "enter amount rooms(2-4) for " << i + 1 << " floor: ";
            cin >> newAmountRooms;
            amountRooms.push_back(newAmountRooms);
        }
        for (int i = 0; i < amountFloors && type == HOME; i++)
        {
            for (int j = 0; j < amountRooms[i]; j++)
            {
                Room newRoom;
                newRoom.initRoom();
                rooms.push_back(newRoom);
            }
        } 

        if (type == HOME || type == BATH)
        {
            cout << "furnace? (1 - yes | 0 - no): ";
            cin >> furnace;
        }
    }

    float getSquare()
    {
        return square;
    }
};

struct Plot
{
private:
    int number, amountBuildings = 1, id;
    float square;
    vector<Building> buildings;

public:
    void initPlot()
    {
        cout << "enter id: ";
        cin >> id;
        cout << "enter square: ";
        cin >> square;

        cout << "enter amount buildings: ";
        cin >> amountBuildings;
        for (int i = 0; i < amountBuildings; i++)
        {
            Building newBuilding;
            newBuilding.initBuilding();
            buildings.push_back(newBuilding);
        }
    }

    float ratio()
    {
        float areaOfAllHouses = 0;
        for (int i = 0; i < buildings.size(); i++)
            areaOfAllHouses += buildings[i].getSquare();
        
        return areaOfAllHouses * 100 / square;
    }
};

struct Village
{
private:
    vector<Plot> plots;
    int number;

public:
    void initVillage()
    {
        cout << "enter the number of plots in the village: ";
        cin >> number;
        for (int i = 0; i < number; i++)
        {
            Plot newPlot;
            newPlot.initPlot();
            cout << "ratio is " << newPlot.ratio() << " percent\n";
            plots.push_back(newPlot);
        }
    }
};

int main()
{
    Village village;
    village.initVillage();

    exit(EXIT_SUCCESS);
}