#include "drive.h"
#include "elevator.h"
#include "pins.h"

int main (int argc, char * argv[])
{
	eleSetup();
	driveSetup();

//	driveOn();
	turnLeft(5000);
	driveOff();
	return 0;

	turnLeft(5000);

	driveOff();

	return 0;
}
