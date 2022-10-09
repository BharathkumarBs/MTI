
//Constants
const int ledPin = 5;   //pin 3 has PWM funtion
const int flexPin = A0; //pin A0 to read analog input
const int motorPin = 4; //pin 4 has output pin
const int realyPin = 3; //pin 3 has output pin 

//Variables:
int flexValue; //save analog flexvalue


void setup(){
  
  pinMode(ledPin, OUTPUT); //Set pin 5 as 'output'
  pinMode(motorPin. OUTPUT); //Set pin 4 as 'output'
  pinMode(relayPin. OUTPUT); //Set pin 4 as 'output'
  Serial.begin(9600); //Begin serial communication

}

void loop(){
  
  flexValue = analogRead(flexPin);         //Read and save analog value 
  value = map(value, 700, 900, 0, 255);//Map value 0-1023 to 0-255 (PWM)
  If(flexValue > 0 )
    {
      digitalWrite(motorPin, High);
      digitalWrite(relayPin, High);
      analogWrite(ledPin, value);  
      delay(1000);
      digitalWrite(motorPin, Low);
      digitalWrite(relayPin, Low);
    }
    
  Serial.println(value);               //Print value
  
}
