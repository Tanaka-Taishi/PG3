#include "Rectangle.h"
#include <stdio.h>

Rectangle::Rectangle() {
	name = "��`";
}

Rectangle::~Rectangle() {

}

void Rectangle::Size() {
	size = vertical * beside;
	printf("%s�̖ʐ� = %f\n", name, size);
}

void Rectangle::Draw() {
	printf("�ʐ� = %f��%s��`��\n", size, name);
}