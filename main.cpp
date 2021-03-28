#include <iostream>
using namespace std;

#include "Config.h"

int main() {
  // Instantiate a Config object
  Config config;
  //  Read the file and store boolean result
  bool configComplete = config.readConfigFile();
  //   If configuration is not completed successfully inform user and stop program
  if (!configComplete) {
    cout << "There seems to be a problem with the config file.\n";
    return 0;
  }

  return 0;
}
