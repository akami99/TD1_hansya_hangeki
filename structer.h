#pragma once

//構造体の宣言

struct Vector2
{
	float x;
	float y;
};

struct Player
{
	Vector2 pos;
	int speed;
	int radius;
};

struct Map
{
	int width;
	int height;
};
