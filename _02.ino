const byte startPin = 1;
const byte endPin = 8;
void setup() 
{
  // put your setup code here, to run once:
  for (byte i = startPin; i<= endPin; i++) 
  {
    pinMode(i, OUTPUT);
  }
}

void loop() 
{
  byte i;
  byte lightPin = startPin;
  
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

