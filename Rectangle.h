#pragma once
#include "IsShape.h"

class Rectangle : public IsShape {
public:
	Rectangle();
	~Rectangle();
	//void Bark();
	void Size() override;
	void Draw() override;
};


