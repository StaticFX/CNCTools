#include <LiquidCrystal_I2C.h> // Library for LCD
#include <Wire.h> //Library for i²c Connection


class lcd {
  public:
    int rows;
    int coloumns;
    LiquidCrystal_I2C lcd;


    void begin() {
      lcd = LiquidCrystal_I2C(0x27, coloumns, rows);
      lcd.begin();
      lcd.backlight();
    }

    void off() {
      lcd.noBacklight();
    }

    void on() {
      lcd.backlight();
    }

    void writeOnDisplay(int row) {

    }
};
