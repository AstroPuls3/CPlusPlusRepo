#include <iostream>
#include <iomanip>
using namespace std;



double calculateSD(double data[]);
double calculateAv(double data[]);

int main()
{

	double data[] = { 104, 119, 135, 75, 95, 417, 377, 23, 174, 416, 247, 267, 484, 153, 436, 233,

		274, 425, 242, 92, 232, 121, 258, 312, 379, 152, 243, 393, 354, 389, 446, 197,

		316, 278, 74, 391, 55, 481, 219, 470, 341, 218, 262, 370, 328, 175, 484, 388,

		337, 225, 171, 140, 146, 161, 160, 219, 439, 97, 491, 157, 470, 338, 385, 243,

		222, 237, 365, 240, 17, 172, 63, 386, 453, 65, 261, 121, 87, 54, 55, 424, 309,

		257, 235, 223, 458, 343, 180, 99, 43, 212, 73, 72, 92, 113, 395, 167, 52, 358,

		12, 217 };


	cout << endl << "Standard Deviation = " << setprecision(2) << fixed << calculateSD(data);
	cout << endl << "Average = " << fixed << calculateAv(data);
	cin.get();
	return 0;
}

double calculateSD(double data[])
{
	double sum = 0.0, mean, standardDeviation = 0.0;

	int i;

	for (i = 0; i < 100; i++)
	{
		sum += data[i];
	}

	mean = sum / 100;

	for (i = 0; i < 100; ++i)
		standardDeviation += pow(data[i] - mean, 2);

	return sqrt(standardDeviation / (100 - 1));
}

double calculateAv(double data[]) {
	double average = 0.0;
	double sum = 0.0;
	for (int i = 0; i < 100; i++) {
		sum += data[i];
	}
	return average = ((double)sum) / 100;

}