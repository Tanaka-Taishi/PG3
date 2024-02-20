#pragma once
#include "IShape.h"

class Circle : public IShape {
public:
	Circle();
	~Circle();
	//void Bark();
	void Size() override;
	void Draw() override;

	int radius = 4;// ”¼Œa
	float size = 0;
};

