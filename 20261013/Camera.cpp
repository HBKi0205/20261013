#include "Camera.h"
#include "DxLib.h"

void Camera::Init()
{
	//三角形の少し上から見る
	position = { 0.0f, 250.0f, -600.0f };
	target = { 0.0f, 0.0f, 0.0f };
}

void Camera::Update()
{
	//カメラ位置と注視点をDxlibに反映
	SetCameraPositionAndTarget_UpVecY(VGet(position.x, position.y, position.z), 
		VGet(target.x, target.y, target.z));
}