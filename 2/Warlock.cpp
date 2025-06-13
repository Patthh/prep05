#include "Warlock.hpp"
#include "ASpell.hpp"
#include "ATarget.hpp"

Warlock::Warlock(const s &n, const s &t): _n(n), _t(t){
	cout << getName() << ": This looks like another boring day." << endl;
}

Warlock::~Warlock(){
	cout << getName() << ": My job here is done!" << endl;
}

const s &Warlock::getName() const{
	return (this->_n);
}

const s &Warlock::getTitle() const{
	return (this->_t);
}

void Warlock::setTitle(const s &t){
	this->_t = t;
}

void Warlock::introduce() const{
	cout << getName() << ": I am " << getName() << ", " << getTitle() << "!" << endl;
}

void Warlock::learnSpell(ASpell *spell){
	_sb.learnSpell(spell);
}

void Warlock::forgetSpell(string spellName){
	_sb.forgetSpell(spellName);
}

void Warlock::launchSpell(string spellName, const ATarget &target){
	ASpell* spell = _sb.createSpell(spellName);
	if (spell){
		spell->launch(target);
		delete spell;
	}
}