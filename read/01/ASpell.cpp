#include "ASpell.hpp"
#include "ATarget.hpp"

ASpell::ASpell(const str &n, const str &e):_name(n), _effect(e){}

ASpell::~ASpell(){}

str ASpell::getName() const{
	return(this -> _name);
}
str ASpell::getEffects() const{
	return(this -> _effect);
}

void ASpell::launch(const ATarget &s) const{
	s.getHitBySpell(*this);
}