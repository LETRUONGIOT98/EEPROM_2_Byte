#include <EEPROM.h>
int xung = 0;
void setup() {
  // initialize serial and wait for port to open:
  Serial.begin(9600);

  //////hàm lưu xung/////
  doc();  //Hàm đọc xung đã lưu đặt vào hàm setup để khi khởi động lại hàm chỉ đọc 1 lần khi đã khởi động lại
// read a byte from the current address of the EEPROM
  
}
void loop() {
  
}
/////////////Hai Hàm Này Không Thay đổi/////////
void luu(int bien){
  EEPROM.write(0, xung/256);
  delay(10);
  EEPROM.write(1, xung%256);
  delay(10);
  Serial.print("DA LUU SO XUNG HIEN TAI : ");
}
void doc(){
  xung = int(EEPROM.read(0))*256;
  delay(10);
  xung |= int(EEPROM.read(1));
    Serial.print("SO XUNG DA LUU LA: ");
    Serial.println(xung);
}
