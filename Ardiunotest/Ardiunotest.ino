#include "Ardiuno.h"
#include <SoftwareSerial.h> \\Bluetooth giris cikis tanımı
SoftwareSerial mySerial(4, 6); //HC-06'nın Rx , Tx bacakları tanımlandı
int kirmizi = 8;
int sari = 9;
int yesil = 10;
int onay ;
void setup() {
  // put your setup code here, to run once:
  setupPinsMode();
  Serial.begin(9600);
  Serial.print("Tamamlandı");
  mySerial.begin(9600);,

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(kirmizi, HIGH);   // Kirmizi ledi yak
  delay(20000);                  // 20 saniye kirmizi yaniyor
}
void setupPinsMode(){
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}
