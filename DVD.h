#pragma once

class DVD {
public:
	DVD();
	~DVD();

	//void Bark();

	virtual void InPut();
	virtual void PlayBack();
protected:
	const char* name;
};
