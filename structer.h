#pragma once

//�\���̂̐錾

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
