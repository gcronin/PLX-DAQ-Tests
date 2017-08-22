

void setup() {

  // open serial connection
    Serial.begin(9600);

    //Serial.println("CLEARDATA"); // clears sheet starting at row 2
    Serial.println("CLEARSHEET"); // clears sheet starting at row 1
    
  // define 5 columns named "Date", "Time", "Timer", "Counter" and "millis"
    Serial.println("LABEL,Date,Time,Timer,A2,millis");

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println( (String) "DATA,DATE,TIME,TIMER," + analogRead(A2) + "," + millis() + ",AUTOSCROLL_20" );
  delay(500);
}
