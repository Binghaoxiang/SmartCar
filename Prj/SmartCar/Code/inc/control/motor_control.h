#ifndef	__MOTOR_CONTROL_H__
#define	__MOTOR_CONTROL_H__

#include "include.h"
#include "define.h"
#include "params.h"
#include "servo.h"
#include "motor.h"

static uint16 encodeTable[101] = {
 0,   1,   3,   5,   7,   9,  11,  22,  31,  39,  46,  
	 53,  59,  64,  70,  74,  79,  83,  87,  91,  94,  
	 98, 101, 104, 107, 110, 112, 115, 117, 120, 122, 
	124, 127, 129, 131, 133, 135, 137, 138, 140, 142, 
	144, 145, 147, 149, 150, 152, 153, 155, 156, 157, 
	159, 160, 161, 163, 164, 165, 166, 168, 169, 170, 
	171, 172, 173, 174, 175, 177, 178, 179, 180, 181, 
	182, 183, 183, 184, 185, 186, 187, 188, 189, 190, 
	191, 191, 192, 193, 194, 195, 196, 196, 197, 198, 
	199, 199, 200, 201, 202, 202, 203, 204, 204, 205, 
};

int16 calculateChangeSpeed(int16 angle);
void motorPidInit(float _proportion, float _integral, float _derviative);
void updateMotorPid(float _proportion, float _integral, float _derviative);
int16 calculatePidSpeed(int16 currentSpeed, int16 purpostSpeed);

#endif


//static uint16 encodeTable[101] = {
// 0,   1,   2,   3,   4,   6,  14,  21,  27,  32,  37, 
//	 41,  45,  49,  52,  55,  58,  61,  63,  66,  68, 
//	 70,  72,  74,  76,  78,  80,  81,  83,  84,  86, 
//	 87,  89,  90,  92,  93,  94,  95,  96,  98,  99, 
//	100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 
//	110, 111, 111, 112, 113, 114, 115, 115, 116, 117, 
//	118, 118, 119, 120, 120, 121, 122, 122, 123, 124, 
//	124, 125, 126, 126, 127, 127, 128, 129, 129, 130, 
//	130, 131, 131, 132, 132, 133, 133, 134, 135, 135, 
//	136, 136, 136, 137, 137, 138, 138, 139, 139, 140, 
//};

//static uint16 encodeTable[101] = {
//	0, 5, 10, 15, 20, 26, 41, 54, 65, 74, 83, 
//	91, 98, 104, 110, 116, 121, 126, 131, 135, 140, 
//	144, 147, 151, 155, 158, 161, 164, 167, 170, 173, 
//	175, 178, 181, 183, 185, 188, 190, 192, 194, 196, 
//	198, 200, 202, 204, 206, 208, 210, 211, 213, 215, 
//	216, 218, 219, 221, 222, 224, 225, 227, 228, 230, 
//	231, 232, 233, 235, 236, 237, 239, 240, 241, 242, 
//	243, 244, 246, 247, 248, 249, 250, 251, 252, 253, 
//	254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 
//	264, 264, 265, 266, 267, 268, 269, 270, 270, 271 
//};