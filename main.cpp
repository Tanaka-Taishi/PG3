#include<stdio.h>
#include "Circle.h"
#include "Rectangle.h"
int main() {
	IsShape* isShape[] = {
		new Circle(),
		new Rectangle(),
	};

	isShape[0]->Size();
	isShape[1]->Size();

	isShape[0]->Draw();
	isShape[1]->Draw();

	return 0;
}