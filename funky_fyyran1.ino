/*
Yasmeen Kullab
The purpose of this code is to convert the user entery, which is a decimal value, into a binary, 
Hedecimal, and octal-based value. 

*/

boolean Displayp; //boolean for true and false conditions
String strInput;  

void setup()
{
  //if condition is true
  Displayp = true;
  Serial.begin(9600); //serial communication 
}

void loop()
{
  if (Displayp)
  {
    Serial.println("\nPlease enter a decimal number to be converted:");
    Displayp = false;}
  
  if (Serial.available() > 0)
  { 
    strInput = Serial.readString();
    
    Serial.print("The decimal-based value you entered is: ");  
    Serial.println(strInput); // displaying the value entered by the user 
    
    Serial.print("The binary-based value you entered is: ");  
    Serial.println(strInput.toInt(), BIN); // converting the decimal value to binary 
    
    Serial.print("The octal-based value you entered is: ");  
    Serial.println(strInput.toInt(), OCT);// converting the decimal value to octal-value 
    
    Serial.print("The hexadecimal-based value you entered is: ");  
    Serial.println(strInput.toInt(), HEX); // converting the decimal value to hexadecimal 
   
    Displayp = true;
    
  }
}