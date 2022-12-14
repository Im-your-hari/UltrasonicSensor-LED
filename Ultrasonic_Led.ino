//define Pins
int led = 13;
int trigPin = 9;
int echoPin = 8;
int led1 = 12;

// defines variables
long duration;
int distance;

void setup() 
{
  //Sets the Led as an Output
pinMode(led, OUTPUT);
// Sets the trigPin as an Output
pinMode(trigPin, OUTPUT);
// Sets the echoPin as an Input 
pinMode(echoPin, INPUT);
// Starts the serial communication 
Serial.begin(9600); 
}
void loop() 
{
// Clears the trigPin
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);
// Calculating the distance
distance= duration*0.034/2;
// Prints the distance on the Serial Monitor
Serial.print("Distance: ");
Serial.println(distance);
if ( distance <= 21 ) // Change Distance according to Ultrasonic Sensor Placement
 {
  Serial.println("Bucket open\n");
  digitalWrite(led1,HIGH); //Ivide LED Indicatornte positive pin kodukkuka...negetive GNDyil kodukkuka..
  digitalWrite (led , HIGH ); //Motor oru node 13lum oru node GND yilum kodukkanam
  
  delay (15000); //Ivide 15000 means 15 seconds aanu..
 } 
else 
{
digitalWrite (led, LOW );
 }

}
