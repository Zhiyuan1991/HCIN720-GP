Servo myservo0;  // create servo object to control a servo
Servo myservo1;
Servo myservo2;

int pos0 = 0;    // variable to store the servo position
int pos1 = 0; 
int pos2 = 0; 

void setup()
{
  myservo0.attach(D0);  // attaches the servo on the A0 pin to the servo object
  myservo1.attach(D1);
  myservo2.attach(D2);
  Spark.function("setpos0", setPosition0);
    Spark.function("setpos1", setPosition1);
    Spark.function("setpos2", setPosition2);
  Spark.variable("getpos0", &pos0, INT);
  Spark.variable("getpos1", &pos1, INT);
  Spark.variable("getpos2", &pos2, INT);
}

void loop()
{
}

int setPosition0(String posValue) //linear servo
{
    int min=60;
    pos0 = posValue.toInt();
    if (pos0<min)
        pos0=min;
    myservo0.write(pos0);
    return 0;
}
int setPosition1(String posValue) //big circle servo
{
    int min=10;
    int max=170;
    pos1 = posValue.toInt();
    if (pos1<min)
        pos1=min;
    if (pos1>max)
        pos1=max;
    myservo1.write(pos1);
    return 0;
}
int setPosition2(String posValue) //small circle servo
{
    pos2 = posValue.toInt();
    myservo2.write(pos2);
    return 0;
}