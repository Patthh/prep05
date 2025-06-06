#include "Warlock.hpp"

const s &Warlock::getName()const{
	return (this->_namai);
}
const s &Warlock::getTitle()const{
	return (this->_titre);
}
void Warlock::setTitle(const s &title){
	this->_titre= title;
}
void Warlock::introduce() const{
	cout << getName() << ": I am " << getName() << ", " << getTitle() << "!" << endl;
}
Warlock::Warlock(const s &name, const s &title):_namai(name), _titre(title){
	cout << getName() << ": This looks like another boring day." <<endl;
}
Warlock::~Warlock(){
	cout << getName() << ": My job here is done!" <<endl;
}