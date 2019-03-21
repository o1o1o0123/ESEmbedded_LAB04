#include "blink.h"

int main(void)
{
	blink_count(LED_GREEN, 20);
	blink_count(LED_ORANGE, 20);
	blink_count(LED_RED, 20);
	blink(LED_BLUE);
}
