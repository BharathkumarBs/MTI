const int ledPin = 5;   //pin 3 has PWM funtion
const int flexPin = A0; //pin A0 to read analog input
const int motorPin = 4; //pin 4 has output pin
/* const int realyPin = 3; //pin 3 has output pin */

//Variables:
int flexValue; //save analog flexvalue


void setup(){
  
  pinMode(ledPin, OUTPUT); //Set pin 5 as 'output'
  pinMode(motorPin, OUTPUT); //Set pin 4 as 'output'
  /*pinMode(relayPin, OUTPUT); //Set pin 4 as 'output'*/
  Serial.begin(9600); //Begin serial communication

}

void loop(){
  
  flexValue = analogRead(flexPin);         //Read and save analog value 
  flexValue = map(flexValue, 700, 900, 0, 255);//Map value 0-1023 to 0-255 (PWM)
  if(flexValue > 255 )
    {
      digitalWrite(motorPin, HIGH);
      /*digitalWrite(relayPin, High);*/
      analogWrite(ledPin, flexValue);  
      delay(1000);
      digitalWrite(motorPin, LOW);
      /*digitalWrite(relayPin, Low);*/
    }
    
  Serial.println(flexValue);               //Print value
  
}
