#define  redPin 6
#define  greenPin 5
#define  bluePin 3
#define DETECT A2
int sensorValue = 0;


void setup() {


Serial.begin(9600);
pinMode(redPin, OUTPUT);
pinMode(greenPin, OUTPUT);
pinMode(bluePin, OUTPUT);
pinMode(DETECT, INPUT);

}

void loop() {
sensorValue = analogRead(DETECT);
Serial.println(sensorValue);


//if (sensorValue>50){
// analogWrite(redPin,0);
 //analogWrite(greenPin,1023);
// analogWrite(bluePin,0);
 //Serial.println("Green");
 //delay(200);


//if (sensorValue>50){
 //analogWrite(redPin,255);
 //analogWrite(greenPin,255);
 //analogWrite(bluePin,0);
 //Serial.println("Yellow");
 //delay(200);


//if (sensorValue>50){
 //analogWrite(redPin,128);
 //analogWrite(greenPin,0);
 //analogWrite(bluePin,128);
 //Serial.println("Purple");
 //delay(200);


//if(sensorValue>50){
 //analogWrite(redPin,255);
 //analogWrite(greenPin,165);
 //analogWrite(bluePin,0);
 //Serial.println("Orange");
 //delay(200);



if (sensorValue>50) {
 analogWrite(redPin,1023);
 analogWrite(bluePin, 0);
 analogWrite(greenPin, 0);
 Serial.println("Red");
 delay(200);
}

else if (sensorValue<50) {
 analogWrite(redPin, 0);
 analogWrite(greenPin,0);
 analogWrite(bluePin, 1023);
 Serial.println("Blue");
 delay(200);
}
}
