#include "Circle.h"
#include <stdio.h>

Circle::Circle() {
}

Circle::~Circle() {

}

void Circle::Size() {
	size = radius * radius * 3.14;
	printf("‰~Œ`‚Ì–ÊÏ = %f\n",size);
}

void Circle::Draw() {
	printf("–ÊÏ = %f‚Ì‰~Œ`‚ğ•`‰æ\n",size);
}