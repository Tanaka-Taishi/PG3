#pragma once
#include "IShape.h"

class Rectangle : public IShape {
public:
	Rectangle();
	~Rectangle();
	void Size() override;
	void Draw() override;

	int vertical = 5;// �c
	int beside = 10;// ��
	float size = 0;
};


