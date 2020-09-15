int x_axis = A3;
int y_axis = A2;
int z_axis = A1;
int x , y , z;

void setup() {

  Serial.begin(9600);





}

void loop() {



  x = analogRead(x_axis);
  y = analogRead(y_axis);
  z = analogRead(z_axis);
  Serial.print(x);
  Serial.print("\t");
  Serial.print(y);              // print the raw value in the Y axis
  Serial.print("\t");           // prints a tab between the numbers
  Serial.print(z);              // print the raw value in the Z axis
  Serial.println();
  delay(100); // this always take the argument in the milliseconds
  
  





}
