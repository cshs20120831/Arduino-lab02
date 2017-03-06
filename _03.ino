const byte startPin = 1;
const byte endPin = 8;
const byte sw=13;

void setup() 
{
 
  for (byte i = startPin; i<= endPin; i++) 
  {
    pinMode(i, OUTPUT);
  }
  pinMode(sw, INPUT);
}

void loop() 
{
  boolean val =digitalRead(13);
  byte i;
  byte lightPin = startPin;
  
  if(val)
  {
      for (i=startPin; i<= endPin; i++)
  	{
    	digitalWrite(i,LOW);
    
  		if (lightPin < endPin) 
  		{
          lightPin ++;
  		} 
  		else 
  		{
          lightPin = endPin;
  		}
  	digitalWrite(lightPin, HIGH);
  	delay (100);
  	} 
 	 lightPin = endPin;
  for (i=endPin; i>= startPin; i--)
  {
    digitalWrite(i,LOW);
  		if (lightPin > startPin) 
 		{
    		lightPin --;
  		} 
  		else 
  		{
    		lightPin = startPin;
  		}
  	digitalWrite(lightPin, HIGH);
  	delay (100);
  } 
 
 
 
     for (i=startPin; i<= endPin; i++)
  {
    digitalWrite(i,LOW);
    
  	if (lightPin < endPin) 
  	{
    	lightPin ++;
  	} 
  	else 
  	{
    	lightPin = endPin;
  	}
  	digitalWrite(lightPin, HIGH);
  	delay (100);
  } 
  lightPin = endPin;
  for (i=endPin; i>= startPin; i--)
  {
    digitalWrite(i,LOW);
  	if (lightPin > startPin) 
 	{
    	lightPin --;
  	} 
  	else 
  	{
    	lightPin = startPin;
  	}
  	digitalWrite(lightPin, HIGH);
  	delay (100);
  } 
}

  
  else{
      for(lightPin=startPin;lightPin<=endPin;lightPin++)
  {
  	    digitalWrite(lightPin,HIGH);	
  }
  delay(1000);
  for(lightPin=startPin;lightPin<=endPin;lightPin++)
  {
  	    digitalWrite(lightPin,LOW);	
  }
  delay(1000);
  for(lightPin=startPin;lightPin<=endPin;lightPin++)
  {
  	    digitalWrite(lightPin,HIGH);	
  }
  delay(1000);
  for(lightPin=startPin;lightPin<=endPin;lightPin++)
  {
  	    digitalWrite(lightPin,LOW);		
  }
  delay(1000);
  lightPin = startPin;
  

  for (i=startPin; i<= endPin; i++)
  {
    
	digitalWrite(lightPin, HIGH);
  	if (lightPin < endPin) 
  	{
    	lightPin ++;
  	} 
  	else 
  	{
    	lightPin = endPin;
  	}
  	 digitalWrite(i,LOW);
  	delay (100);
  } 
  
  
  
  for(lightPin=startPin;lightPin<=endPin;lightPin++)
  {
  	    digitalWrite(lightPin,HIGH);	
  }
  delay(1000);
  for(lightPin=startPin;lightPin<=endPin;lightPin++)
  {
  	    digitalWrite(lightPin,LOW);	
  }
  delay(1000);
  for(lightPin=startPin;lightPin<=endPin;lightPin++)
  {
  	    digitalWrite(lightPin,HIGH);	
  }
  delay(1000);
  for(lightPin=startPin;lightPin<=endPin;lightPin++)
  {
  	    digitalWrite(lightPin,LOW);		
  }
  delay(1000);
  
  
  lightPin = endPin;
  for (i=endPin; i>= startPin; i--)
  {
    digitalWrite(lightPin, HIGH);
  	if (lightPin > startPin) 
  	{
    	lightPin --;
  	} 
  	else 
  	{
    	lightPin = startPin;
  	}
  	digitalWrite(i,LOW);
  	delay (100);
  } 
  }
}

