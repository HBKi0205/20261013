#pragma once
#include <cmath>

//3Dベクトル
struct Vector3
{
	float x, y, z;
};

//ベクトルの引き算
inline Vector3 Subtract(Vector3 a, Vector3 b)
{
	return { a.x - b.x, a.y - b.y, a.z - b.z };
}

//内積：2つのベクトルの向きや距離の計算に使う
inline float Dot(Vector3 a, Vector3 b)
{
	return a.x * b.x + a.y * b.y + a.z * b.z;
}

//外積：2つのベクトルの垂直なベクトルを求める
inline Vector3 Cross(Vector3 a, Vector3 b)
{
	return { a.y * b.z - a.z * b.y, a.z * b.x - a.x * b.z, a.x * b.y - a.y * b.x };
}

//ベクトルの長さ
inline float Length(Vector3 v)
{
	return std::sqrt(Dot(v, v));
}

//長さを1にそろえる
inline Vector3 Normalize(Vector3 v)
{
	float length = Length(v);

	if (length <= 0.0001f) {
		return { 0.1f, 0.1f, 0.1f };
	}
	return { v.x / length, v.y / length, v.z / length };
}