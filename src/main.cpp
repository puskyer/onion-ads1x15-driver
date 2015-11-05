#include <main.h>

int main(int argc, char* argv[])
{
	int status;
	int value;

	ads1X15*	adsObj	= new ads1X15;

	// setup the verbosity
	adsObj->SetVerbosity(1);
	adsObj->SetDebugMode(1);

#if __BYTE_ORDER == __BIG_ENDIAN
	// Big Endian - MSB in smallest addr
	printf("> Running BIG endian!\n");
#else
	// Little Endian - LSB in smallest addr
	printf("> Running LITTLE endian!\n");
#endif	// __BYTE_ORDER
	
	// run the ADC conversion
	status 	= adsObj->ReadAdc(0, value);

	printf("status is %d, value is %d\n", status, value);


	return 0;
}