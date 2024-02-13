#include "Circle.h"
#include <stdio.h>

Circle::Circle() {
	name = "‰~Œ`";
}

Circle::~Circle() {

}

void Circle::Size() {
	size = radius * radius * 3.14;
	printf("%s‚Ì–ÊÏ = %f\n", name,size);
}

void Circle::Draw() {
	printf("–ÊÏ = %f‚Ì%s‚ğ•`‰æ\n",size, name);
}