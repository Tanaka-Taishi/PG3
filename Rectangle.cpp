#include "Rectangle.h"
#include <stdio.h>

Rectangle::Rectangle() {
	name = "‹éŒ`";
}

Rectangle::~Rectangle() {

}

void Rectangle::Size() {
	size = vertical * beside;
	printf("%s‚Ì–ÊÏ = %f\n", name, size);
}

void Rectangle::Draw() {
	printf("–ÊÏ = %f‚Ì%s‚ğ•`‰æ\n", size, name);
}