#include "SpellBook.hpp"
#include "ASpell.hpp"

typedef map<str, ASpell*> uwu;

SpellBook::SpellBook(){}

SpellBook::~SpellBook(){
	uwu::iterator it = _spells.begin();
	uwu::iterator ite = _spells.end();
	while(it != ite){
		delete it -> second;
		++it;
	}
	_spells.clear();
}

void	SpellBook::learnSpell(ASpell* spell){
	if(spell)
	_spells[spell -> getName()] = spell -> clone(); 
}

void	SpellBook::forgetSpell(str const &sn){
	uwu::iterator it = _spells.find(sn);
	delete it-> second;
	_spells.erase(it);
}

ASpell*	SpellBook::createSpell(str const &sn){
	uwu::iterator it = _spells.find(sn);
	if (it != _spells.end())
		return (it -> second -> clone());
	return NULL;
}
