
/********
 * Fichier: Bras_servo_control.h
 * Auteurs: Jordan Simard - Christopher Pacheco
 * Date: 9 fevrier 2022
 * Description: Implementation des methodes des classes decrites dans Bras_servo_control.cpp.
********/

#include <Arduino.h>
#include <Wire.h>//https://www.arduino.cc/en/reference/wire
#include <Servo.h>
#include <math.h>

#define nbJoints 3 

// //Parameters



class Bras_servo_control
{
private:
    /* data */
    Servo Joints[nbJoints];
    Servo Effecteur;

    uint8_t J_pins[nbJoints] = {2, 3, 4};
    uint8_t Eff_pin = 5;

    float MIN_ANG[nbJoints] = {0.0, 0.0, 0.0};
    float MAX_ANG[nbJoints] = {270.0, 270.0, 270.0};
    float HOME[nbJoints] = {105.0, 80.0, 180.0};
    float GOAL[nbJoints] = {0.0, 0.0, 0.0};
    float ZEROS[nbJoints] = {105.0, 105.0, 177.0}; //joint3 est actually 90deg
    
    float L1 = 0.095;
    float L2 = 0.160;
    float L3 = 0.180;
    float L4x = 0.05;
    float L4y = 0.088;


    double COEFFS[nbJoints][4] ={ {1.6081*pow(10,-4), -0.0431, 10.3541, 515.1217},
                                {7.5132*pow(10,-5), -0.020724270569472, 9.201324389404880, 513.0813397129187},
                                {1.1107*pow(10,-4), -0.032836268478683, 10.118121283601132, 504.3328776486678} };

    int pickAngle = 40;
    int dropAngle = 130;

public:
    Bras_servo_control();
    ~Bras_servo_control();
    void initServos();
    void goToHome();
    void goTo(float angles[nbJoints]);
    void pick();
    void drop();
    int writeServo(int indJoint, float angle);
};


