#include "ASpell.hpp"
#include "ATarget.hpp"

ASpell::ASpell(const s &n, const s &e):_n(n), _e(e){
	
}
ASpell::~ASpell(){
	
}
s ASpell::getName() const{
	return(this -> _n);
}
s ASpell::getEffects() const{
	return(this -> _e);
}

void ASpell::launch(const ATarget &s) const{
	s.getHitBySpell(*this);
}