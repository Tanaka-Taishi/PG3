#pragma once

class IsShape {
public:
	//DVD();
	//~DVD();
	virtual void Size() = 0; // �ʐ�
	virtual void Draw() = 0;//�@�`��

	int vertical = 5;// �c
	int beside = 10;// ��
	int radius = 4;// ���a

	float size = 0;

protected:
	const char* name;
};
