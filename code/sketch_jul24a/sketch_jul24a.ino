// #define Serial SerialLP1

void setup() {
  // put your setup code here, to run once:
  SerialLP1.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  SerialLP1.printf("Hello World !\n");
  HAL_Delay(1000);
}