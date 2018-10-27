#ifndef _161511025_H_INCLUDED
#define _161511025_H_INCLUDED

#include <cmath>
#include "graphics.h"

#define PI 3.14159265359

class Point
{
	public:
		int x;
		int y;
		
	public:
		Point(int x = 0, int y = 0);
		void translation(int xt = 0, int yt = 0);
		void reflection(float gradien = 1.0, float c = 0);
		void rotation(int a = 0, int b = 0, int angle = 0);
		void dilatation(int a = 0, int b = 0, float scale = 1);
};

class Circle
{
	public:
		Point point;
		float radius;
		int color;
		
	public:
		Circle(int x = 0, int y = 0, float radius = 50.0, int color = GREEN);
		void draw(int lineColor = WHITE);
		void translation(int xt = 0, int yt = 0);
		void reflection(float gradien = 1.0, float c = 0);
		void rotation(int a = 0, int b = 0, int angle = 0);
		void dilatation(int a = 0, int b = 0, float scale = 1.0);
		float area();
};

#endif
