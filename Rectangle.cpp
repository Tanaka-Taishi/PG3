#include "Rectangle.h"
#include <stdio.h>

Rectangle::Rectangle() {
}

Rectangle::~Rectangle() {

}

void Rectangle::Size() {
	size = vertical * beside;
	printf("‹éŒ`‚Ì–ÊÏ = %f\n", size);
}

void Rectangle::Draw() {
	printf("–ÊÏ = %f‚Ì‹éŒ`‚ğ•`‰æ\n", size);
}