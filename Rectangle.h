#pragma once
#include "IShape.h"

class Rectangle : public IShape {
public:
	Rectangle();
	~Rectangle();
	void Size() override;
	void Draw() override;

	int vertical = 5;// èc
	int beside = 10;// â°
	float size = 0;
};


