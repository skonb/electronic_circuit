// Example 01 : Blinking LED

const int LED = 13;
const int UNIT = 100;

void setup() {
  pinMode(LED,OUTPUT);     // デジタルピンを出力に設定
}

void LED_BLINK(int millsec){
  // put your main code here, to run repeatedly:
  digitalWrite(LED,HIGH);  //LEDを点ける
  delay(millsec);            //1秒待つ
  digitalWrite(LED,LOW);  //LEDを消す
  delay(UNIT);            //1秒待つ
}

void loop() {
   //S
   LED_BLINK(1*UNIT);
   LED_BLINK(1*UNIT);
   LED_BLINK(1*UNIT);
   //O
   LED_BLINK(3*UNIT);
   LED_BLINK(3*UNIT);
   LED_BLINK(3*UNIT);
   //S
   LED_BLINK(1*UNIT);
   LED_BLINK(1*UNIT);
   LED_BLINK(1*UNIT);
   //待つ
   delay(10000);
}