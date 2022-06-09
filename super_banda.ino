int previousButtonState1 = HIGH;
int previousButtonState2 = HIGH;
int previousButtonState3 = HIGH;
int previousButtonState4 = HIGH;
int previousButtonState5 = HIGH;
int previousButtonState6 = HIGH;
int previousButtonState7 = HIGH;
int previousButtonState8 = HIGH;
int previousButtonState9 = HIGH;
int previousButtonState10 = HIGH;
int previousButtonState11 = HIGH;
int previousButtonState12 = HIGH;

void setup() {
  Serial.begin(115200);                       
  pinMode(2, INPUT_PULLUP);  
  pinMode(3, INPUT_PULLUP);  
  pinMode(4, INPUT_PULLUP); 
  pinMode(5, INPUT_PULLUP); 
  pinMode(6, INPUT_PULLUP); 
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);  
  pinMode(11, INPUT_PULLUP);
  pinMode(12, INPUT_PULLUP);
  pinMode(13, INPUT_PULLUP);
  
}
void loop() {
  int botao1 = digitalRead(2);
  int botao2 = digitalRead(3);
  int botao3 = digitalRead(4);
  int botao4 = digitalRead(5);
  int botao5 = digitalRead(6);
  int botao6 = digitalRead(7);  
  int botao7 = digitalRead(8);
  int botao8 = digitalRead(9);
  int botao9 = digitalRead(10);  
  int botao10 = digitalRead(11);
  int botao11 = digitalRead(12);
  int botao12 = digitalRead(13);

  //////////////////////////////
  if (botao1 == LOW ) {
      // and it's currently pressed:
    Serial.println(":[1,1,0]");
    delay(50);
  }

  if (botao1 == HIGH && previousButtonState1 == LOW) {
    Serial.println(":[1,0,0]");
    delay(50);
  }
  previousButtonState1 = botao1;

  //////////////////////////////
  if (botao2 == LOW ) {
      // and it's currently pressed:
    Serial.println(":[2,1,0]");
    delay(50);
  }

  if (botao2 == HIGH && previousButtonState2 == LOW) {
    Serial.println(":[2,0,0]");
    delay(50);
  }
  previousButtonState2 = botao2;

  //////////////////////////////
  if (botao3 == LOW ) {
      // and it's currently pressed:
    Serial.println(":[3,1,0]");
    delay(50);
  }

  if (botao3 == HIGH && previousButtonState3 == LOW) {
    Serial.println(":[3,0,0]");
    delay(50);
  }
  previousButtonState3 = botao3;


  //////////////////////////////
  if (botao4 == LOW ) {
      // and it's currently pressed:
    Serial.println(":[4,1,0]");
    delay(50);
  }

  if (botao4 == HIGH && previousButtonState4 == LOW) {
    Serial.println(":[4,0,0]");
    delay(50);
  }
  previousButtonState4 = botao4;
  //////////////////////////////
  if (botao6 == LOW ) {
      // and it's currently pressed:
    Serial.println(":[6,1,0]");
    delay(50);
  }

  if (botao6 == HIGH && previousButtonState6 == LOW) {
    Serial.println(":[6,0,0]");
    delay(50);
  }
  previousButtonState6 = botao6;


//////////////////////////////
  if (botao7 == LOW ) {
      // and it's currently pressed:
    Serial.println(":[7,1,0]");
    delay(50);
  }

  if (botao7 == HIGH && previousButtonState7 == LOW) {
    Serial.println(":[7,0,0]");
    delay(50);
  }
  previousButtonState7 = botao7;


  
//////////////////////////////
  if (botao8 == LOW ) {
      // and it's currently pressed:
    Serial.println(":[8,1,0]");
    delay(50);
  }

  if (botao8 == HIGH && previousButtonState8 == LOW) {
    Serial.println(":[8,0,0]");
    delay(50);
  }
  previousButtonState8 = botao8;

//////////////////////////////
  if (botao9 == LOW ) {
      // and it's currently pressed:
    Serial.println(":[9,1,0]");
    delay(50);
  }

  if (botao9 == HIGH && previousButtonState9 == LOW) {
    Serial.println(":[9,0,0]");
    delay(50);
  }
  previousButtonState9 = botao9;

//////////////////////////////
  if (botao10 == LOW ) {
      // and it's currently pressed:
    Serial.println(":[10,1,0]");
    delay(50);
  }

  if (botao10 == HIGH && previousButtonState10 == LOW) {
    Serial.println(":[10,0,0]");
    delay(50);
  }
  previousButtonState10 = botao10;

//////////////////////////////
  if (botao11 == LOW ) {
      // and it's currently pressed:
    Serial.println(":[11,1,0]");
    delay(50);
  }

  if (botao11 == HIGH && previousButtonState11 == LOW) {
    Serial.println(":[11,0,0]");
    delay(50);
  }
  previousButtonState11 = botao11;

  
//////////////////////////////
  if (botao12 == LOW ) {
      // and it's currently pressed:
    Serial.println(":[12,1,0]");
    delay(50);
  }

  if (botao12 == HIGH && previousButtonState12 == LOW) {
    Serial.println(":[12,0,0]");
    delay(50);
  }
  previousButtonState12 = botao12;





}
