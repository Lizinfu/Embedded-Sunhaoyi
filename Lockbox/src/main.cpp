/*
 * @Author: Lizinfu liezileiyin@gmail.com
 * @Date: 2024-05-09 11:44:22
 * @LastEditors: Lizinfu liezileiyin@gmail.com
 * @LastEditTime: 2024-05-11 23:04:42
 * @FilePath: \Current Lamp\src\main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <Arduino.h>

char correct[] = "AABBCCAA";
int position = 0;
char input[2];

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() >= 2) {
    input[0] = Serial.read();
    input[1] = Serial.read();
    if (input[0] == correct[position] && input[1] == correct[position + 1]) {
      if (position == 6) {
        Serial.println("答案正确");
        position = 0;
      } else {
        position += 2;
      }
    } else {
      Serial.println("答案错误");
      position = 0;
    }
  }
}