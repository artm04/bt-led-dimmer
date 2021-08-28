const led = 11;
int brightness;
String userInput;

void onclick_on() // LED fade-in for "on" button
{
    for(int up=0; up<255; up++){
        analogWrite(led, up);
        delay(30);
    }
    userInput = "255"; // fix the value to avoid looping
}
void onclick_off() // LED fade-out for "off" button
{
    for(int down=255; down>=0; down--){
        analogWrite(led, down);
        delay(30);
    }
    userInput = "0";
}

void setup() {
    pinMode(led, OUTPUT);
    Serial.begin(9600);
    digitalWrite(led, LOW);
    delay(10);
    Serial.println("Connected.");
}

void loop() {

    if(Serial.available())
    {
        userInput = Serial.readStringUntil('\n');
        Serial.println("In: " + userInput);
        brightness = userInput.toInt();
        Serial.print("Out: ");
        Serial.println(brightness);

        if(userInput=="on") onclick_on();
        else if(userInput=="off") onclick_off();

        else{
            analogWrite(led, brightness);
        }

    }
}
