/*
 * @Author: Lizinfu liezileiyin@gmail.com
 * @Date: 2024-05-12 11:02:18
 * @LastEditors: Lizinfu liezileiyin@gmail.com
 * @LastEditTime: 2024-05-12 11:02:33
 * @FilePath: \CurrentLamp\src\main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <Arduino.h>

int i;

void setup() {
  for( i = 2; i < 8; i++);
  pinMode(i,OUTPUT);
}

void loop() {
  for(int i = 2; i < 8; i++ )
  {
    digitalWrite(i , HIGH);
    delay(500);
    digitalWrite(i , LOW);
  }
  for(int i = 7;i >= 2;i--)
  {
    digitalWrite(i , HIGH);
    delay(500);
    digitalWrite(i , LOW);
    }
}