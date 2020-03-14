#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
using namespace std;

int createzombie() {
    if (rand() % 67 < 10)
        return 11;

    else
        return rand() % 10 + 1;
}

int main() {
    srand(time(NULL));
    char enter;

    // game stats
    int playeralive = true;
    int playerskill = 9;
    int playerscore = 1;
    string playername = "";
    int zombiecount = 0;
    int zombieskilled = 0;

    // title
    cout << "Welcome to Zombie War." << endl << "Press [ENTER] to start.";
    cin.get();

    // player name
    cout << "Please enter your name: ";
    cin >> playername;

    // ask how many zombies
    cout << "How many zombies do you wish to fight? ";
    cin >> zombiecount;

    cout << "Get ready to fight for your life, " << playername << "!" << endl;

    // main game loop
    while (playeralive && zombieskilled < zombiecount) {
        // create a random zombie
        int zombieskill = createzombie();

        // battle sequence
        if (zombieskill > 10) {
            cout << endl << "Here comes a huge zombie!" << endl;
        }
        else {
            cout << endl << "Here comes zombie " << zombieskilled + 1 << endl;
        }

        cout << "Fighting..." << endl;
        sleep(2);

        // zombie killed the player
        if (playerskill < zombieskill) {
            playeralive = false;
            cout << "You have died." << endl;
        }

        // player killed the zombie
        else {
            if (playerskill - zombieskill > 7) {
                cout << "You wasted the zombie!" << endl;
                playerscore = playerscore * 2;
            }

            else if (playerskill - zombieskill > 5) {
                cout << "You decapitated the zombie!" << endl;
                playerscore = playerscore * 2;
            }

            else if (playerskill - zombieskill > 0) {
                cout << "You killed the zombie!" << endl;
                playerscore = playerscore * 2;
            }

            else {
                cout << "You killed the zombie, but suffered injuries." << endl;
            }

            zombieskilled++;
        }

        cout << endl;
        sleep(1);
    }

    // end game
    if (zombieskilled == zombiecount) {
        // victory
        cout << "You have survived the onslaught!" << endl;
    }
    else {
        // lost
        cout << "You did not survive the zombie war." << endl;
    }

    cout << "Zombies killed: " << zombieskilled << endl;
    cout << "Final score: " << playerscore << endl << endl;
}
