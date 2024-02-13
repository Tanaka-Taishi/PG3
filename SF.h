#pragma once
#include "DVD.h"

class SF : public DVD {
public:
	SF();
	~SF();
	//void Bark();
	void InPut() override;
	void PlayBack() override;
};
