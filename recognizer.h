#ifndef __RECOGNIZER_H__
#define __RECOGNIZER_H__

#define RECOGNIZER_GESTURE_POINTS 32

typedef struct POINT
{
	float PosX, PosY;
	int ID;
} RecognizerPoint;

typedef struct POINT_CLOUD
{
	RecognizerPoint Points[RECOGNIZER_GESTURE_POINTS];
} RecognizerGesture;

void gesture_create(RecognizerGesture *pc, RecognizerPoint *points, int length);
int recognizer_classify(RecognizerGesture *gesture, RecognizerGesture *templates, int count);

#endif

