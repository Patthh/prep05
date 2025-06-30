#include "ASpell.hpp"
#include "ATarget.hpp"

ASpell::ASpell(const str &name, const str &effect) : _name(name), _effects(effect) {}

ASpell::~ASpell(){}

str ASpell::getName() const{
	return (this -> _name);
}

str ASpell::getEffects() const{
	return (this -> _effects);
}

void ASpell::launch(const ATarget &s){
	s.getHitBySpell(*this);
}
