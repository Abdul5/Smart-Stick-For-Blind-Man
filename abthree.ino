int buzzer = 13;
int trigPin = 7;
int echoPin = 6;
int trigPin2 = 10;
int echoPin2 = 9;
int trigPin3 = 11;
int echoPin3 = 12;

void setup(){
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(trigPin2, OUTPUT);
  pinMode(echoPin2, INPUT);
  pinMode(trigPin3, OUTPUT);
  pinMode(echoPin3, INPUT);
  pinMode(buzzer, OUTPUT);
}

void loop()
{
  int duration, distance;
  digitalWrite (trigPin, HIGH);
  delayMicroseconds (10);
  digitalWrite (trigPin, LOW);
  duration = pulseIn (echoPin, HIGH);
  distance = (duration/2) / 29.1;

      Serial.print(distance);   
      Serial.print("cm1");
      Serial.println();

  if (distance <=30)
  {
    // Change the number for long or short distances 
    digitalWrite (buzzer, HIGH);
  } else
  {
    digitalWrite (buzzer, LOW);
  }

    int duration2, distance2;
    digitalWrite (trigPin2, HIGH);
    delayMicroseconds (10);
    digitalWrite (trigPin2, LOW);
    duration = pulseIn (echoPin2, HIGH);
    distance2 = (duration/2) / 29.1;
    
      Serial.print(distance2);   
      Serial.print("cm2");
      Serial.println();
    
    if (distance2 <=30)
    {
      // Change the number for long or short distances
      digitalWrite (buzzer, HIGH);
    }
 else
 {
      digitalWrite (buzzer, LOW);
    }

    int duration3, distance3;
    digitalWrite (trigPin3, HIGH);
    delayMicroseconds (10);
    digitalWrite (trigPin3, LOW);
    duration = pulseIn (echoPin3, HIGH);
    distance3 = (duration/2) / 29.1;
    
      Serial.print(distance3);   
      Serial.print("cm3");
      Serial.println();
    
    if (distance3 <=30)
    {
      // Change the number for long or short distances
      digitalWrite (buzzer, HIGH);
    }
 else
 {
      digitalWrite (buzzer, LOW);
    }

  }
// Code ends here
