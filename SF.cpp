#include "SF.h"
#include <stdio.h>

SF::SF() {
	name = "SF";
}

SF::~SF() {

}

void SF::InPut() {
	printf("%sを挿入\n", name);
}
void SF::PlayBack() {
	printf("%sを再生\n", name);
}