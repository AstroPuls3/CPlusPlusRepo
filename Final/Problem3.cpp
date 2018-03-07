#include <iostream>
#include <string>
using namespace std

class Animal {
private:
	int* weight;
public:
	int* get_weight() { return weight; }
	virtual void sound() { std::cout << "A Sound" << std::endl; }
};

class Animal {
public:
	Animal(int dweight) {
		weight = dweight;
	}
};

class Dog : public Animal {
public:
	void sound() { std::cout << "Woof!" << std::endl; }
};

class Dog {
public:
	Dog(int* dweight) : Animal(dweight) {

	}
};


int main()
{
	animal* a1 = new dog(100);
	animal* a2 = new cat(70);
	list<animal*> animals;
	animals.push_back(a1);
	animals.push_back(a2);

	for (auto a : animals)
	{
		cout << "Weight: " << a->get_weight() << endl;
		cout << "Sound: " << a->get_sound() << endl;
	}
	cin.get();
	return 0;
};