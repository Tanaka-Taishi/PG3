#include "Circle.h"
#include <stdio.h>

Circle::Circle() {
	name = "�~�`";
}

Circle::~Circle() {

}

void Circle::Size() {
	size = radius * radius * 3.14;
	printf("%s�̖ʐ� = %f\n", name,size);
}

void Circle::Draw() {
	printf("�ʐ� = %f��%s��`��\n",size, name);
}