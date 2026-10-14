#pragma once
#include "Vector3D.h"

class Camera
{
private:
	Vector3 position; 
	Vector3 target;

public:
	//‰ŠúˆÊ’u
	void Init();
	//XVî•ñ
	void Update();

};

