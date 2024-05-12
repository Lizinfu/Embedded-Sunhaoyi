/*
 * @Author: Lizinfu liezileiyin@gmail.com
 * @Date: 2024-05-12 10:58:12
 * @LastEditors: Lizinfu liezileiyin@gmail.com
 * @LastEditTime: 2024-05-12 10:58:56
 * @FilePath: \Serial\src\main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <Arduino.h>

int i;
int val;

void setup() {
  Serial.begin(9600);
  for( i = 2; i < 7; i++){
    pinMode(i,OUTPUT);
  }
}

void loop() {
  val=Serial.read();
  if(49<=val&&val<=54){
    digitalWrite(val-47,HIGH);
    Serial.print("LED");
    Serial.print(val-48);
    Serial.print("亮");
    delay(100);
    digitalWrite(val-47,LOW);
  }
}