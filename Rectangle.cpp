#include "Rectangle.h"
#include <stdio.h>

Rectangle::Rectangle() {
}

Rectangle::~Rectangle() {

}

void Rectangle::Size() {
	size = vertical * beside;
	printf("��`�̖ʐ� = %f\n", size);
}

void Rectangle::Draw() {
	printf("�ʐ� = %f�̋�`��`��\n", size);
}