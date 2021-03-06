#pragma once

#pragma comment(lib,"winmm.lib")

#include "cinder/app/AppNative.h"
#include "cinder/gl/gl.h"

#include <iostream>
#include <Windows.h>
#include <mmsystem.h>

class JoyController :public ci::app::AppNative{
	float maxSlopNum = 65535.f;

	ci::Vec3f leftStickValue = ci::Vec3f(0.f, 0.f, 0.f);
	ci::Vec3f rightStickValue = ci::Vec3f(0.f, 0.f, 0.f);

public:
	JOYINFOEX joy;

	void SetUp();
	void Debug();

	float StickValueNomalize(unsigned long value);

	bool MoveDecision(float stickValue, float limitValue);
};
