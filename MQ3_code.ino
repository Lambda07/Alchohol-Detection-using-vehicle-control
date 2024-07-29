 //put this code for LED in the ide of arduino from this line  
   int LED = 9;  
      int ALCOHOL_sensor = 3;// MQ-6 SENSOR  
      int ALCOHOL_detected;  
      void setup()  
       {  
         Serial.begin(9600);  
         pinMode(LED, OUTPUT);  
         pinMode(ALCOHOL_sensor, INPUT);  
       }  
       void loop()  
       {  
         ALCOHOL_detected = digitalRead(ALCOHOL_sensor);  
          Serial.println(ALCOHOL_detected);  
         if (ALCOHOL_detected == 1)  
         {  
           Serial.println("ALCOHOL detected...");  
           digitalWrite(LED, HIGH);  
         }  
         else  
         {  
           Serial.println("No ALCOHOL detected ");  
           digitalWrite(LED, LOW);  
         }  
       }  


       //For buzzer put this code in Arduino IDE  
    int LED = 9;  
    int BUZZER = 10;   
    int ALCOHOL_sensor = 3;// MQ-3 SENSOR  
    int ALCOHOL_detected;  
    void setup()  
    {  
     Serial.begin(9600);  
     pinMode(LED, OUTPUT);  
     pinMode(BUZZER, OUTPUT);  
     pinMode(ALCOHOL_sensor, INPUT);  
    }  
    void loop()  
    {  
      ALCOHOL_detected = digitalRead(ALCOHOL_sensor);  
      Serial.println(ALCOHOL_detected);  
     if (ALCOHOL_detected == 1)  
     {  
      Serial.println("ALCOHOL detected...");  
      digitalWrite(LED, HIGH);  
      digitalWrite(BUZZER, HIGH);  
     }  
     else  
     {  
      Serial.println("No ALCOHOL detected.");  
      digitalWrite(LED, LOW);  
      digitalWrite(BUZZER, LOW);  
     }  
    }  