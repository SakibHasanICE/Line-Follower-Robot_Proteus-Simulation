void setup() {
 pinMode(2,INPUT);
 pinMode(3,INPUT);
 pinMode(10,OUTPUT);
 pinMode(11,OUTPUT);
 pinMode(12,OUTPUT);
 pinMode(13,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int left = digitalRead(2);
  int right = digitalRead(3);
  
  //stop
  if(left == 1 and right ==1)
  {
    digitalWrite(13, 0);
    digitalWrite(12, 0);
    digitalWrite(11, 0);
    digitalWrite(10, 0);
  }
  //left
   if(left == 1 and right ==0)
  {
    digitalWrite(13, 1);
    digitalWrite(12, 0);
    digitalWrite(11, 0);
    digitalWrite(10, 1);
  }
  //right
   if(left == 0 and right ==1)
  {
    digitalWrite(13, 0);
    digitalWrite(12, 1);
    digitalWrite(11, 1);
    digitalWrite(10, 0);
  }
  //forword
    if(left == 0 and right ==0)
  {
    digitalWrite(13, 1);
    digitalWrite(12, 0);
    digitalWrite(11, 1);
    digitalWrite(10, 0);
  }
}
