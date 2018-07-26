unsigned long prevmillis;
unsigned long duration;
unsigned long refresh;
double speed_car;
int rpm;
int frames = 0;
boolean currentstate1;
boolean currentstate2;
boolean state1=false;
boolean state2=false;
boolean start = false;
boolean prevstate;
unsigned long lasttime = 0;
unsigned long timedur = 0;
void setup()
{
pinMode(3,INPUT);
//pinMode(4,INPUT);
pinMode(6,INPUT);
//pinMode(6,OUTPUT);
prevstate=LOW;
Serial.begin(9600);
//pinMode(3,INPUT);
//digitalWrite(6,HIGH);
}
void loop()
{
//int sensorValue = analogRead(A0);
currentstate1=digitalRead(3);
//Serial.println(prevstate);
if(start == false)
{
if (currentstate1 == HIGH)
{
 start = true;
 lasttime = millis();
 state1 = true;
 state2 = false;
}
else if(digitalRead(6) == HIGH)
{
 start = true;
 lasttime = millis();
 state1 = false;
 state2 = true;
}
}
else
{
 if(digitalRead(6) == HIGH && state1 == true)
 {
 Serial.println(millis()-lasttime);
 timedur = millis()-lasttime;
 start = false;
 state1 = false;
 state2 = false;

 Result();
 lasttime =0;
 delay(1000);


 }
 else if(digitalRead(3) == HIGH && state2 == true)
 {
 Serial.println(millis()-lasttime);
 timedur = millis()-lasttime;
 start = false;
 state1 = false;
 state2 = false;

 Result();
 lasttime =0;
 delay(1000);
 }
}
/*
if(digitalRead(6) == HIGH)
{
 Serial.println("YES");
}
else
{
 Serial.println("NO");
}
*/
//prevstate=currentstate;
}
void Result()
{
 if(timedur > 1000)
 {
 Serial.println("SAFE");
 //Serial.println(timedur);
 }
 else
 {
 Serial.println("DANGER");
 // Serial.println(timedur);
 }
}
