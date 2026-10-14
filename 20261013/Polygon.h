#pragma once
#include "Vector3D.h"

class Polygon
{
private:
	Vector3 a;
	Vector3 b;
	Vector3 c;

public:
	//初期化
	void Init();
	//三角形を描画
	void Draw() const;
	//頂点を取得
	Vector3 GetA() const;
	Vector3 GetB() const;
	Vector3 GetC() const;
	//法線ベクトルを取得
	Vector3 GetNormal() const;

};