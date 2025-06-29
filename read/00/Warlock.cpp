#include "Warlock.hpp"

const str &Warlock::getName() const{
	return (this -> _name);
}
const str &Warlock::getTitle() const{
	return (this -> _title);
}
void Warlock::setTitle(const str &t){
	this -> _title = t;
}
void Warlock::introduce() const{
	cout << getName() << ": I am " << getName() << ", " <<getTitle() << "!" << endl;
}
Warlock::Warlock(const str &n, const str &t): _name(n), _title(t){
	cout << getName() << ": This looks like another boring day." << endl;
}
Warlock::~Warlock(){
	cout << getName() << ": My job here is done!" << endl;
}

// #include "Warlock.hpp"

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