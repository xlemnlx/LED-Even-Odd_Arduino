//setting the pins all at once.
int pinArray[] = {2, 3, 4, 5, 6, 7, 8, 9};
/*making count as variable so that we will just call
it later on.*/
int count = 0;
//this one too --- making it as variable.
int timer = 1000;

//setup - used to initialize
void setup()
{
  for (count=0;count<8;count++) 
  {
    //declaring those pin a output
    pinMode(pinArray[count], OUTPUT);
  }
}

/*just as the name implies, the action that is in loop
function will repeat eternally.*/
void loop() 
{
  /*for is use for creating repetitive operations
  eg: for(initialization ; condition ; increment)*/
  for (count=0;count<8;count++) 
  {
   if ((count%2)==0) 
   {
   digitalWrite(pinArray[count], HIGH);
   delay(timer);
   digitalWrite(pinArray[count], LOW);
   delay(timer);
    }
  }

  
  for (count=0;count<8;count++)
  {
    if ((count%2)==1)
    {
    digitalWrite(pinArray[count], HIGH);
    delay(timer);
    digitalWrite(pinArray[count], LOW);
    delay(timer);
    }
  }
}
