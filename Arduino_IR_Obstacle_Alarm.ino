/*
   IR Sensor + Buzzer Object Detection
   If object is detected → buzzer ON
   If no object → buzzer OFF
*/

int irSensor = 2;   // IR sensor connected to pin 2
int buzzer   = 8;   // Buzzer connected to pin 8

void setup()
{
  // Start serial communication
  Serial.begin(9600);

  // Set pin modes
  pinMode(irSensor, INPUT);
  pinMode(buzzer, OUTPUT);
}

void loop()
{
  // Read IR sensor value
  int sensorStatus = digitalRead(irSensor);

  // Check if object is detected
  if (sensorStatus == LOW)
  {
    digitalWrite(buzzer, HIGH);      // Turn buzzer ON
    Serial.println("Object Detected");
  }
  else
  {
    digitalWrite(buzzer, LOW);       // Turn buzzer OFF
    Serial.println("No Object Detected");
  }

  delay(500);
}