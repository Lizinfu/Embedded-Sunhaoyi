/*
 * @Author: Lizinfu liezileiyin@gmail.com
 * @Date: 2024-05-12 11:03:19
 * @LastEditors: Lizinfu liezileiyin@gmail.com
 * @LastEditTime: 2024-05-12 11:04:34
 * @FilePath: \LCD\src\main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include<Arduino.h>
#include<LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int ledpin=6;
int i=0;

void setup() {
  pinMode(ledpin,OUTPUT);
  lcd.begin(16,2);
}

void loop() {
  i=0;
  lcd.clear();
  lcd.print("Hello Xlab");
  lcd.setCursor(0,1);
  lcd.print("Counter:");
  while(i<10){
    lcd.setCursor(8,1);
    lcd.print(i);
    digitalWrite(ledpin, HIGH);
    delay(200);
    digitalWrite(ledpin, LOW);
    i=i+1;
    delay(1000);

  }
}