#pragma once

struct Vector2
{
	float x;
	float y;
};

struct Player
{
	Vector2 pos;
	Vector2 velocity;
	int radius;
};

struct Map
{
	int width;
	int height;
};
