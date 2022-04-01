const pin_t MY_LED = D4;

// The following line is optional, but recommended in most firmware. It 
// allows your code to run before the cloud is connected. In this case, 
// it will begin blinking almost immediately instead of waiting until 
// breathing cyan,
SYSTEM_THREAD(ENABLED);

// The setup() method is called once when the device boots.
void setup() {
	// In order to set a pin, you must tell Device OS that the pin is 
	// an OUTPUT pin. This is often done from setup() since you only need 
	// to do it once.
	pinMode(MY_LED, OUTPUT);
	Particle.subscribe("Deakin_RIOT_SIT210_Photon_Buddy", wave, ALL_DEVICES);
	Particle.subscribe("Deakin_RIOT_SIT210_Photon_Buddy", pat, ALL_DEVICES);
}

void wave(const char *event, const char *data)
{
    digitalWrite(MY_LED, HIGH);
    delay(1000);
    digitalWrite(MY_LED, LOW);
    delay(1000);
    digitalWrite(MY_LED, HIGH);
    delay(1000);
    digitalWrite(MY_LED, LOW);
    delay(1000);
    digitalWrite(MY_LED, HIGH);
    delay(1000);
    digitalWrite(MY_LED, LOW);
    delay(1000);
}

void pat(const char *event, const char *data)
{
    digitalWrite(MY_LED, HIGH);
    delay(250);
    digitalWrite(MY_LED, LOW);
    delay(250);
    digitalWrite(MY_LED, HIGH);
    delay(250);
    digitalWrite(MY_LED, LOW);
    delay(250);
    digitalWrite(MY_LED, HIGH);
    delay(250);
    digitalWrite(MY_LED, LOW);
    delay(250);
    digitalWrite(MY_LED, HIGH);
    delay(250);
    digitalWrite(MY_LED, LOW);
    delay(250);
    digitalWrite(MY_LED, HIGH);
    delay(250);
    digitalWrite(MY_LED, LOW);
    delay(250);
}

// The loop() method is called frequently.
void loop() {

}
