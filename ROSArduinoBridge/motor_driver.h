/***************************************************************
   Motor driver function definitions - by James Nugen
   *************************************************************/

#ifdef L298_MOTOR_DRIVER
  #define RIGHT_MOTOR_BACKWARD 5
  #define LEFT_MOTOR_BACKWARD  6
  #define RIGHT_MOTOR_FORWARD  9
  #define LEFT_MOTOR_FORWARD   10
  #define RIGHT_MOTOR_ENABLE 12
  #define LEFT_MOTOR_ENABLE 13
#endif

#ifdef CYTRON_MOTOR_DRIVER
#define MOTOR_1_M1A_PIN (14)
#define MOTOR_1_M1B_PIN (27)
#define MOTOR_2_M2A_PIN (0)
#define MOTOR_2_M2B_PIN (4)
#endif

void initMotorController();
void setMotorSpeed(int i, int spd);
void setMotorSpeeds(int leftSpeed, int rightSpeed);
