

#include <string>
#include <vector>

using namespace std;

struct boat {
  string name;
  int length;
};

class Config {
  private:
    int rows_; //board rows
    int columns_; // board columns

    vector<boat> boatsToPlace_;

    // Reads the board's rows and columns and returns whether the action was successful or not
    bool readBoard(string configLine, int index);

    // Reads the boat's name and length and returns whether the action was successful or not
    bool readBoats(string configLine, int index);



  public:
    Config() {}

   // Reads the config file provided and returns whether the action was successful or not
    bool readConfigFile();

   // Getter for number of rows
    int getRows() {
      return rows_;
    }

    // Getter for number of columns
    int getColumns() {
      return columns_;
    }

    // Getter for list of boats to be placed on the board
    vector<boat> getBoatsToPlace() {
      return boatsToPlace_;
    }
};