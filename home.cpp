#include <iostream>
#include <cmath>
using namespace std;

double compute(double a, double b, double z, double x)
{
	if (x < -log(a)) return a * pow(sin(x), 2) + b * cos(z) * x;
    if ((-log(a) < x) && (x <= b)) return pow(a, b) - pow(cos(a + z * x), 3);
    if (x > b) return 2.5 * pow(a, 3) + pow(b - z * pow(x, 2), 6);
    cout << "error" << endl;
}

int main()
{
	int variant;
	double a, b, z, x, y;
		
	while (true)
	{
		cout << "Variant 1: for" << endl;
		cout << "Variant 2: while" << endl;
		cout << "Variant 3: do while" << endl;
		cout << "Select variant: ";
		cin >> variant;
		
		switch (variant) 
		{
			case 1:
				a = 2.8;
				b = 2.1;
				z = log(a);
				
				for (x = -5; x < 5; x = x + 0.1) 
				{
	    			y = compute(a, b, z, x);
	    			cout << "x=" << x << ", y=" << y << endl;
				}
				break;
			
			case 2:
				a = 6.7;
				b = 3.3;
				z = log(b);
				
				x = -5.1;
				while (x < 4.9) 
				{
				    x = x + 0.1;
	    			y = compute(a, b, z, x);
					cout << "x=" << x << ", y=" << y << endl;
				}
				break;
				
			case 3:
				a = 14.2;
				b = 4.2;
				z = log(a * b);
				
				x = -5.1;
				do 
				{
				    x = x + 0.1;
	    			y = compute(a, b, z, x);
	    			cout << "x=" << x << ", y=" << y << endl;
				}
				while (x < 4.9);
				break;
		}
	}
}
