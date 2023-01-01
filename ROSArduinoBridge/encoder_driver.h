/* *************************************************************
   Encoder driver function definitions - by James Nugen
   ************************************************************ */
   
   
#ifdef ARDUINO_ENC_COUNTER
  //below can be changed, but should be PORTD pins; 
  //otherwise additional changes in the code are required
  #define LEFT_ENC_PIN_A PD2  //pin 2
  #define LEFT_ENC_PIN_B PD3  //pin 3
  
  //below can be changed, but should be PORTC pins
  #define RIGHT_ENC_PIN_A PC4  //pin A4
  #define RIGHT_ENC_PIN_B PC5   //pin A5
#endif

#ifdef ESP32_ENCODER_DRIVER
  // Left motor
  #define MOTOR_2_ENCODER_A_PIN   (26)
  #define MOTOR_2_ENCODER_B_PIN   (13)

  // Right motor
  #define MOTOR_1_ENCODER_A_PIN   (15)
  #define MOTOR_1_ENCODER_B_PIN   (2)
#endif
   
long readEncoder(int i);
void resetEncoder(int i);
void resetEncoders();

