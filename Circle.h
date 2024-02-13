#pragma once
#include "IsShape.h"

class Circle : public IsShape {
public:
	Circle();
	~Circle();
	//void Bark();
	void Size() override;
	void Draw() override;
};

