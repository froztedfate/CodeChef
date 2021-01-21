#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int testCase;
	cin >> testCase;
	for(int i=0;i<testCase;i++)
        {
            char userId;
            cin >> userId ;
            char finalId = tolower(userId);
            switch(finalId)
            {
                case 'b':
                    cout<<"BattleShip\n ";
                    break;
                case 'c':
                    cout<<"Cruiser\n ";
                    break;
                case 'd':
                    cout<<"Destroyer\n ";
                    break;
                case 'f':
                    cout<<"Frigate\n ";
                    break;
            }
        }
    return 0;
}
