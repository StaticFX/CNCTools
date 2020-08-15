#include "lcd.h"

class menu {

  public:
    int rows;
    int coloumns; 
    
    void construct() {
      String *pages[][10];
      for (int i = 0; i < 101; i++) {
        for (int j = 0; i < 101; j++) {
          pages[i, j] = "";
        }
      }
    }
};
