#include "ASpell.hpp"
#include "ATarget.hpp"

ATarget::ATarget(const str &target) : _target(target) {}

ATarget::~ATarget(){}

const str &ATarget::getType() const{
	return (this -> _target);
}

void ATarget::getHitBySpell(const ASpell &spell) const{
	cout << getType() << " has been " << spell.getEffects() << "!" << endl;
}
