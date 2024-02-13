#pragma once
#include "DVD.h"

class Horror : public DVD {
public:
	Horror();
	~Horror();
	//void Bark();
	void InPut() override;
	void PlayBack() override;
};
