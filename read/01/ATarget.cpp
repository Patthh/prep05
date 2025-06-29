#include "ASpell.hpp"
#include "ATarget.hpp"

ATarget::ATarget(const str &t): _target(t){}

ATarget::~ATarget(){}

const str &ATarget::getType() const{
	return (this->_target);
}

void	ATarget::getHitBySpell(const ASpell &s) const{
	cout << getType() << " has been " << s.getEffects() << "!" << endl;
}