#include "Warlock.hpp"

const s &Warlock::getName() const{
	return (this -> _n);
}
const s &Warlock::getTitle() const{
	return (this -> _n);
}
void Warlock::setTitle(const s &t){
	this -> _t = t;
}
void Warlock::introduce() const{
	cout << getName() << ": I am " << getName() << ", " <<getTitle() << "!" << endl;
}
Warlock::Warlock(const s &n, const s &t): _n(n), _t(t){
	cout << getName() << ": This looks like another boring day." << endl;
}
Warlock::~Warlock(){
	cout << getName() << ": My job here is done!" << endl;
}