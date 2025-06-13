#include "ASpell.hpp"
#include "ATarget.hpp"

ATarget::ATarget(const s &t): _t(t){

}
ATarget::~ATarget(){
	
}
const s &ATarget::getType() const{
	return (this->_t);
}

void	ATarget::getHitBySpell(const ASpell &s) const{
	cout << getType() << " has been " << s.getEffects() << "!" << endl;
}