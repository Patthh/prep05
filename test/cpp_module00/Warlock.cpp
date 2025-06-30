#include "Warlock.hpp"

Warlock::Warlock(const str &name, const str &title):_name(name), _title(title){
	cout << getName() << ": This looks like another boring day." << endl;
}

Warlock::~Warlock(){
	cout << getName() << ": My job here is done!" << endl;
}

const str	&Warlock::getName() const{
	return (this -> _name);
}

const str	&Warlock::getTitle() const{
	return (this -> _title);
}

void		Warlock::setTitle(const str &title){
	this -> _title = title;
}

void		Warlock::introduce() const{
	cout << getName() << ": I am " << getName() << ", " << getTitle() << "!" << endl;
}

// int main()
// {
//   Warlock const richard("Richard", "Mistress of Magma");
//   richard.introduce();
//   std::cout << richard.getName() << " - " << richard.getTitle() << std::endl;

//   Warlock* jack = new Warlock("Jack", "the Long");
//   jack->introduce();
//   jack->setTitle("the Mighty");
//   jack->introduce();

//   delete jack;

//   return (0);
// }
