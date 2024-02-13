#pragma once
#include "DVD.h"

class Comedy : public DVD {
public:
	Comedy();
	~Comedy();
	//void Bark();
	void InPut() override;
	void PlayBack() override;
};
