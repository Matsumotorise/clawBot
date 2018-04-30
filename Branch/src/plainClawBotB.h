#pragma config(I2C_Usage, I2C1, i2cSensors)
#pragma config(Sensor, in3,    potentiometer,  sensorPotentiometer)
#pragma config(Sensor, in4,    light,          sensorReflection)
#pragma config(Sensor, in6,    accelZ,         sensorAccelerometer)
#pragma config(Sensor, in7,    accelY,         sensorAccelerometer)
#pragma config(Sensor, in8,    accelX,         sensorAccelerometer)
#pragma config(Sensor, dgtl1,  rightEncoder,   sensorQuadEncoder)
#pragma config(Sensor, dgtl3,  leftEncoder,    sensorQuadEncoder)
#pragma config(Sensor, dgtl6,  frontTouch,     sensorTouch)
#pragma config(Sensor, dgtl8,  sonarCM,        sensorSONAR_cm)
#pragma config(Sensor, dgtl11, backTouch,      sensorTouch)
#pragma config(Sensor, dgtl12, led,            sensorLEDtoVCC)
#pragma config(Sensor, I2C_3,  ,               sensorQuadEncoderOnI2CPort,    , AutoAssign )
#pragma config(Motor,  port1,           leftMotor,    tmotorVex393_HBridge, openLoop, driveLeft)
#pragma config(Motor,  port6,           ArmMotor,      tmotorVex393_MC29, PIDControl, encoderPort, I2C_3)
#pragma config(Motor,  port7,           ClawMotor,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port8,           BackGearRack,  tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port10,          rightMotor,   tmotorVex393_HBridge, openLoop, driveRight)
