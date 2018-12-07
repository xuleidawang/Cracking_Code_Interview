#include<iostream>
#include <string>
#include <forward_list>
using namespace std;

class Animal{
public:
	enum Type{Dog, Cat};
	Type type;
	int order;
	string name;
	Animal(string n):name(n){}
	void setOrder(int ord){order = ord;}
	int getOrder(){return order;}

	bool isOrderThan(Animal a){
		return this->order < a.getOrder();
	}
};


class AnimalQueue{
	forward_list<Animal> dogs = forward_list<Animal>();
	forward_list<Animal> cats = forward_list<Animal>();
	int order = 0;

	void enqueue(Animal a){
	// order is used as a sort of timestamp, so that we can compare the insertion order
	a.setOrder(order);
	order++;
	if(a.type==Animal::Dog)dogs.insert_after(dogs.end(), a);
	else cats.insert_after(cats.end(),a);

	}

	Animal dequeueAny(){
		if(dogs.begin()==dogs.end())
			return dequeueCats();
		else if(cats.begin()==cats.end())
			return dequeueDogs();
		if(cats.front().isOrderThan(dogs.front()))
			return dequeueCats();
		else return dequeueDogs();
	}

	Animal dequeueDogs(){
		Animal ret = dogs.front();
		dogs.pop_front();
		return ret;
	}
	Animal dequeueCats(){
		Animal ret = cats.front();
		cats.pop_front();
		return ret;
	}
};


int main(int argc, char const *argv[])
{
	/* code */
	return 0;
}