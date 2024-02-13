#pragma once

class IsShape {
public:
	//DVD();
	//~DVD();
	virtual void Size() = 0; // ñ êœ
	virtual void Draw() = 0;//Å@ï`âÊ

	int vertical = 5;// èc
	int beside = 10;// â°
	int radius = 4;// îºåa

	float size = 0;

protected:
	const char* name;
};
