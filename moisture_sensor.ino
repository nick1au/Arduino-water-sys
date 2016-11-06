/* sensor reading in room = 676
    LOWER NUMBER = MORE MOIST
    NICHOLAS LAU 000377939
    LAST EDITED: AUG 5, 2016

*/

const int moisture_sen = A0;
const int transistor = 9;

void setup()
{
    pinMode(moisture_sen,INPUT);
    pinMode(transistor,OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    int val = analogRead(moisture_sen);
    Serial.print("sensor = ");
    Serial.println(val);
    delay(1000);
    
    if (val < 675)
    {
        analogWrite(transistor, 200);
    }
    else
    {
        analogWrite(transistor,80);
    }
}
