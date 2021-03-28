#include <iostream>
#include <string>
#include <time.h>
#include <chrono>
#include <thread>

using namespace std;

#include "GameController.h"

/** Constructor for GameController. */
GameController::GameController(Config config) {
  // set number of rows and columns
  rows = config.getRows();
  columns = config.getColumns();
  boats = config.getBoatsToPlace();
}

// Display the menu
void GameController::menu() {
  cout << "\nWelcome to Battleship Game!\n";

  // Show the menu and stop the program when user chooses to quit
  while (true) {
    // display the options and get user's input
    string userInput = "";
    cout << "\nMenu:\n";
    cout << "\t1 - One player v computer game\n";
    cout << "\tq - Quit\n";
    cout << "\nPlease select an option: ";
    getline(cin, userInput);
    if (userInput.length() == 1) {
      char choice = userInput[0];
      switch (choice) {
        case '1':
          startGame();
          break;
        case 'q':
          quit();
          break;
        default: cout << "Please enter a valid option.\n\n";
      }
    } else {
      cout << "Please enter a valid option.\n\n";
    }
  }
}

// Start a game
void GameController::startGame() {
  cout<< "\n\t Starting the game! " << "\n";
//  cout<< "\n Board: " << rows << " x " << columns<< "\n";
//  for (int i =0; i < boats.size(); i++ ){
//  cout<< " Boat : " << boats[i].name << ", " << boats[i].length << "\n";
//  }
}

// Quit the game
void GameController::quit() {
    cout << "\nYou chose to quit the game. Bye !\n";
    exit(EXIT_SUCCESS);

}