#include <iostream>
#include <string>
#include <exception>
using namespace std;

struct invalid_triangle_exception : public exception{
	const char * what() const throw () {
		return "- Parameter out of range:";
	}
};
struct out_of_range_exception : public exception {
	const char * what() const throw () {
		return "- "
	}
};


string id_triangle(int a, int b, int c)
{
	if (a <= 0)
		throw new out_of_range_exception("a");
	if (b <= 0)
		throw new out_of_range_exception("b");
	if (c <= 0)
		throw new out_of_range_exception("c");

	if (a + b <= c)
		throw new invalid_triangle_exception("a", "b", "c");
	if (a + c <= b)
		throw new invalid_triangle_exception("a", "c", "b");
	if (b + c <= a)
		throw new invalid_triangle_exception("b", "c", "a");

	if (a == b)
	{
		if (b == c)
		{
			return "equilateral";
		}
		else
		{
			return "isosceles";
		}
	}
	else
	{
		if (b == c)
		{
			return "isosceles";
		}
		else
		{
			return "scalene";
		}
	}
};

int main()
{
	int N = 3;
	for (int a = 0; a < N; a++)
	{
		for (int b = 0; b < N; b++)
		{
			for (int c = 0; c < N; c++)
			{
				cout << "a: " << a << ", b: " << b << ", c: " << c << " - ";
				try
				{
					cout << id_triangle(a, b, c) << endl;
				}
				catch (myexception* ex)
				{
					cout << ex->get_message() << endl;
				}
			}
		}
	}
	cin.get();
};