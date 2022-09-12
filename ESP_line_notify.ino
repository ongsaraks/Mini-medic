#include <TridentTD_LineNotify.h>

#define SSID        "Gggg"
#define PASSWORD    "12345678"
#define LINE_TOKEN  "q5RCcLvnxOh8CAOwb4SaTtK39LVXbAiuxFjPs8ErNfn"
const int trigPin = 18;
const int echoPin = 19;
long duration;
int distanceCm, distanceInch;
int bz = 5;
int count = 0;
void setup() {
  Serial.begin(9600);
  WiFi.begin(SSID, PASSWORD); {
  Serial.printf("WiFi connecting to %s\n",  SSID);
  while(WiFi.status() != WL_CONNECTED) { 
    Serial.print("."); 
    delay(400); 
    pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
pinMode(bz,OUTPUT);
    }
  Serial.printf("\nWiFi connected\nIP : ");
  Serial.println(WiFi.localIP());  

  // กำหนด Line Token
  LINE.setToken(LINE_TOKEN);
  
}

  }

  void loop () {
    digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);

duration = pulseIn(echoPin, HIGH);
distanceCm= duration*0.034/2;

Serial.println(distanceCm);
float A = (distanceCm);
  if ( A < 2.7 && A != 0) {
 tone(bz, 1500,1500); 
 delay(2000);
 count ++;
 }
 if ( count == 3) {
  LINE.notify("ได้เวลารับประทานยาแล้วค่ะ");
   count = 0;
  }
 
  
}
   
  
  
  

  
  
