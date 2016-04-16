#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
byte arrowUp[8] = { // Arrow up
  0b00100,
  0b01110,
  0b10101,
  0b00100,
  0b00100,
  0b00100,
  0b00100,
  0b00000
};

byte arrowDown[8] = { // Arrow down
  0b00100,
  0b00100,
  0b00100,
  0b00100,
  0b10101,
  0b01110,
  0b00100,
  0b00000
};

void setup() {
  lcd.begin(16, 2);
  lcd.createChar(0, arrowUp); //Maakt een character met identifier 0 en de volgende 1
  lcd.createChar(1, arrowDown);
  lcd.clear();
  pinMode(13, INPUT);
  pinMode(10, INPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  menu();
}

void loop() {
  
}

void menu() {
  lcd.begin(16, 2);
  lcd.setCursor(0,0);
  lcd.write((uint8_t)0);
  lcd.print("Omhoog");
  lcd.setCursor(0,1);
  lcd.write((uint8_t)1);
  lcd.print("Omlaag");
}

