#include "DVD.h"
#include <stdio.h>

DVD::DVD() {
	name = "DVD";
}

DVD::~DVD() {

}

void DVD::InPut() {
	printf("%s�n\n", name);
}

void DVD::PlayBack() {
	printf("%s�n\n", name);
}
