#include<stdio.h>
#include "Circle.h"
#include "Rectangle.h"
int main() {
	IShape* iShape[] = {
		new Circle(),
		new Rectangle(),
	};

	iShape[0]->Size();
	iShape[1]->Size();

	iShape[0]->Draw();
	iShape[1]->Draw();

	return 0;
}