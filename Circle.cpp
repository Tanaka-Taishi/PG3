#include "Circle.h"
#include <stdio.h>

Circle::Circle() {
}

Circle::~Circle() {

}

void Circle::Size() {
	size = radius * radius * 3.14;
	printf("�~�`�̖ʐ� = %f\n",size);
}

void Circle::Draw() {
	printf("�ʐ� = %f�̉~�`��`��\n",size);
}